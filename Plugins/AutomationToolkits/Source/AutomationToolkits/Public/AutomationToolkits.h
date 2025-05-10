// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FAutomationToolkitsModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;


private:
	//The level of Content Browser is lower than the normal actor class. 
	//In order to add custom buttons to the Content Browser we need to modify through module not just actor class

	//Add Custom Delegate to Content Browser Menu Extender list and do first binding
	void InitCBMenuExtension(); 

	//Define the position for inserting menu entry and do second binding
	TSharedRef<FExtender> CustomCBMenuExtender(const TArray<FString>& SelectedPaths);

	void AddCBMenuEntry(class FMenuBuilder& MenuBuilder);

	void OnDeleteUnusedAssetButtonClicked();
	
};



