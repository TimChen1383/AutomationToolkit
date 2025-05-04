// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutomationToolkits/AssetAction/AutomationAssetAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationAssetAction() {}

// Begin Cross Module References
AUTOMATIONTOOLKITS_API UClass* Z_Construct_UClass_UAutomationAssetAction();
AUTOMATIONTOOLKITS_API UClass* Z_Construct_UClass_UAutomationAssetAction_NoRegister();
BLUTILITY_API UClass* Z_Construct_UClass_UAssetActionUtility();
UPackage* Z_Construct_UPackage__Script_AutomationToolkits();
// End Cross Module References

// Begin Class UAutomationAssetAction Function AddPrefixes
struct Z_Construct_UFunction_UAutomationAssetAction_AddPrefixes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Add prefixes to the name of the assets. Based on the asset type\n" },
#endif
		{ "ModuleRelativePath", "AssetAction/AutomationAssetAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add prefixes to the name of the assets. Based on the asset type" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationAssetAction_AddPrefixes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationAssetAction, nullptr, "AddPrefixes", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationAssetAction_AddPrefixes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomationAssetAction_AddPrefixes_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAutomationAssetAction_AddPrefixes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationAssetAction_AddPrefixes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomationAssetAction::execAddPrefixes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPrefixes();
	P_NATIVE_END;
}
// End Class UAutomationAssetAction Function AddPrefixes

// Begin Class UAutomationAssetAction Function DuplicateAssets
struct Z_Construct_UFunction_UAutomationAssetAction_DuplicateAssets_Statics
{
	struct AutomationAssetAction_eventDuplicateAssets_Parms
	{
		int32 NumberOfDuplicate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//If there isn't any input parameter, the script will execute directly\n//If there are 1 or 2 input parameters, the script will pop up a panel for user to fill on the input\n" },
#endif
		{ "ModuleRelativePath", "AssetAction/AutomationAssetAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If there isn't any input parameter, the script will execute directly\nIf there are 1 or 2 input parameters, the script will pop up a panel for user to fill on the input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfDuplicate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutomationAssetAction_DuplicateAssets_Statics::NewProp_NumberOfDuplicate = { "NumberOfDuplicate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomationAssetAction_eventDuplicateAssets_Parms, NumberOfDuplicate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationAssetAction_DuplicateAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationAssetAction_DuplicateAssets_Statics::NewProp_NumberOfDuplicate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationAssetAction_DuplicateAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationAssetAction_DuplicateAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationAssetAction, nullptr, "DuplicateAssets", nullptr, nullptr, Z_Construct_UFunction_UAutomationAssetAction_DuplicateAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationAssetAction_DuplicateAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutomationAssetAction_DuplicateAssets_Statics::AutomationAssetAction_eventDuplicateAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationAssetAction_DuplicateAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomationAssetAction_DuplicateAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutomationAssetAction_DuplicateAssets_Statics::AutomationAssetAction_eventDuplicateAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutomationAssetAction_DuplicateAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationAssetAction_DuplicateAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomationAssetAction::execDuplicateAssets)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfDuplicate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DuplicateAssets(Z_Param_NumberOfDuplicate);
	P_NATIVE_END;
}
// End Class UAutomationAssetAction Function DuplicateAssets

// Begin Class UAutomationAssetAction Function RemoveUnusedAssets
struct Z_Construct_UFunction_UAutomationAssetAction_RemoveUnusedAssets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Removed unused assets. Based on asset's reference\n" },
#endif
		{ "ModuleRelativePath", "AssetAction/AutomationAssetAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removed unused assets. Based on asset's reference" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationAssetAction_RemoveUnusedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationAssetAction, nullptr, "RemoveUnusedAssets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationAssetAction_RemoveUnusedAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomationAssetAction_RemoveUnusedAssets_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAutomationAssetAction_RemoveUnusedAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationAssetAction_RemoveUnusedAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomationAssetAction::execRemoveUnusedAssets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveUnusedAssets();
	P_NATIVE_END;
}
// End Class UAutomationAssetAction Function RemoveUnusedAssets

// Begin Class UAutomationAssetAction
void UAutomationAssetAction::StaticRegisterNativesUAutomationAssetAction()
{
	UClass* Class = UAutomationAssetAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddPrefixes", &UAutomationAssetAction::execAddPrefixes },
		{ "DuplicateAssets", &UAutomationAssetAction::execDuplicateAssets },
		{ "RemoveUnusedAssets", &UAutomationAssetAction::execRemoveUnusedAssets },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutomationAssetAction);
UClass* Z_Construct_UClass_UAutomationAssetAction_NoRegister()
{
	return UAutomationAssetAction::StaticClass();
}
struct Z_Construct_UClass_UAutomationAssetAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "AssetAction/AutomationAssetAction.h" },
		{ "ModuleRelativePath", "AssetAction/AutomationAssetAction.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutomationAssetAction_AddPrefixes, "AddPrefixes" }, // 2866040553
		{ &Z_Construct_UFunction_UAutomationAssetAction_DuplicateAssets, "DuplicateAssets" }, // 1276126728
		{ &Z_Construct_UFunction_UAutomationAssetAction_RemoveUnusedAssets, "RemoveUnusedAssets" }, // 606153869
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationAssetAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAutomationAssetAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetActionUtility,
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationToolkits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationAssetAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomationAssetAction_Statics::ClassParams = {
	&UAutomationAssetAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationAssetAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutomationAssetAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutomationAssetAction()
{
	if (!Z_Registration_Info_UClass_UAutomationAssetAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomationAssetAction.OuterSingleton, Z_Construct_UClass_UAutomationAssetAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutomationAssetAction.OuterSingleton;
}
template<> AUTOMATIONTOOLKITS_API UClass* StaticClass<UAutomationAssetAction>()
{
	return UAutomationAssetAction::StaticClass();
}
UAutomationAssetAction::UAutomationAssetAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationAssetAction);
UAutomationAssetAction::~UAutomationAssetAction() {}
// End Class UAutomationAssetAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_SlatePractice_Plugins_AutomationToolkits_Source_AutomationToolkits_AssetAction_AutomationAssetAction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutomationAssetAction, UAutomationAssetAction::StaticClass, TEXT("UAutomationAssetAction"), &Z_Registration_Info_UClass_UAutomationAssetAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomationAssetAction), 1034109798U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SlatePractice_Plugins_AutomationToolkits_Source_AutomationToolkits_AssetAction_AutomationAssetAction_h_625330678(TEXT("/Script/AutomationToolkits"),
	Z_CompiledInDeferFile_FID_UnrealProjects_SlatePractice_Plugins_AutomationToolkits_Source_AutomationToolkits_AssetAction_AutomationAssetAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_SlatePractice_Plugins_AutomationToolkits_Source_AutomationToolkits_AssetAction_AutomationAssetAction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
