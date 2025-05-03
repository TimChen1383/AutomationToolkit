// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AssetActionUtility.h"
#include "AutomationAssetAction.generated.h"

/**
 * 
 */
UCLASS()
class AUTOMATIONTOOLKITS_API UAutomationAssetAction : public UAssetActionUtility
{
	GENERATED_BODY()

public:
	UFUNCTION(CallInEditor)
	void TestFunc();
};
