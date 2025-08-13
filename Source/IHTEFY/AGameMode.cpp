// Fill out your copyright notice in the Description page of Project Settings.


#include "AGameMode.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"

AAGameMode::AAGameMode()
{
}

void AAGameMode::BeginPlay()
{
	Super::BeginPlay();
	if (IsValid(WidgetReference))
	{
		createdWidget = CreateWidget(GetWorld(), WidgetReference);
	}

	//put the widget on the screen
	if (IsValid(createdWidget))
	{
		createdWidget->AddToViewport();
	}
}
