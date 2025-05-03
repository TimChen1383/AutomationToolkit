// Fill out your copyright notice in the Description page of Project Settings.


#include "AutomationAssetAction.h"
#include "EditorUtilityLibrary.h"
#include "EditorAssetLibrary.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Framework/Notifications/NotificationManager.h"

void UAutomationAssetAction::DuplicateAssets(int32 NumberOfDuplicate)
{
	if (NumberOfDuplicate <= 0)
	{
		//Pop up warning dialogue
		FText MsgTitle = FText::FromString(TEXT("Warning"));
		FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(TEXT("Please enter a valid number")), &MsgTitle);
		return;
	}
	else
	{
		//Get all selected assets and loop through all of them
		TArray<FAssetData> SelectedAssetsData = UEditorUtilityLibrary::GetSelectedAssetData();
		uint32 Counter = 0;
		
		for (const FAssetData& SelectedAssetData: SelectedAssetsData)
		{
			for (int32 i = 0; i < NumberOfDuplicate; i++)
			{
				//Duplicate and save the new assets
				const FString SourceAssetPath = SelectedAssetData.ObjectPath.ToString();
				const FString NewDuplicatedAssetName = SelectedAssetData.AssetName.ToString() + TEXT("_") + FString::FromInt(i+1);
				const FString DestinationAssetPath = FPaths::Combine(SelectedAssetData.PackagePath.ToString(), NewDuplicatedAssetName);
				if (UEditorAssetLibrary::DuplicateAsset(SourceAssetPath, DestinationAssetPath))
				{
					UEditorAssetLibrary::SaveAsset(DestinationAssetPath, false);
					Counter++;
				}
			}
		}
		if (Counter > 0)
		{
			ShowNotifyInfo(TEXT("Successfully duplicated " + FString::FromInt(Counter) + " files"));
		}
	}
}

void UAutomationAssetAction::ShowNotifyInfo(const FString& Message)
{
	//Pop up notification UI
	FNotificationInfo NotifyInfo(FText::FromString(Message));
	NotifyInfo.bUseLargeFont = true;
	NotifyInfo.FadeOutDuration = 7.0f;
	FSlateNotificationManager::Get().AddNotification(NotifyInfo);
}
