// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Component/AttackComponent.h"

#ifdef LEARNING_AttackComponent_generated_h
#error "AttackComponent.generated.h already included, missing '#pragma once' in AttackComponent.h"
#endif
#define LEARNING_AttackComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAttackComponent *********************************************************
LEARNING_API UClass* Z_Construct_UClass_UAttackComponent_NoRegister();

#define FID_Projects_Unreal_Learning_Source_Learning_Public_Component_AttackComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttackComponent(); \
	friend struct Z_Construct_UClass_UAttackComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNING_API UClass* Z_Construct_UClass_UAttackComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAttackComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Learning"), Z_Construct_UClass_UAttackComponent_NoRegister) \
	DECLARE_SERIALIZER(UAttackComponent)


#define FID_Projects_Unreal_Learning_Source_Learning_Public_Component_AttackComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAttackComponent(UAttackComponent&&) = delete; \
	UAttackComponent(const UAttackComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttackComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttackComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAttackComponent) \
	NO_API virtual ~UAttackComponent();


#define FID_Projects_Unreal_Learning_Source_Learning_Public_Component_AttackComponent_h_13_PROLOG
#define FID_Projects_Unreal_Learning_Source_Learning_Public_Component_AttackComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Unreal_Learning_Source_Learning_Public_Component_AttackComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Projects_Unreal_Learning_Source_Learning_Public_Component_AttackComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAttackComponent;

// ********** End Class UAttackComponent ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_Learning_Source_Learning_Public_Component_AttackComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
