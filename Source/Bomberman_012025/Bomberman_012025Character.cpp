// Copyright Epic Games, Inc. All Rights Reserved.

#include "Bomberman_012025Character.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Bomba.h"
#include "InvokerBombManager.h"
#include "ComandoColocarBomba.h"
#include "MementoJugador.h"
#include "IMemento.h"
#include "IOriginador.h"
#include "CuidadorJugador.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"
#include "Bomberman_012025GameMode.h"


//////////////////////////////////////////////////////////////////////////
// ABomberman_012025Character

ABomberman_012025Character::ABomberman_012025Character()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	Vida = 100;// MEMENTO vida jugador 

}

//////////////////////////////////////////////////////////////////////////
// Input

void ABomberman_012025Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &ABomberman_012025Character::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABomberman_012025Character::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ABomberman_012025Character::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ABomberman_012025Character::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ABomberman_012025Character::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ABomberman_012025Character::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ABomberman_012025Character::OnResetVR);
	PlayerInputComponent->BindAction("ColocarBomba", IE_Pressed, this, &ABomberman_012025Character::InputColocarBomba);
	PlayerInputComponent->BindAction("Restaurar", IE_Pressed, this, &ABomberman_012025Character::RestaurarEstadoJugador);

}

void ABomberman_012025Character::BeginPlay()
{
	Super::BeginPlay();

	// 1. Obtener el GameMode y el InvokerBombManager
	if (AGameModeBase* GM = UGameplayStatics::GetGameMode(GetWorld()))
	{
		if (ABomberman_012025GameMode* BomberGM = Cast<ABomberman_012025GameMode>(GM))
		{
			InvokerBombManager = BomberGM->GetInvokerBombManager();
		}
	}

	// 2. Crear el comando y asociarlo a este personaje
	if (InvokerBombManager)
	{
		ComandoColocarBombaInstance = GetWorld()->SpawnActor<AComandoColocarBomba>();
		if (ComandoColocarBombaInstance)
		{
			ComandoColocarBombaInstance->Inicializar(this);
			UE_LOG(LogTemp, Warning, TEXT("ComandoColocarBomba creado e inicializado."));
		}
	}
	// Crear el Cuidador si no existe
	if (!CuidadorJugador)
	{
		UWorld* World = GetWorld();
		if (World)
		{
			CuidadorJugador = World->SpawnActor<ACuidadorJugador>(ACuidadorJugador::StaticClass());
		}
	}
}

void ABomberman_012025Character::InputColocarBomba()
{
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Colocar bomba (Command)"));

	if (InvokerBombManager && ComandoColocarBombaInstance)
	{
		InvokerBombManager->SetComando(ComandoColocarBombaInstance);
		InvokerBombManager->EjecutarComando();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Invoker o Comando no inicializados"));
	}
}
ABomba* ABomberman_012025Character::ColocarBomba()
{
	if (!ClaseBomba) return nullptr;

	FVector Ubicacion = GetActorLocation();
	FRotator Rotacion = FRotator::ZeroRotator;

	FActorSpawnParameters Params;
	Params.Owner = this;

	ABomba* NuevaBomba = GetWorld()->SpawnActor<ABomba>(ClaseBomba, Ubicacion, Rotacion, Params);

	if (NuevaBomba)
	{
		UE_LOG(LogTemp, Warning, TEXT("Bomba colocada en %s"), *Ubicacion.ToString());
	}

	return NuevaBomba;
}

void ABomberman_012025Character::GuardarEstado(IIMemento* Memento)
{
	AMementoJugador* MementoJugador = Cast<AMementoJugador>(Memento);
	if (MementoJugador)
	{
		// Guardar vida y posición en el memento desde el jugador
		MementoJugador->VidaGuardada = Vida;
		MementoJugador->PosicionGuardada = GetActorLocation();
	}
}

void ABomberman_012025Character::RestaurarDesdeMemento(AMementoJugador* Memento)
{
	if (Memento)
	{
		Vida = Memento->VidaGuardada;
		SetActorLocation(Memento->PosicionGuardada);

		// Mostrar info para verificar
		MostrarEstado();
	}
}

void ABomberman_012025Character::MostrarEstado()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green,
			FString::Printf(TEXT("Vida: %d, Posición: %s"), Vida, *GetActorLocation().ToString()));
	}
}

void ABomberman_012025Character::Morir()
{
	ACuidadorJugador* Cuidador = Cast<ACuidadorJugador>(UGameplayStatics::GetActorOfClass(GetWorld(), ACuidadorJugador::StaticClass()));
	if (Cuidador)
	{
		Destroy(); // Destruye al jugador actual
		Cuidador->Restaurar(nullptr); // Dispara el respawn
	}
}

void ABomberman_012025Character::RestaurarEstadoJugador()
{
	if (CuidadorJugador)
	{
		CuidadorJugador->Restaurar(this);
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("Estado restaurado correctamente"));
		}
	}
	else
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, TEXT("No se encontró el cuidador para restaurar"));
		}
	}
}
void ABomberman_012025Character::SetVida(int NuevaVida)
{
	Vida = NuevaVida;
}

void ABomberman_012025Character::OnResetVR()
{
	// If Bomberman_012025 is added to a project via 'Add Feature' in the Unreal Editor the dependency on HeadMountedDisplay in Bomberman_012025.Build.cs is not automatically propagated
	// and a linker error will result.
	// You will need to either:
	//		Add "HeadMountedDisplay" to [YourProject].Build.cs PublicDependencyModuleNames in order to build successfully (appropriate if supporting VR).
	// or:
	//		Comment or delete the call to ResetOrientationAndPosition below (appropriate if not supporting VR)
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ABomberman_012025Character::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void ABomberman_012025Character::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void ABomberman_012025Character::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ABomberman_012025Character::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ABomberman_012025Character::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ABomberman_012025Character::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}
