#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PalRaidBossAreaEntrancePoint.generated.h"

UCLASS(Blueprintable)
class PAL_API APalRaidBossAreaEntrancePoint : public AActor {
    GENERATED_BODY()
public:
    APalRaidBossAreaEntrancePoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetWarpPoint() const;
    
};

