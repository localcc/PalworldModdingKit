#pragma once
#include "CoreMinimal.h"
#include "EPalOilrigType.h"
#include "PalDeadInfo.h"
#include "PalOilrigTreasureBoxSpawner.h"
#include "Templates/SubclassOf.h"
#include "PalOilrigGoalCrateSpawnerBase.generated.h"

class APalOilrigGoalCrateBase;

UCLASS(Blueprintable)
class PAL_API APalOilrigGoalCrateSpawnerBase : public APalOilrigTreasureBoxSpawner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalOilrigGoalCrateBase> CrateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalOilrigGoalCrateBase* SpawnedCrate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalOilrigType OilrigType;
    
public:
    APalOilrigGoalCrateSpawnerBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnDeadCombatHeli(FPalDeadInfo Info);
    
};

