// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tech_Demo_4/CharacterWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterWidget() {}
// Cross Module References
	TECH_DEMO_4_API UClass* Z_Construct_UClass_UCharacterWidget_NoRegister();
	TECH_DEMO_4_API UClass* Z_Construct_UClass_UCharacterWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Tech_Demo_4();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	TECH_DEMO_4_API UClass* Z_Construct_UClass_ACharacterController_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterWidget::execFade)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fade();
		P_NATIVE_END;
	}
	void UCharacterWidget::StaticRegisterNativesUCharacterWidget()
	{
		UClass* Class = UCharacterWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fade", &UCharacterWidget::execFade },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterWidget_Fade_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterWidget_Fade_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fade" },
		{ "ModuleRelativePath", "CharacterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterWidget_Fade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterWidget, nullptr, "Fade", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterWidget_Fade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterWidget_Fade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterWidget_Fade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterWidget_Fade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterWidget_NoRegister()
	{
		return UCharacterWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FadeEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Tech_Demo_4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterWidget_Fade, "Fade" }, // 1143811952
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterWidget.h" },
		{ "ModuleRelativePath", "CharacterWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::NewProp_CharacterPawn_MetaData[] = {
		{ "Category", "Character Object" },
		{ "ModuleRelativePath", "CharacterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterWidget_Statics::NewProp_CharacterPawn = { "CharacterPawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterWidget, CharacterPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_CharacterPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_CharacterPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::NewProp_CharacterController_MetaData[] = {
		{ "Category", "Character Controller" },
		{ "ModuleRelativePath", "CharacterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterWidget_Statics::NewProp_CharacterController = { "CharacterController", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterWidget, CharacterController), Z_Construct_UClass_ACharacterController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_CharacterController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_CharacterController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::NewProp_FadeEffect_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "CharacterWidget" },
		{ "ModuleRelativePath", "CharacterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterWidget_Statics::NewProp_FadeEffect = { "FadeEffect", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterWidget, FadeEffect), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_FadeEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_FadeEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterWidget_Statics::NewProp_CharacterPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterWidget_Statics::NewProp_CharacterController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterWidget_Statics::NewProp_FadeEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterWidget_Statics::ClassParams = {
		&UCharacterWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterWidget, 3881179882);
	template<> TECH_DEMO_4_API UClass* StaticClass<UCharacterWidget>()
	{
		return UCharacterWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterWidget(Z_Construct_UClass_UCharacterWidget, &UCharacterWidget::StaticClass, TEXT("/Script/Tech_Demo_4"), TEXT("UCharacterWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
