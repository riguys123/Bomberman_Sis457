// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/Public/ETipoBloque.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETipoBloque() {}
// Cross Module References
	BOMBERMAN_012025_API UEnum* Z_Construct_UEnum_Bomberman_012025_ETipoBloque();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
// End Cross Module References
	static UEnum* ETipoBloque_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Bomberman_012025_ETipoBloque, Z_Construct_UPackage__Script_Bomberman_012025(), TEXT("ETipoBloque"));
		}
		return Singleton;
	}
	template<> BOMBERMAN_012025_API UEnum* StaticEnum<ETipoBloque>()
	{
		return ETipoBloque_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETipoBloque(ETipoBloque_StaticEnum, TEXT("/Script/Bomberman_012025"), TEXT("ETipoBloque"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Bomberman_012025_ETipoBloque_Hash() { return 2821301701U; }
	UEnum* Z_Construct_UEnum_Bomberman_012025_ETipoBloque()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Bomberman_012025();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETipoBloque"), 0, Get_Z_Construct_UEnum_Bomberman_012025_ETipoBloque_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETipoBloque::Libre", (int64)ETipoBloque::Libre },
				{ "ETipoBloque::Acero", (int64)ETipoBloque::Acero },
				{ "ETipoBloque::Ladrillo", (int64)ETipoBloque::Ladrillo },
				{ "ETipoBloque::Madera", (int64)ETipoBloque::Madera },
				{ "ETipoBloque::Burbuja", (int64)ETipoBloque::Burbuja },
				{ "ETipoBloque::Electrico", (int64)ETipoBloque::Electrico },
				{ "ETipoBloque::Hongo", (int64)ETipoBloque::Hongo },
				{ "ETipoBloque::Lava", (int64)ETipoBloque::Lava },
				{ "ETipoBloque::Concreto", (int64)ETipoBloque::Concreto },
				{ "ETipoBloque::Arena", (int64)ETipoBloque::Arena },
				{ "ETipoBloque::Hielo", (int64)ETipoBloque::Hielo },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Acero.Comment", "// 0\n" },
				{ "Acero.DisplayName", "Acero" },
				{ "Acero.Name", "ETipoBloque::Acero" },
				{ "Acero.ToolTip", "0" },
				{ "Arena.Comment", "// 8\n" },
				{ "Arena.DisplayName", "Arena" },
				{ "Arena.Name", "ETipoBloque::Arena" },
				{ "Arena.ToolTip", "8" },
				{ "BlueprintType", "true" },
				{ "Burbuja.Comment", "// 3\n" },
				{ "Burbuja.DisplayName", "Burbuja" },
				{ "Burbuja.Name", "ETipoBloque::Burbuja" },
				{ "Burbuja.ToolTip", "3" },
				{ "Concreto.Comment", "// 7\n" },
				{ "Concreto.DisplayName", "Concreto" },
				{ "Concreto.Name", "ETipoBloque::Concreto" },
				{ "Concreto.ToolTip", "7" },
				{ "Electrico.Comment", "// 4\n" },
				{ "Electrico.DisplayName", "Electrico" },
				{ "Electrico.Name", "ETipoBloque::Electrico" },
				{ "Electrico.ToolTip", "4" },
				{ "Hielo.Comment", "// 9\n" },
				{ "Hielo.DisplayName", "Hielo" },
				{ "Hielo.Name", "ETipoBloque::Hielo" },
				{ "Hielo.ToolTip", "9" },
				{ "Hongo.Comment", "// 5\n" },
				{ "Hongo.DisplayName", "Hongo" },
				{ "Hongo.Name", "ETipoBloque::Hongo" },
				{ "Hongo.ToolTip", "5" },
				{ "Ladrillo.Comment", "// 1\n" },
				{ "Ladrillo.DisplayName", "Ladrillo" },
				{ "Ladrillo.Name", "ETipoBloque::Ladrillo" },
				{ "Ladrillo.ToolTip", "1" },
				{ "Lava.Comment", "// 6\n" },
				{ "Lava.DisplayName", "Lava" },
				{ "Lava.Name", "ETipoBloque::Lava" },
				{ "Lava.ToolTip", "6" },
				{ "Libre.DisplayName", "Libre" },
				{ "Libre.Name", "ETipoBloque::Libre" },
				{ "Madera.Comment", "// 2\n" },
				{ "Madera.DisplayName", "Madera" },
				{ "Madera.Name", "ETipoBloque::Madera" },
				{ "Madera.ToolTip", "2" },
				{ "ModuleRelativePath", "Public/ETipoBloque.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Bomberman_012025,
				nullptr,
				"ETipoBloque",
				"ETipoBloque",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
