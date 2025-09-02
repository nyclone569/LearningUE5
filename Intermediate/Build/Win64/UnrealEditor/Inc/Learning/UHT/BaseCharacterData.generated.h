// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataAsset/BaseCharacterData.h"

#ifdef LEARNING_BaseCharacterData_generated_h
#error "BaseCharacterData.generated.h already included, missing '#pragma once' in BaseCharacterData.h"
#endif
#define LEARNING_BaseCharacterData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBaseCharacterData *******************************************************
LEARNING_API UClass* Z_Construct_UClass_UBaseCharacterData_NoRegister();

#define FID_Projects_Unreal_LearningUE5_Source_Learning_Public_DataAsset_BaseCharacterData_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseCharacterData(); \
	friend struct Z_Construct_UClass_UBaseCharacterData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNING_API UClass* Z_Construct_UClass_UBaseCharacterData_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseCharacterData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Learning"), Z_Construct_UClass_UBaseCharacterData_NoRegister) \
	DECLARE_SERIALIZER(UBaseCharacterData)


#define FID_Projects_Unreal_LearningUE5_Source_Learning_Public_DataAsset_BaseCharacterData_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseCharacterData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseCharacterData(UBaseCharacterData&&) = delete; \
	UBaseCharacterData(const UBaseCharacterData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseCharacterData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseCharacterData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseCharacterData) \
	NO_API virtual ~UBaseCharacterData();


#define FID_Projects_Unreal_LearningUE5_Source_Learning_Public_DataAsset_BaseCharacterData_h_11_PROLOG
#define FID_Projects_Unreal_LearningUE5_Source_Learning_Public_DataAsset_BaseCharacterData_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Unreal_LearningUE5_Source_Learning_Public_DataAsset_BaseCharacterData_h_14_INCLASS_NO_PURE_DECLS \
	FID_Projects_Unreal_LearningUE5_Source_Learning_Public_DataAsset_BaseCharacterData_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseCharacterData;

// ********** End Class UBaseCharacterData *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_LearningUE5_Source_Learning_Public_DataAsset_BaseCharacterData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
