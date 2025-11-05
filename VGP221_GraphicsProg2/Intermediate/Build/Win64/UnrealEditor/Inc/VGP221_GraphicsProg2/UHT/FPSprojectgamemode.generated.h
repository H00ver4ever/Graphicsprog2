// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSprojectgamemode.h"

#ifdef VGP221_GRAPHICSPROG2_FPSprojectgamemode_generated_h
#error "FPSprojectgamemode.generated.h already included, missing '#pragma once' in FPSprojectgamemode.h"
#endif
#define VGP221_GRAPHICSPROG2_FPSprojectgamemode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPSprojectgamemode ******************************************************
VGP221_GRAPHICSPROG2_API UClass* Z_Construct_UClass_AFPSprojectgamemode_NoRegister();

#define FID_VGP221_GraphicsProg2_Source_VGP221_GraphicsProg2_Public_FPSprojectgamemode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSprojectgamemode(); \
	friend struct Z_Construct_UClass_AFPSprojectgamemode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VGP221_GRAPHICSPROG2_API UClass* Z_Construct_UClass_AFPSprojectgamemode_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPSprojectgamemode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/VGP221_GraphicsProg2"), Z_Construct_UClass_AFPSprojectgamemode_NoRegister) \
	DECLARE_SERIALIZER(AFPSprojectgamemode)


#define FID_VGP221_GraphicsProg2_Source_VGP221_GraphicsProg2_Public_FPSprojectgamemode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSprojectgamemode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPSprojectgamemode(AFPSprojectgamemode&&) = delete; \
	AFPSprojectgamemode(const AFPSprojectgamemode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSprojectgamemode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSprojectgamemode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSprojectgamemode) \
	NO_API virtual ~AFPSprojectgamemode();


#define FID_VGP221_GraphicsProg2_Source_VGP221_GraphicsProg2_Public_FPSprojectgamemode_h_12_PROLOG
#define FID_VGP221_GraphicsProg2_Source_VGP221_GraphicsProg2_Public_FPSprojectgamemode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VGP221_GraphicsProg2_Source_VGP221_GraphicsProg2_Public_FPSprojectgamemode_h_15_INCLASS_NO_PURE_DECLS \
	FID_VGP221_GraphicsProg2_Source_VGP221_GraphicsProg2_Public_FPSprojectgamemode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPSprojectgamemode;

// ********** End Class AFPSprojectgamemode ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VGP221_GraphicsProg2_Source_VGP221_GraphicsProg2_Public_FPSprojectgamemode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
