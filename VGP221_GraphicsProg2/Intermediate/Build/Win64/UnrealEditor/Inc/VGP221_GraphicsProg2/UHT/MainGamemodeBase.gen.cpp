// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gamemod/MainGamemodeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMainGamemodeBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_VGP221_GraphicsProg2();
VGP221_GRAPHICSPROG2_API UClass* Z_Construct_UClass_AMainGamemodeBase();
VGP221_GRAPHICSPROG2_API UClass* Z_Construct_UClass_AMainGamemodeBase_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMainGamemodeBase ********************************************************
void AMainGamemodeBase::StaticRegisterNativesAMainGamemodeBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMainGamemodeBase;
UClass* AMainGamemodeBase::GetPrivateStaticClass()
{
	using TClass = AMainGamemodeBase;
	if (!Z_Registration_Info_UClass_AMainGamemodeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MainGamemodeBase"),
			Z_Registration_Info_UClass_AMainGamemodeBase.InnerSingleton,
			StaticRegisterNativesAMainGamemodeBase,
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
	return Z_Registration_Info_UClass_AMainGamemodeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AMainGamemodeBase_NoRegister()
{
	return AMainGamemodeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMainGamemodeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Gamemod/MainGamemodeBase.h" },
		{ "ModuleRelativePath", "Public/Gamemod/MainGamemodeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainGamemodeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMainGamemodeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VGP221_GraphicsProg2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGamemodeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainGamemodeBase_Statics::ClassParams = {
	&AMainGamemodeBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGamemodeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainGamemodeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainGamemodeBase()
{
	if (!Z_Registration_Info_UClass_AMainGamemodeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainGamemodeBase.OuterSingleton, Z_Construct_UClass_AMainGamemodeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainGamemodeBase.OuterSingleton;
}
AMainGamemodeBase::AMainGamemodeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainGamemodeBase);
AMainGamemodeBase::~AMainGamemodeBase() {}
// ********** End Class AMainGamemodeBase **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_VGP221_GraphicsProg2_Source_VGP221_GraphicsProg2_Public_Gamemod_MainGamemodeBase_h__Script_VGP221_GraphicsProg2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainGamemodeBase, AMainGamemodeBase::StaticClass, TEXT("AMainGamemodeBase"), &Z_Registration_Info_UClass_AMainGamemodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainGamemodeBase), 1634899344U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VGP221_GraphicsProg2_Source_VGP221_GraphicsProg2_Public_Gamemod_MainGamemodeBase_h__Script_VGP221_GraphicsProg2_438292257(TEXT("/Script/VGP221_GraphicsProg2"),
	Z_CompiledInDeferFile_FID_VGP221_GraphicsProg2_Source_VGP221_GraphicsProg2_Public_Gamemod_MainGamemodeBase_h__Script_VGP221_GraphicsProg2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VGP221_GraphicsProg2_Source_VGP221_GraphicsProg2_Public_Gamemod_MainGamemodeBase_h__Script_VGP221_GraphicsProg2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
