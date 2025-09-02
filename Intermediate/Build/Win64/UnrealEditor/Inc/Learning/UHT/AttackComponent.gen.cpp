// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Component/AttackComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAttackComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
LEARNING_API UClass* Z_Construct_UClass_UAttackComponent();
LEARNING_API UClass* Z_Construct_UClass_UAttackComponent_NoRegister();
LEARNING_API UClass* Z_Construct_UClass_UAttackInterface_NoRegister();
LEARNING_API UClass* Z_Construct_UClass_UBaseCharacterData_NoRegister();
UPackage* Z_Construct_UPackage__Script_Learning();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAttackComponent *********************************************************
void UAttackComponent::StaticRegisterNativesUAttackComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAttackComponent;
UClass* UAttackComponent::GetPrivateStaticClass()
{
	using TClass = UAttackComponent;
	if (!Z_Registration_Info_UClass_UAttackComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AttackComponent"),
			Z_Registration_Info_UClass_UAttackComponent.InnerSingleton,
			StaticRegisterNativesUAttackComponent,
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
	return Z_Registration_Info_UClass_UAttackComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UAttackComponent_NoRegister()
{
	return UAttackComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAttackComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/AttackComponent.h" },
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseCharacterData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackInterface_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Actor which has interface instead of using GetOwner()\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Actor which has interface instead of using GetOwner()" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseCharacterData;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_AttackInterface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_BaseCharacterData = { "BaseCharacterData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, BaseCharacterData), Z_Construct_UClass_UBaseCharacterData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseCharacterData_MetaData), NewProp_BaseCharacterData_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_AttackInterface = { "AttackInterface", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, AttackInterface), Z_Construct_UClass_UAttackInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackInterface_MetaData), NewProp_AttackInterface_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_BaseCharacterData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_AttackInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAttackComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Learning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackComponent_Statics::ClassParams = {
	&UAttackComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAttackComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttackComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAttackComponent()
{
	if (!Z_Registration_Info_UClass_UAttackComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackComponent.OuterSingleton, Z_Construct_UClass_UAttackComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttackComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackComponent);
UAttackComponent::~UAttackComponent() {}
// ********** End Class UAttackComponent ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_Learning_Source_Learning_Public_Component_AttackComponent_h__Script_Learning_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttackComponent, UAttackComponent::StaticClass, TEXT("UAttackComponent"), &Z_Registration_Info_UClass_UAttackComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackComponent), 846430124U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_Learning_Source_Learning_Public_Component_AttackComponent_h__Script_Learning_3332150878(TEXT("/Script/Learning"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_Learning_Source_Learning_Public_Component_AttackComponent_h__Script_Learning_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_Learning_Source_Learning_Public_Component_AttackComponent_h__Script_Learning_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
