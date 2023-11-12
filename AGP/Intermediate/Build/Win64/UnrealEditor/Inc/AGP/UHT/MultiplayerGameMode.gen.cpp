// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/MultiplayerGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerGameMode() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_AMultiplayerGameMode();
	AGP_API UClass* Z_Construct_UClass_AMultiplayerGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void AMultiplayerGameMode::StaticRegisterNativesAMultiplayerGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayerGameMode);
	UClass* Z_Construct_UClass_AMultiplayerGameMode_NoRegister()
	{
		return AMultiplayerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMultiplayerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiplayerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MultiplayerGameMode.h" },
		{ "ModuleRelativePath", "MultiplayerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiplayerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerGameMode_Statics::ClassParams = {
		&AMultiplayerGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMultiplayerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMultiplayerGameMode()
	{
		if (!Z_Registration_Info_UClass_AMultiplayerGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayerGameMode.OuterSingleton, Z_Construct_UClass_AMultiplayerGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMultiplayerGameMode.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<AMultiplayerGameMode>()
	{
		return AMultiplayerGameMode::StaticClass();
	}
	AMultiplayerGameMode::AMultiplayerGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerGameMode);
	AMultiplayerGameMode::~AMultiplayerGameMode() {}
	struct Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_MultiplayerGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_MultiplayerGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayerGameMode, AMultiplayerGameMode::StaticClass, TEXT("AMultiplayerGameMode"), &Z_Registration_Info_UClass_AMultiplayerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerGameMode), 4224821719U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_MultiplayerGameMode_h_1578526650(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_MultiplayerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_MultiplayerGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
