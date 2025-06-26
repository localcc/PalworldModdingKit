#pragma once
#include "CoreMinimal.h"
#include "EPalDungeonRewardSpawnerType.h"
#include "PalLevelObjectActor.h"
#include "PalDungeonRewardSpawnerPoint.generated.h"

class UPalDungeonRewardSpawnerPointBehaviour;

UCLASS(Blueprintable)
class PAL_API APalDungeonRewardSpawnerPoint : public APalLevelObjectActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalDungeonRewardSpawnerType RewardSpawnerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalDungeonRewardSpawnerPointBehaviour* Behaviour;
    
public:
    APalDungeonRewardSpawnerPoint(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void CheckLevelStreamingCompleted_ServerInternal();
    
};

