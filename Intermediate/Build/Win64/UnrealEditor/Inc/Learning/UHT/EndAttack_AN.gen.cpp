// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNotify/EndAttack_AN.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEndAttack_AN() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
LEARNING_API UClass* Z_Construct_UClass_UEndAttack_AN();
LEARNING_API UClass* Z_Construct_UClass_UEndAttack_AN_NoRegister();
UPackage* Z_Construct_UPackage__Script_Learning();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEndAttack_AN ************************************************************
void UEndAttack_AN::StaticRegisterNativesUEndAttack_AN()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEndAttack_AN;
UClass* UEndAttack_AN::GetPrivateStaticClass()
{
	using TClass = UEndAttack_AN;
	if (!Z_Registration_Info_UClass_UEndAttack_AN.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EndAttack_AN"),
			Z_Registration_Info_UClass_UEndAttack_AN.InnerSingleton,
			StaticRegisterNativesUEndAttack_AN,
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
	return Z_Registration_Info_UClass_UEndAttack_AN.InnerSingleton;
}
UClass* Z_Construct_UClass_UEndAttack_AN_NoRegister()
{
	return UEndAttack_AN::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEndAttack_AN_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/EndAttack_AN.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/EndAttack_AN.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndAttack_AN>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEndAttack_AN_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_Learning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEndAttack_AN_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEndAttack_AN_Statics::ClassParams = {
	&UEndAttack_AN::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEndAttack_AN_Statics::Class_MetaDataParams), Z_Construct_UClass_UEndAttack_AN_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEndAttack_AN()
{
	if (!Z_Registration_Info_UClass_UEndAttack_AN.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEndAttack_AN.OuterSingleton, Z_Construct_UClass_UEndAttack_AN_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEndAttack_AN.OuterSingleton;
}
UEndAttack_AN::UEndAttack_AN(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEndAttack_AN);
UEndAttack_AN::~UEndAttack_AN() {}
// ********** End Class UEndAttack_AN **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_LearningUE5_Source_Learning_Public_AnimNotify_EndAttack_AN_h__Script_Learning_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEndAttack_AN, UEndAttack_AN::StaticClass, TEXT("UEndAttack_AN"), &Z_Registration_Info_UClass_UEndAttack_AN, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEndAttack_AN), 502029213U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_LearningUE5_Source_Learning_Public_AnimNotify_EndAttack_AN_h__Script_Learning_148218867(TEXT("/Script/Learning"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_LearningUE5_Source_Learning_Public_AnimNotify_EndAttack_AN_h__Script_Learning_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_LearningUE5_Source_Learning_Public_AnimNotify_EndAttack_AN_h__Script_Learning_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
