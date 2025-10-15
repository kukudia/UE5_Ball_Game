// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Ball_Game/UE5_Ball_GameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_Ball_GameGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UE5_BALL_GAME_API UClass* Z_Construct_UClass_AUE5_Ball_GameGameMode();
UE5_BALL_GAME_API UClass* Z_Construct_UClass_AUE5_Ball_GameGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Ball_Game();
// End Cross Module References

// Begin Class AUE5_Ball_GameGameMode
void AUE5_Ball_GameGameMode::StaticRegisterNativesAUE5_Ball_GameGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5_Ball_GameGameMode);
UClass* Z_Construct_UClass_AUE5_Ball_GameGameMode_NoRegister()
{
	return AUE5_Ball_GameGameMode::StaticClass();
}
struct Z_Construct_UClass_AUE5_Ball_GameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE5_Ball_GameGameMode.h" },
		{ "ModuleRelativePath", "UE5_Ball_GameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5_Ball_GameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUE5_Ball_GameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Ball_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_Ball_GameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5_Ball_GameGameMode_Statics::ClassParams = {
	&AUE5_Ball_GameGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_Ball_GameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUE5_Ball_GameGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUE5_Ball_GameGameMode()
{
	if (!Z_Registration_Info_UClass_AUE5_Ball_GameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5_Ball_GameGameMode.OuterSingleton, Z_Construct_UClass_AUE5_Ball_GameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUE5_Ball_GameGameMode.OuterSingleton;
}
template<> UE5_BALL_GAME_API UClass* StaticClass<AUE5_Ball_GameGameMode>()
{
	return AUE5_Ball_GameGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5_Ball_GameGameMode);
AUE5_Ball_GameGameMode::~AUE5_Ball_GameGameMode() {}
// End Class AUE5_Ball_GameGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Ball_Game_Source_UE5_Ball_Game_UE5_Ball_GameGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUE5_Ball_GameGameMode, AUE5_Ball_GameGameMode::StaticClass, TEXT("AUE5_Ball_GameGameMode"), &Z_Registration_Info_UClass_AUE5_Ball_GameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5_Ball_GameGameMode), 1463446152U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Ball_Game_Source_UE5_Ball_Game_UE5_Ball_GameGameMode_h_842042798(TEXT("/Script/UE5_Ball_Game"),
	Z_CompiledInDeferFile_FID_UE5_Ball_Game_Source_UE5_Ball_Game_UE5_Ball_GameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Ball_Game_Source_UE5_Ball_Game_UE5_Ball_GameGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
