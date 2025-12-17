#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PalRaidBossAreaBaseCampPoint.generated.h"

UCLASS(Blueprintable)
class PAL_API APalRaidBossAreaBaseCampPoint : public AActor {
    GENERATED_BODY()
public:
    APalRaidBossAreaBaseCampPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetBaseCampPoint() const;
    
};

