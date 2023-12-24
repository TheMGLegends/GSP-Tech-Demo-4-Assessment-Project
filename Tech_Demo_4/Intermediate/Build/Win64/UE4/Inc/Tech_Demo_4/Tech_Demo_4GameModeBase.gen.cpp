// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tech_Demo_4/Tech_Demo_4GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTech_Demo_4GameModeBase() {}
// Cross Module References
	TECH_DEMO_4_API UClass* Z_Construct_UClass_ATech_Demo_4GameModeBase_NoRegister();
	TECH_DEMO_4_API UClass* Z_Construct_UClass_ATech_Demo_4GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Tech_Demo_4();
	TECH_DEMO_4_API UClass* Z_Construct_UClass_ACharacterController_NoRegister();
	TECH_DEMO_4_API UClass* Z_Construct_UClass_APickupLocationController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	TECH_DEMO_4_API UClass* Z_Construct_UClass_APickupController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATech_Demo_4GameModeBase::execGetSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATech_Demo_4GameModeBase::execGetMinutes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetMinutes();
		P_NATIVE_END;
	}
	void ATech_Demo_4GameModeBase::StaticRegisterNativesATech_Demo_4GameModeBase()
	{
		UClass* Class = ATech_Demo_4GameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMinutes", &ATech_Demo_4GameModeBase::execGetMinutes },
			{ "GetSeconds", &ATech_Demo_4GameModeBase::execGetSeconds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetMinutes_Statics
	{
		struct Tech_Demo_4GameModeBase_eventGetMinutes_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetMinutes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tech_Demo_4GameModeBase_eventGetMinutes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetMinutes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetMinutes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetMinutes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetMinutes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATech_Demo_4GameModeBase, nullptr, "GetMinutes", nullptr, nullptr, sizeof(Tech_Demo_4GameModeBase_eventGetMinutes_Parms), Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetMinutes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetMinutes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetMinutes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetMinutes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetMinutes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetMinutes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetSeconds_Statics
	{
		struct Tech_Demo_4GameModeBase_eventGetSeconds_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tech_Demo_4GameModeBase_eventGetSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATech_Demo_4GameModeBase, nullptr, "GetSeconds", nullptr, nullptr, sizeof(Tech_Demo_4GameModeBase_eventGetSeconds_Parms), Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATech_Demo_4GameModeBase_NoRegister()
	{
		return ATech_Demo_4GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Players_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Players;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupLocations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PickupLocations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlueMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RedMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterHUDOverlayAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CharacterHUDOverlayAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterHUDOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterHUDOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountdownTimerHUDOverlayAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CountdownTimerHUDOverlayAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountdownTimerHUDOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CountdownTimerHUDOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Minutes_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Minutes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Seconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxRounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Round_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Round;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinnerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WinnerName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WinnerVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinnerVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WinnerVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BattleMusic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BattleMusic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoubleDamageMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoubleDamageMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmmoMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoveryMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RecoveryMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PickupObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoundOverVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundOverVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RoundOverVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Audio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tech_Demo_4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetMinutes, "GetMinutes" }, // 3924679370
		{ &Z_Construct_UFunction_ATech_Demo_4GameModeBase_GetSeconds, "GetSeconds" }, // 2338556874
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Tech_Demo_4GameModeBase.h" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacterController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Players_MetaData[] = {
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, Players), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Players_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Players_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_PickupLocations_Inner = { "PickupLocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APickupLocationController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_PickupLocations_MetaData[] = {
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_PickupLocations = { "PickupLocations", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, PickupLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_PickupLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_PickupLocations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_BlueMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_BlueMaterial = { "BlueMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, BlueMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_BlueMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_BlueMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_RedMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_RedMaterial = { "RedMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, RedMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_RedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_RedMaterial_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Materials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_CharacterHUDOverlayAsset_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_CharacterHUDOverlayAsset = { "CharacterHUDOverlayAsset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, CharacterHUDOverlayAsset), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_CharacterHUDOverlayAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_CharacterHUDOverlayAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_CharacterHUDOverlay_MetaData[] = {
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_CharacterHUDOverlay = { "CharacterHUDOverlay", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, CharacterHUDOverlay), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_CharacterHUDOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_CharacterHUDOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_CountdownTimerHUDOverlayAsset_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_CountdownTimerHUDOverlayAsset = { "CountdownTimerHUDOverlayAsset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, CountdownTimerHUDOverlayAsset), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_CountdownTimerHUDOverlayAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_CountdownTimerHUDOverlayAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_CountdownTimerHUDOverlay_MetaData[] = {
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_CountdownTimerHUDOverlay = { "CountdownTimerHUDOverlay", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, CountdownTimerHUDOverlay), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_CountdownTimerHUDOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_CountdownTimerHUDOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Minutes_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Minutes = { "Minutes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, Minutes), METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Minutes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Minutes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Seconds_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, Seconds), METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Seconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Seconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_MaxRounds_MetaData[] = {
		{ "Category", "Rounds" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_MaxRounds = { "MaxRounds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, MaxRounds), METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_MaxRounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_MaxRounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Round_MetaData[] = {
		{ "Category", "Rounds" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Round = { "Round", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, Round), METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Round_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Round_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_WinnerName_MetaData[] = {
		{ "Category", "Winner" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_WinnerName = { "WinnerName", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, WinnerName), METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_WinnerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_WinnerName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_WinnerVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_WinnerVisibility_MetaData[] = {
		{ "Category", "Winner" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_WinnerVisibility = { "WinnerVisibility", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, WinnerVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_WinnerVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_WinnerVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_BattleMusic_MetaData[] = {
		{ "Category", "Music" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_BattleMusic = { "BattleMusic", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, BattleMusic), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_BattleMusic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_BattleMusic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_DoubleDamageMaterial_MetaData[] = {
		{ "Category", "Pickup Colors" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_DoubleDamageMaterial = { "DoubleDamageMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, DoubleDamageMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_DoubleDamageMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_DoubleDamageMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_AmmoMaterial_MetaData[] = {
		{ "Category", "Pickup Colors" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_AmmoMaterial = { "AmmoMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, AmmoMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_AmmoMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_AmmoMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_RecoveryMaterial_MetaData[] = {
		{ "Category", "Pickup Colors" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_RecoveryMaterial = { "RecoveryMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, RecoveryMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_RecoveryMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_RecoveryMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_PickupObject_MetaData[] = {
		{ "Category", "Spawner Category" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_PickupObject = { "PickupObject", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, PickupObject), Z_Construct_UClass_APickupController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_PickupObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_PickupObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_RoundOverVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_RoundOverVisibility_MetaData[] = {
		{ "Category", "Round Over" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_RoundOverVisibility = { "RoundOverVisibility", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, RoundOverVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_RoundOverVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_RoundOverVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Audio_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, Audio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Audio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Audio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Players_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Players,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_PickupLocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_PickupLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_BlueMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_RedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_CharacterHUDOverlayAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_CharacterHUDOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_CountdownTimerHUDOverlayAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_CountdownTimerHUDOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Minutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Seconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_MaxRounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Round,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_WinnerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_WinnerVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_WinnerVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_BattleMusic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_DoubleDamageMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_AmmoMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_RecoveryMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_PickupObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_RoundOverVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_RoundOverVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Audio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATech_Demo_4GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::ClassParams = {
		&ATech_Demo_4GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATech_Demo_4GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATech_Demo_4GameModeBase, 1521059157);
	template<> TECH_DEMO_4_API UClass* StaticClass<ATech_Demo_4GameModeBase>()
	{
		return ATech_Demo_4GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATech_Demo_4GameModeBase(Z_Construct_UClass_ATech_Demo_4GameModeBase, &ATech_Demo_4GameModeBase::StaticClass, TEXT("/Script/Tech_Demo_4"), TEXT("ATech_Demo_4GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATech_Demo_4GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
