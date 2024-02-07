#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalWorldPartitionLoadingRangeVolume.generated.h"

UCLASS(Blueprintable)
class APalWorldPartitionLoadingRangeVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> LoadingRangeMap;
    
    APalWorldPartitionLoadingRangeVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOverrideLoadingRange(bool Enable);
    
};

