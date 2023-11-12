// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/LandscapeGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeGenerator() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_ALandscapeGenerator();
	AGP_API UClass* Z_Construct_UClass_ALandscapeGenerator_NoRegister();
	AGP_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	AGP_API UClass* Z_Construct_UClass_UPathfindingSubsystem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void ALandscapeGenerator::StaticRegisterNativesALandscapeGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALandscapeGenerator);
	UClass* Z_Construct_UClass_ALandscapeGenerator_NoRegister()
	{
		return ALandscapeGenerator::StaticClass();
	}
	struct Z_Construct_UClass_ALandscapeGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoDebug_MetaData[];
#endif
		static void NewProp_DoDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoDebug;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Path1_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path1_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Path1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Path2_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path2_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Path2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TotalPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TotalPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pathfindingSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pathfindingSubsystem;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_players_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_players_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_players;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandscapeGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeGenerator.h" },
		{ "ModuleRelativePath", "LandscapeGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_DoDebug_MetaData[] = {
		{ "Category", "LandscapeGenerator" },
		{ "ModuleRelativePath", "LandscapeGenerator.h" },
	};
#endif
	void Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_DoDebug_SetBit(void* Obj)
	{
		((ALandscapeGenerator*)Obj)->DoDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_DoDebug = { "DoDebug", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALandscapeGenerator), &Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_DoDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_DoDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_DoDebug_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_Path1_Inner = { "Path1", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_Path1_MetaData[] = {
		{ "Category", "LandscapeGenerator" },
		{ "ModuleRelativePath", "LandscapeGenerator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_Path1 = { "Path1", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGenerator, Path1), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_Path1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_Path1_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_Path2_Inner = { "Path2", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_Path2_MetaData[] = {
		{ "Category", "LandscapeGenerator" },
		{ "ModuleRelativePath", "LandscapeGenerator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_Path2 = { "Path2", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGenerator, Path2), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_Path2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_Path2_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_TotalPath_Inner = { "TotalPath", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_TotalPath_MetaData[] = {
		{ "Category", "LandscapeGenerator" },
		{ "ModuleRelativePath", "LandscapeGenerator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_TotalPath = { "TotalPath", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGenerator, TotalPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_TotalPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_TotalPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_pathfindingSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "LandscapeGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_pathfindingSubsystem = { "pathfindingSubsystem", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGenerator, pathfindingSubsystem), Z_Construct_UClass_UPathfindingSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_pathfindingSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_pathfindingSubsystem_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_players_Inner = { "players", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_players_MetaData[] = {
		{ "Category", "LandscapeGenerator" },
		{ "ModuleRelativePath", "LandscapeGenerator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_players = { "players", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGenerator, players), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_players_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_players_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscapeGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_DoDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_Path1_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_Path1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_Path2_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_Path2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_TotalPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_TotalPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_pathfindingSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_players_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGenerator_Statics::NewProp_players,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandscapeGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeGenerator_Statics::ClassParams = {
		&ALandscapeGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALandscapeGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGenerator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALandscapeGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandscapeGenerator()
	{
		if (!Z_Registration_Info_UClass_ALandscapeGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALandscapeGenerator.OuterSingleton, Z_Construct_UClass_ALandscapeGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALandscapeGenerator.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<ALandscapeGenerator>()
	{
		return ALandscapeGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeGenerator);
	ALandscapeGenerator::~ALandscapeGenerator() {}
	struct Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_LandscapeGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_LandscapeGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALandscapeGenerator, ALandscapeGenerator::StaticClass, TEXT("ALandscapeGenerator"), &Z_Registration_Info_UClass_ALandscapeGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALandscapeGenerator), 488647631U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_LandscapeGenerator_h_583428034(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_LandscapeGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_LandscapeGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
