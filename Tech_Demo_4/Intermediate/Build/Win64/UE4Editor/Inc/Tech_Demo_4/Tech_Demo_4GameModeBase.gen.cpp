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
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
// End Cross Module References
	void ATech_Demo_4GameModeBase::StaticRegisterNativesATech_Demo_4GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATech_Demo_4GameModeBase_NoRegister()
	{
		return ATech_Demo_4GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Players_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Players;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tech_Demo_4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, Players), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Players_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Players_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATech_Demo_4GameModeBase, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Materials_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Players_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Players,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::NewProp_Materials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATech_Demo_4GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::ClassParams = {
		&ATech_Demo_4GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(ATech_Demo_4GameModeBase, 639917673);
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
