// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/MultiplayerGameMode2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerGameMode2() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_AMultiplayerGameMode2();
	AGP_API UClass* Z_Construct_UClass_AMultiplayerGameMode2_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void AMultiplayerGameMode2::StaticRegisterNativesAMultiplayerGameMode2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayerGameMode2);
	UClass* Z_Construct_UClass_AMultiplayerGameMode2_NoRegister()
	{
		return AMultiplayerGameMode2::StaticClass();
	}
	struct Z_Construct_UClass_AMultiplayerGameMode2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiplayerGameMode2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGameMode2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MultiplayerGameMode2.h" },
		{ "ModuleRelativePath", "MultiplayerGameMode2.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiplayerGameMode2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerGameMode2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerGameMode2_Statics::ClassParams = {
		&AMultiplayerGameMode2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMultiplayerGameMode2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGameMode2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMultiplayerGameMode2()
	{
		if (!Z_Registration_Info_UClass_AMultiplayerGameMode2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayerGameMode2.OuterSingleton, Z_Construct_UClass_AMultiplayerGameMode2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMultiplayerGameMode2.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<AMultiplayerGameMode2>()
	{
		return AMultiplayerGameMode2::StaticClass();
	}
	AMultiplayerGameMode2::AMultiplayerGameMode2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerGameMode2);
	AMultiplayerGameMode2::~AMultiplayerGameMode2() {}
	struct Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_MultiplayerGameMode2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_MultiplayerGameMode2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayerGameMode2, AMultiplayerGameMode2::StaticClass, TEXT("AMultiplayerGameMode2"), &Z_Registration_Info_UClass_AMultiplayerGameMode2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerGameMode2), 1517263683U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_MultiplayerGameMode2_h_169210078(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_MultiplayerGameMode2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_MultiplayerGameMode2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
