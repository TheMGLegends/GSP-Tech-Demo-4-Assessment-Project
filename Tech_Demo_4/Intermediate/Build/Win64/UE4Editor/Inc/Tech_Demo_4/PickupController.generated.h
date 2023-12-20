// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TECH_DEMO_4_PickupController_generated_h
#error "PickupController.generated.h already included, missing '#pragma once' in PickupController.h"
#endif
#define TECH_DEMO_4_PickupController_generated_h

#define Tech_Demo_4_Source_Tech_Demo_4_PickupController_h_21_SPARSE_DATA
#define Tech_Demo_4_Source_Tech_Demo_4_PickupController_h_21_RPC_WRAPPERS
#define Tech_Demo_4_Source_Tech_Demo_4_PickupController_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Tech_Demo_4_Source_Tech_Demo_4_PickupController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupController(); \
	friend struct Z_Construct_UClass_APickupController_Statics; \
public: \
	DECLARE_CLASS(APickupController, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tech_Demo_4"), NO_API) \
	DECLARE_SERIALIZER(APickupController)


#define Tech_Demo_4_Source_Tech_Demo_4_PickupController_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAPickupController(); \
	friend struct Z_Construct_UClass_APickupController_Statics; \
public: \
	DECLARE_CLASS(APickupController, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tech_Demo_4"), NO_API) \
	DECLARE_SERIALIZER(APickupController)


#define Tech_Demo_4_Source_Tech_Demo_4_PickupController_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickupController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickupController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupController(APickupController&&); \
	NO_API APickupController(const APickupController&); \
public:


#define Tech_Demo_4_Source_Tech_Demo_4_PickupController_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupController(APickupController&&); \
	NO_API APickupController(const APickupController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickupController)


#define Tech_Demo_4_Source_Tech_Demo_4_PickupController_h_21_PRIVATE_PROPERTY_OFFSET
#define Tech_Demo_4_Source_Tech_Demo_4_PickupController_h_18_PROLOG
#define Tech_Demo_4_Source_Tech_Demo_4_PickupController_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tech_Demo_4_Source_Tech_Demo_4_PickupController_h_21_PRIVATE_PROPERTY_OFFSET \
	Tech_Demo_4_Source_Tech_Demo_4_PickupController_h_21_SPARSE_DATA \
	Tech_Demo_4_Source_Tech_Demo_4_PickupController_h_21_RPC_WRAPPERS \
	Tech_Demo_4_Source_Tech_Demo_4_PickupController_h_21_INCLASS \
	Tech_Demo_4_Source_Tech_Demo_4_PickupController_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tech_Demo_4_Source_Tech_Demo_4_PickupController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tech_Demo_4_Source_Tech_Demo_4_PickupController_h_21_PRIVATE_PROPERTY_OFFSET \
	Tech_Demo_4_Source_Tech_Demo_4_PickupController_h_21_SPARSE_DATA \
	Tech_Demo_4_Source_Tech_Demo_4_PickupController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Tech_Demo_4_Source_Tech_Demo_4_PickupController_h_21_INCLASS_NO_PURE_DECLS \
	Tech_Demo_4_Source_Tech_Demo_4_PickupController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TECH_DEMO_4_API UClass* StaticClass<class APickupController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tech_Demo_4_Source_Tech_Demo_4_PickupController_h


#define FOREACH_ENUM_EPICKUPS(op) \
	op(DoubleDamage) \
	op(Recovery) \
	op(Ammo) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
