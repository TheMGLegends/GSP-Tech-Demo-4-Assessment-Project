// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tech_Demo_4/CountdownWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCountdownWidget() {}
// Cross Module References
	TECH_DEMO_4_API UClass* Z_Construct_UClass_UCountdownWidget_NoRegister();
	TECH_DEMO_4_API UClass* Z_Construct_UClass_UCountdownWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Tech_Demo_4();
	TECH_DEMO_4_API UClass* Z_Construct_UClass_ATech_Demo_4GameModeBase_NoRegister();
// End Cross Module References
	void UCountdownWidget::StaticRegisterNativesUCountdownWidget()
	{
	}
	UClass* Z_Construct_UClass_UCountdownWidget_NoRegister()
	{
		return UCountdownWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCountdownWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameModeBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCountdownWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Tech_Demo_4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCountdownWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CountdownWidget.h" },
		{ "ModuleRelativePath", "CountdownWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCountdownWidget_Statics::NewProp_GameModeBase_MetaData[] = {
		{ "Category", "Gamemode Base" },
		{ "ModuleRelativePath", "CountdownWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCountdownWidget_Statics::NewProp_GameModeBase = { "GameModeBase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCountdownWidget, GameModeBase), Z_Construct_UClass_ATech_Demo_4GameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCountdownWidget_Statics::NewProp_GameModeBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCountdownWidget_Statics::NewProp_GameModeBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCountdownWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCountdownWidget_Statics::NewProp_GameModeBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCountdownWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCountdownWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCountdownWidget_Statics::ClassParams = {
		&UCountdownWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCountdownWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCountdownWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCountdownWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCountdownWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCountdownWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCountdownWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCountdownWidget, 2397241260);
	template<> TECH_DEMO_4_API UClass* StaticClass<UCountdownWidget>()
	{
		return UCountdownWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCountdownWidget(Z_Construct_UClass_UCountdownWidget, &UCountdownWidget::StaticClass, TEXT("/Script/Tech_Demo_4"), TEXT("UCountdownWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCountdownWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
