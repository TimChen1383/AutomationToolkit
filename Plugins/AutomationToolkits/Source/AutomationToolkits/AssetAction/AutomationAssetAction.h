// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AssetActionUtility.h"
#include "Materials/Material.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundCue.h"
#include "Sound/SoundWave.h"
#include "Engine/Texture.h"
#include "Blueprint/UserWidget.h"
#include "Components/SkeletalMeshComponent.h"
#include "NiagaraSystem.h"
#include "NiagaraEmitter.h"
#include "AutomationAssetAction.generated.h"
/**
 * 
 */
UCLASS()
class AUTOMATIONTOOLKITS_API UAutomationAssetAction : public UAssetActionUtility
{
	GENERATED_BODY()

public:
	//If there isn't any input parameter, the script will execute directly
	//If there are 1 or 2 input parameters, the script will pop up a panel for user to fill on the input
	UFUNCTION(CallInEditor)
	void DuplicateAssets(int32 NumberOfDuplicate);

	//Add prefixes to the name of the assets. Based on the asset type
	UFUNCTION(CallInEditor)
	void AddPrefixes();

	//Removed unused assets. Based on asset's reference
	UFUNCTION(CallInEditor)
	void RemoveUnusedAssets();
	
	void ShowNotifyInfo(const FString& Message);

private:
	TMap<UClass*,FString> PrefixMap = 
	{
		{UBlueprint::StaticClass(),TEXT("BP_")},
		{UStaticMesh::StaticClass(),TEXT("SM_")},
		{UMaterial::StaticClass(),TEXT("M_")},
		{UMaterialInstanceConstant::StaticClass(),TEXT("MI_")},
		{UMaterialFunctionInterface::StaticClass(),TEXT("MF_")},
		{UParticleSystem::StaticClass(),TEXT("PS_")},
		{USoundCue::StaticClass(),TEXT("SC_")},
		{USoundWave::StaticClass(),TEXT("SW_")},
		{UTexture::StaticClass(),TEXT("T_")},
		{UTexture2D::StaticClass(),TEXT("T_")},
		{UUserWidget::StaticClass(),TEXT("WBP_")},
		{USkeletalMeshComponent::StaticClass(),TEXT("SK_")},
		{UNiagaraSystem::StaticClass(),TEXT("NS_")},
		{UNiagaraEmitter::StaticClass(),TEXT("NE_")},
		
		
	};
};
