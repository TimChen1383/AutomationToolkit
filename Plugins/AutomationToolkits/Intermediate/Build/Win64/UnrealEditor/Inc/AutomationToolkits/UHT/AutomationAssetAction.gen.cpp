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

// Begin Class UAutomationAssetAction Function TestFunc
struct Z_Construct_UFunction_UAutomationAssetAction_TestFunc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "AssetAction/AutomationAssetAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationAssetAction_TestFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationAssetAction, nullptr, "TestFunc", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationAssetAction_TestFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomationAssetAction_TestFunc_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAutomationAssetAction_TestFunc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationAssetAction_TestFunc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomationAssetAction::execTestFunc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestFunc();
	P_NATIVE_END;
}
// End Class UAutomationAssetAction Function TestFunc

// Begin Class UAutomationAssetAction
void UAutomationAssetAction::StaticRegisterNativesUAutomationAssetAction()
{
	UClass* Class = UAutomationAssetAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TestFunc", &UAutomationAssetAction::execTestFunc },
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
		{ &Z_Construct_UFunction_UAutomationAssetAction_TestFunc, "TestFunc" }, // 1945085710
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
		{ Z_Construct_UClass_UAutomationAssetAction, UAutomationAssetAction::StaticClass, TEXT("UAutomationAssetAction"), &Z_Registration_Info_UClass_UAutomationAssetAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomationAssetAction), 96600470U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SlatePractice_Plugins_AutomationToolkits_Source_AutomationToolkits_AssetAction_AutomationAssetAction_h_1161077140(TEXT("/Script/AutomationToolkits"),
	Z_CompiledInDeferFile_FID_UnrealProjects_SlatePractice_Plugins_AutomationToolkits_Source_AutomationToolkits_AssetAction_AutomationAssetAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_SlatePractice_Plugins_AutomationToolkits_Source_AutomationToolkits_AssetAction_AutomationAssetAction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
