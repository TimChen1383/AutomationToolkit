// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetAction/AutomationAssetAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOMATIONTOOLKITS_AutomationAssetAction_generated_h
#error "AutomationAssetAction.generated.h already included, missing '#pragma once' in AutomationAssetAction.h"
#endif
#define AUTOMATIONTOOLKITS_AutomationAssetAction_generated_h

#define FID_UnrealProjects_SlatePractice_Plugins_AutomationToolkits_Source_AutomationToolkits_AssetAction_AutomationAssetAction_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddPrefixes); \
	DECLARE_FUNCTION(execDuplicateAssets);


#define FID_UnrealProjects_SlatePractice_Plugins_AutomationToolkits_Source_AutomationToolkits_AssetAction_AutomationAssetAction_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomationAssetAction(); \
	friend struct Z_Construct_UClass_UAutomationAssetAction_Statics; \
public: \
	DECLARE_CLASS(UAutomationAssetAction, UAssetActionUtility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutomationToolkits"), NO_API) \
	DECLARE_SERIALIZER(UAutomationAssetAction)


#define FID_UnrealProjects_SlatePractice_Plugins_AutomationToolkits_Source_AutomationToolkits_AssetAction_AutomationAssetAction_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutomationAssetAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAutomationAssetAction(UAutomationAssetAction&&); \
	UAutomationAssetAction(const UAutomationAssetAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutomationAssetAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationAssetAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomationAssetAction) \
	NO_API virtual ~UAutomationAssetAction();


#define FID_UnrealProjects_SlatePractice_Plugins_AutomationToolkits_Source_AutomationToolkits_AssetAction_AutomationAssetAction_h_21_PROLOG
#define FID_UnrealProjects_SlatePractice_Plugins_AutomationToolkits_Source_AutomationToolkits_AssetAction_AutomationAssetAction_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_SlatePractice_Plugins_AutomationToolkits_Source_AutomationToolkits_AssetAction_AutomationAssetAction_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_SlatePractice_Plugins_AutomationToolkits_Source_AutomationToolkits_AssetAction_AutomationAssetAction_h_24_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_SlatePractice_Plugins_AutomationToolkits_Source_AutomationToolkits_AssetAction_AutomationAssetAction_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOMATIONTOOLKITS_API UClass* StaticClass<class UAutomationAssetAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_SlatePractice_Plugins_AutomationToolkits_Source_AutomationToolkits_AssetAction_AutomationAssetAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
