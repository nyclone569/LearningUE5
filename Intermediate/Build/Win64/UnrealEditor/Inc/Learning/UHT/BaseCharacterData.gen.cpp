// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAsset/BaseCharacterData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBaseCharacterData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
LEARNING_API UClass* Z_Construct_UClass_UBaseCharacterData();
LEARNING_API UClass* Z_Construct_UClass_UBaseCharacterData_NoRegister();
UPackage* Z_Construct_UPackage__Script_Learning();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBaseCharacterData *******************************************************
void UBaseCharacterData::StaticRegisterNativesUBaseCharacterData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBaseCharacterData;
UClass* UBaseCharacterData::GetPrivateStaticClass()
{
	using TClass = UBaseCharacterData;
	if (!Z_Registration_Info_UClass_UBaseCharacterData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BaseCharacterData"),
			Z_Registration_Info_UClass_UBaseCharacterData.InnerSingleton,
			StaticRegisterNativesUBaseCharacterData,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UBaseCharacterData.InnerSingleton;
}
UClass* Z_Construct_UClass_UBaseCharacterData_NoRegister()
{
	return UBaseCharacterData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBaseCharacterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DataAsset/BaseCharacterData.h" },
		{ "ModuleRelativePath", "Public/DataAsset/BaseCharacterData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Animation montage\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAsset/BaseCharacterData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation montage" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseCharacterData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseCharacterData_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterData, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontage_MetaData), NewProp_AttackMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterData_Statics::NewProp_AttackMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseCharacterData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Learning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseCharacterData_Statics::ClassParams = {
	&UBaseCharacterData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseCharacterData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterData_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseCharacterData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseCharacterData()
{
	if (!Z_Registration_Info_UClass_UBaseCharacterData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseCharacterData.OuterSingleton, Z_Construct_UClass_UBaseCharacterData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseCharacterData.OuterSingleton;
}
UBaseCharacterData::UBaseCharacterData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseCharacterData);
UBaseCharacterData::~UBaseCharacterData() {}
// ********** End Class UBaseCharacterData *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_Learning_Source_Learning_Public_DataAsset_BaseCharacterData_h__Script_Learning_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseCharacterData, UBaseCharacterData::StaticClass, TEXT("UBaseCharacterData"), &Z_Registration_Info_UClass_UBaseCharacterData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseCharacterData), 3538298603U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_Learning_Source_Learning_Public_DataAsset_BaseCharacterData_h__Script_Learning_3634892710(TEXT("/Script/Learning"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_Learning_Source_Learning_Public_DataAsset_BaseCharacterData_h__Script_Learning_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_Learning_Source_Learning_Public_DataAsset_BaseCharacterData_h__Script_Learning_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
