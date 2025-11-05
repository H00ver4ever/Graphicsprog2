// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSprojectgamemode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPSprojectgamemode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_VGP221_GraphicsProg2();
VGP221_GRAPHICSPROG2_API UClass* Z_Construct_UClass_AFPSprojectgamemode();
VGP221_GRAPHICSPROG2_API UClass* Z_Construct_UClass_AFPSprojectgamemode_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFPSprojectgamemode ******************************************************
void AFPSprojectgamemode::StaticRegisterNativesAFPSprojectgamemode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFPSprojectgamemode;
UClass* AFPSprojectgamemode::GetPrivateStaticClass()
{
	using TClass = AFPSprojectgamemode;
	if (!Z_Registration_Info_UClass_AFPSprojectgamemode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPSprojectgamemode"),
			Z_Registration_Info_UClass_AFPSprojectgamemode.InnerSingleton,
			StaticRegisterNativesAFPSprojectgamemode,
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
	return Z_Registration_Info_UClass_AFPSprojectgamemode.InnerSingleton;
}
UClass* Z_Construct_UClass_AFPSprojectgamemode_NoRegister()
{
	return AFPSprojectgamemode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFPSprojectgamemode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FPSprojectgamemode.h" },
		{ "ModuleRelativePath", "Public/FPSprojectgamemode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSprojectgamemode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPSprojectgamemode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VGP221_GraphicsProg2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSprojectgamemode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSprojectgamemode_Statics::ClassParams = {
	&AFPSprojectgamemode::StaticClass,
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
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSprojectgamemode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSprojectgamemode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSprojectgamemode()
{
	if (!Z_Registration_Info_UClass_AFPSprojectgamemode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSprojectgamemode.OuterSingleton, Z_Construct_UClass_AFPSprojectgamemode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSprojectgamemode.OuterSingleton;
}
AFPSprojectgamemode::AFPSprojectgamemode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSprojectgamemode);
AFPSprojectgamemode::~AFPSprojectgamemode() {}
// ********** End Class AFPSprojectgamemode ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_VGP221_GraphicsProg2_Source_VGP221_GraphicsProg2_Public_FPSprojectgamemode_h__Script_VGP221_GraphicsProg2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSprojectgamemode, AFPSprojectgamemode::StaticClass, TEXT("AFPSprojectgamemode"), &Z_Registration_Info_UClass_AFPSprojectgamemode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSprojectgamemode), 2007826349U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VGP221_GraphicsProg2_Source_VGP221_GraphicsProg2_Public_FPSprojectgamemode_h__Script_VGP221_GraphicsProg2_330086227(TEXT("/Script/VGP221_GraphicsProg2"),
	Z_CompiledInDeferFile_FID_VGP221_GraphicsProg2_Source_VGP221_GraphicsProg2_Public_FPSprojectgamemode_h__Script_VGP221_GraphicsProg2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VGP221_GraphicsProg2_Source_VGP221_GraphicsProg2_Public_FPSprojectgamemode_h__Script_VGP221_GraphicsProg2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
