// Copyright Epic Games, Inc. All Rights Reserved.

#include "AutomationToolkits.h"
#include "ContentBrowserModule.h"

#define LOCTEXT_NAMESPACE "FAutomationToolkitsModule"

void FAutomationToolkitsModule::StartupModule()
{
	InitCBMenuExtension();
}

void FAutomationToolkitsModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

void FAutomationToolkitsModule::InitCBMenuExtension()
{
	//Load Content Browser module
	FContentBrowserModule& ContentBrowserModule =
	FModuleManager::LoadModuleChecked<FContentBrowserModule>(TEXT("ContentBrowser"));
	
	//Load Menu Extender
	TArray<FContentBrowserMenuExtender_SelectedPaths>& ContentBrowserMenuExtenders =
	ContentBrowserModule.GetAllPathViewContextMenuExtenders();
	
	//Create custom Delegate > Do first binding > Add Delegate to Content Browser Menu Extender list
	//First binding: Define the position for inserting menu entry
	ContentBrowserMenuExtenders.Add(FContentBrowserMenuExtender_SelectedPaths::CreateRaw(this, &FAutomationToolkitsModule::CustomCBMenuExtender));
}

TSharedRef<FExtender> FAutomationToolkitsModule::CustomCBMenuExtender(const TArray<FString>& SelectedPaths)
{
	TSharedRef<FExtender> MenuExtender(new FExtender());

	if (SelectedPaths.Num() > 0)
	{
		//Define the position for inserting menu entry
		MenuExtender->AddMenuExtension(
		FName("Delete"),
		EExtensionHook::After,
		TSharedPtr<FUICommandList>(),
		//Second binding: Define the dwtails for menu entry. Title, Tooltips, Function
		FMenuExtensionDelegate::CreateRaw(this, &FAutomationToolkitsModule::AddCBMenuEntry));
	}
	return MenuExtender;
}

inline void FAutomationToolkitsModule::AddCBMenuEntry(class FMenuBuilder& MenuBuilder)
{
	//Define the dwtails for menu entry. Title, Tooltips, Function
	MenuBuilder.AddMenuEntry
	(
		FText::FromString(TEXT("Delete Unused Assets")),
		FText::FromString(TEXT("Safely delete all unused assets under folder")),
		FSlateIcon(),
		//Third binding: The actual function to execute
		FExecuteAction::CreateRaw(this, &FAutomationToolkitsModule::OnDeleteUnusedAssetButtonClicked)
		);
}

inline void FAutomationToolkitsModule::OnDeleteUnusedAssetButtonClicked()
{
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("This is the pre-set text"));	

}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FAutomationToolkitsModule, AutomationToolkits)