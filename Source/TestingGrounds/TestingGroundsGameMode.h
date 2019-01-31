// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TestingGroundsGameMode.generated.h"

UCLASS(minimalapi)
class ATestingGroundsGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATestingGroundsGameMode();

public:

	UFUNCTION(BlueprintCallable, Category = "BoundsPool")
	void PopulateBoundsVolumePool();

protected:



	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pool")
	class UActorPool* NavMeshBoundsVolumePool;
	

private:

	void AddToPool(class ANavMeshBoundsVolume* VolumeToAdd);

};



