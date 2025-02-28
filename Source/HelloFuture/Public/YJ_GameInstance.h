// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "YJ_InventoryComponent.h"
#include "YJ_GameInstance.generated.h"

/**
 * 
 */
UCLASS()
class HELLOFUTURE_API UYJ_GameInstance : public UGameInstance
{
	GENERATED_BODY()

	UYJ_GameInstance();

public:
	UFUNCTION(BlueprintCallable)
	class UYJ_Item* GetItemAsEnum(EItemEnum itemEnum);
	
public:
	// 플레이 시 모든 아이템들 객체 들어가있음
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Instanced)
		TArray<class UYJ_Item*> AllItems;

};
