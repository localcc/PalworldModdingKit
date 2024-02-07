#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPalEnemySpawnActorType.h"
#include "EPalEnemySpawnDefaultAction.h"
#include "PalEnemySpawner.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API APalEnemySpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalEnemySpawnActorType EnemyActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalEnemySpawnDefaultAction DefaultAction;
    
    APalEnemySpawner(const FObjectInitializer& ObjectInitializer);

};

