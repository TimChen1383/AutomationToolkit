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

void UAutomationAssetAction::AddPrefixes()
{
	TArray<UObject*> SelectedObjects = UEditorUtilityLibrary::GetSelectedAssets();
	uint32 Counter = 0;
	
	for (UObject* SelectedObject : SelectedObjects)
	{
		if (!SelectedObject) continue;

		FString* PrefixFound = PrefixMap.Find(SelectedObject->GetClass());
		if (!PrefixFound || PrefixFound->IsEmpty())
		{
			FText MsgTitle = FText::FromString(TEXT("Warning"));
			FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(TEXT("Failed to find prefix for class ") + SelectedObject->GetClass()->GetName()), &MsgTitle);
			continue;;
		}
		else
		{
			FString OldName = SelectedObject->GetName();
			if (OldName.StartsWith(*PrefixFound))
			{
				//If asset's original name already included prefix, we are not going to add it again
				continue;
			}
			else
			{
				//Rename the asset with prefix
				const FString NewNameWithPrefix = *PrefixFound + OldName;
				UEditorUtilityLibrary::RenameAsset(SelectedObject, NewNameWithPrefix);
				Counter++;
			}
		}
	}
	if (Counter > 0)
	{
		ShowNotifyInfo(TEXT("Successfully renamed") + FString::FromInt(Counter) + " assets");
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
