// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorEjercito.h"

// Sets default values
ADirectorEjercito::ADirectorEjercito()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorEjercito::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirectorEjercito::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
//UPROPERTY()
//IIEjercitoBuilder* Builder;
