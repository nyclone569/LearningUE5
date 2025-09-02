// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearning_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Learning;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Learning()
	{
		if (!Z_Registration_Info_UPackage__Script_Learning.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Learning",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xFB2119BF,
				0xB79BE17D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Learning.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Learning.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Learning(Z_Construct_UPackage__Script_Learning, TEXT("/Script/Learning"), Z_Registration_Info_UPackage__Script_Learning, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFB2119BF, 0xB79BE17D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
