// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gamemod/MainGamemodeBase.h"

#ifdef VGP221_GRAPHICSPROG2_MainGamemodeBase_generated_h
#error "MainGamemodeBase.generated.h already included, missing '#pragma once' in MainGamemodeBase.h"
#endif
#define VGP221_GRAPHICSPROG2_MainGamemodeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMainGamemodeBase ********************************************************
VGP221_GRAPHICSPROG2_API UClass* Z_Construct_UClass_AMainGamemodeBase_NoRegister();

#define FID_VGP221_GraphicsProg2_Source_VGP221_GraphicsProg2_Public_Gamemod_MainGamemodeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainGamemodeBase(); \
	friend struct Z_Construct_UClass_AMainGamemodeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VGP221_GRAPHICSPROG2_API UClass* Z_Construct_UClass_AMainGamemodeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AMainGamemodeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/VGP221_GraphicsProg2"), Z_Construct_UClass_AMainGamemodeBase_NoRegister) \
	DECLARE_SERIALIZER(AMainGamemodeBase)


#define FID_VGP221_GraphicsProg2_Source_VGP221_GraphicsProg2_Public_Gamemod_MainGamemodeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainGamemodeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMainGamemodeBase(AMainGamemodeBase&&) = delete; \
	AMainGamemodeBase(const AMainGamemodeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainGamemodeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainGamemodeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainGamemodeBase) \
	NO_API virtual ~AMainGamemodeBase();


#define FID_VGP221_GraphicsProg2_Source_VGP221_GraphicsProg2_Public_Gamemod_MainGamemodeBase_h_12_PROLOG
#define FID_VGP221_GraphicsProg2_Source_VGP221_GraphicsProg2_Public_Gamemod_MainGamemodeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VGP221_GraphicsProg2_Source_VGP221_GraphicsProg2_Public_Gamemod_MainGamemodeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_VGP221_GraphicsProg2_Source_VGP221_GraphicsProg2_Public_Gamemod_MainGamemodeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMainGamemodeBase;

// ********** End Class AMainGamemodeBase **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VGP221_GraphicsProg2_Source_VGP221_GraphicsProg2_Public_Gamemod_MainGamemodeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
