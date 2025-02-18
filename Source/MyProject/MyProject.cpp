// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProject.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_PRIMARY_GAME_MODULE(FDefaultGameModuleImpl, MyProject, "MyProject");

void BeginPlay()
{
    UE_LOG(LogTemp, Warning, TEXT("Hello World!"));
};