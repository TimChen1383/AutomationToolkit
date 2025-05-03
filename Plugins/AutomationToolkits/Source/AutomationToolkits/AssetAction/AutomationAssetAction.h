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
	//If there isn't any input parameter, the script will execute directly
	//If there are 1 or 2 input parameters, the script will pop up a panel for user to fill on the input
	void DuplicateAssets(int32 NumberOfDuplicate);

	void ShowNotifyInfo(const FString& Message);
};
