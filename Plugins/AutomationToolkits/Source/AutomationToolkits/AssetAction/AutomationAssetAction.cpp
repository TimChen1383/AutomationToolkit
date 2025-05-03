// Fill out your copyright notice in the Description page of Project Settings.


#include "AutomationAssetAction.h"

void UAutomationAssetAction::TestFunc()
{
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Test message"));	

}
