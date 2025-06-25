#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalDistributeTickManager.generated.h"

class APalMapObjectCommonDropItem3D;

UCLASS(Blueprintable)
class PAL_API UPalDistributeTickManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APalMapObjectCommonDropItem3D*> TickTargets;
    
public:
    UPalDistributeTickManager();

    UFUNCTION(BlueprintCallable)
    bool RemoveTickTarget(APalMapObjectCommonDropItem3D* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    bool AddTickTarget(APalMapObjectCommonDropItem3D* TargetActor);
    
};

