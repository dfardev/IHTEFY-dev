// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "AGameMode.generated.h"

/**
 * 
 */
UCLASS()
class IHTEFY_API AAGameMode : public AGameModeBase/*AGameMode*/
{
	GENERATED_BODY()

public:
	AAGameMode();
	
	UPROPERTY(EditDefaultsOnly, Category = "UI")
		TSubclassOf<class UUserWidget> WidgetReference;

	//actual reference to the created widget
	UPROPERTY()
		class UUserWidget* createdWidget;

	virtual void BeginPlay() override;
};
