#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalEnemyCampStatus.h"
#include "PalNPCCampSpawnerBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API APalNPCCampSpawnerBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CampSpawnerName;
    
    APalNPCCampSpawnerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcRemainRespawnTime(const FPalEnemyCampStatus& CampStatus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcRemainDespawnTime(const FPalEnemyCampStatus& CampStatus) const;
    
};

