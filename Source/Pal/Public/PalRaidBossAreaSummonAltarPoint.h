#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PalRaidBossAreaSummonAltarPoint.generated.h"

UCLASS(Blueprintable)
class PAL_API APalRaidBossAreaSummonAltarPoint : public AActor {
    GENERATED_BODY()
public:
    APalRaidBossAreaSummonAltarPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetSummonAltarPoint() const;
    
};

