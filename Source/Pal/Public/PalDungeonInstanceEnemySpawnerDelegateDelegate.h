#pragma once
#include "CoreMinimal.h"
#include "PalDungeonInstanceEnemySpawnerDelegateDelegate.generated.h"

class APalNPCSpawnerBase;
class UPalDungeonInstanceModel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPalDungeonInstanceEnemySpawnerDelegate, UPalDungeonInstanceModel*, Model, APalNPCSpawnerBase*, EnemySpawner);

