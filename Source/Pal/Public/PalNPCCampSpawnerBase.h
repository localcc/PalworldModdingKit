#pragma once
#include "CoreMinimal.h"
#include "PalEnemyCampStatus.h"
#include "PalLevelObjectActor.h"
#include "PalNPCCampSpawnerBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API APalNPCCampSpawnerBase : public APalLevelObjectActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CampSpawnerName;
    
    APalNPCCampSpawnerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName GetRewardName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcRemainRespawnTime(const FPalEnemyCampStatus& CampStatus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcRemainDespawnTime(const FPalEnemyCampStatus& CampStatus) const;
    
};

