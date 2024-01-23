#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EPalAISightJudgementType.h"
#include "PalAISightResponseTransitionableInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPalAISightResponseTransitionableInterface : public UInterface {
    GENERATED_BODY()
};

class IPalAISightResponseTransitionableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetTransitionableJudgementType(TArray<EPalAISightJudgementType>& JudgeTypeList);
    
};

