// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TECH_DEMO_4_CharacterController_generated_h
#error "CharacterController.generated.h already included, missing '#pragma once' in CharacterController.h"
#endif
#define TECH_DEMO_4_CharacterController_generated_h

#define Tech_Demo_4_Source_Tech_Demo_4_CharacterController_h_17_SPARSE_DATA
#define Tech_Demo_4_Source_Tech_Demo_4_CharacterController_h_17_RPC_WRAPPERS
#define Tech_Demo_4_Source_Tech_Demo_4_CharacterController_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Tech_Demo_4_Source_Tech_Demo_4_CharacterController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterController(); \
	friend struct Z_Construct_UClass_ACharacterController_Statics; \
public: \
	DECLARE_CLASS(ACharacterController, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tech_Demo_4"), NO_API) \
	DECLARE_SERIALIZER(ACharacterController)


#define Tech_Demo_4_Source_Tech_Demo_4_CharacterController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesACharacterController(); \
	friend struct Z_Construct_UClass_ACharacterController_Statics; \
public: \
	DECLARE_CLASS(ACharacterController, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tech_Demo_4"), NO_API) \
	DECLARE_SERIALIZER(ACharacterController)


#define Tech_Demo_4_Source_Tech_Demo_4_CharacterController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterController(ACharacterController&&); \
	NO_API ACharacterController(const ACharacterController&); \
public:


#define Tech_Demo_4_Source_Tech_Demo_4_CharacterController_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterController(ACharacterController&&); \
	NO_API ACharacterController(const ACharacterController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterController)


#define Tech_Demo_4_Source_Tech_Demo_4_CharacterController_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CharMove() { return STRUCT_OFFSET(ACharacterController, CharMove); } \
	FORCEINLINE static uint32 __PPO__ShotDuration() { return STRUCT_OFFSET(ACharacterController, ShotDuration); } \
	FORCEINLINE static uint32 __PPO__ReloadDuration() { return STRUCT_OFFSET(ACharacterController, ReloadDuration); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ACharacterController, Camera); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ACharacterController, SpringArm); } \
	FORCEINLINE static uint32 __PPO__AnimationController() { return STRUCT_OFFSET(ACharacterController, AnimationController); } \
	FORCEINLINE static uint32 __PPO__AimMontage() { return STRUCT_OFFSET(ACharacterController, AimMontage); } \
	FORCEINLINE static uint32 __PPO__ReloadMontage() { return STRUCT_OFFSET(ACharacterController, ReloadMontage); } \
	FORCEINLINE static uint32 __PPO__ShootMontage() { return STRUCT_OFFSET(ACharacterController, ShootMontage); } \
	FORCEINLINE static uint32 __PPO__ShotSFX() { return STRUCT_OFFSET(ACharacterController, ShotSFX); } \
	FORCEINLINE static uint32 __PPO__DeathSFX() { return STRUCT_OFFSET(ACharacterController, DeathSFX); }


#define Tech_Demo_4_Source_Tech_Demo_4_CharacterController_h_14_PROLOG
#define Tech_Demo_4_Source_Tech_Demo_4_CharacterController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tech_Demo_4_Source_Tech_Demo_4_CharacterController_h_17_PRIVATE_PROPERTY_OFFSET \
	Tech_Demo_4_Source_Tech_Demo_4_CharacterController_h_17_SPARSE_DATA \
	Tech_Demo_4_Source_Tech_Demo_4_CharacterController_h_17_RPC_WRAPPERS \
	Tech_Demo_4_Source_Tech_Demo_4_CharacterController_h_17_INCLASS \
	Tech_Demo_4_Source_Tech_Demo_4_CharacterController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tech_Demo_4_Source_Tech_Demo_4_CharacterController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tech_Demo_4_Source_Tech_Demo_4_CharacterController_h_17_PRIVATE_PROPERTY_OFFSET \
	Tech_Demo_4_Source_Tech_Demo_4_CharacterController_h_17_SPARSE_DATA \
	Tech_Demo_4_Source_Tech_Demo_4_CharacterController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Tech_Demo_4_Source_Tech_Demo_4_CharacterController_h_17_INCLASS_NO_PURE_DECLS \
	Tech_Demo_4_Source_Tech_Demo_4_CharacterController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TECH_DEMO_4_API UClass* StaticClass<class ACharacterController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tech_Demo_4_Source_Tech_Demo_4_CharacterController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
