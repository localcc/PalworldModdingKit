#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBaseCampRecoverHungryChildBase.h"
#include "PalAIActionBaseCampRecoverHungryEat.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalAIActionBaseCampRecoverHungryEat : public UPalAIActionBaseCampRecoverHungryChildBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EatTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnSpeed;
    
public:
    UPalAIActionBaseCampRecoverHungryEat();
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishEatingTime();
    
};

