// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGP_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AGP;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AGP()
	{
		if (!Z_Registration_Info_UPackage__Script_AGP.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AGP",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x3663B2D9,
				0x78CF10CA,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AGP.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AGP.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AGP(Z_Construct_UPackage__Script_AGP, TEXT("/Script/AGP"), Z_Registration_Info_UPackage__Script_AGP, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3663B2D9, 0x78CF10CA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
