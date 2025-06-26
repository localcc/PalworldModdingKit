#pragma once
#include "CoreMinimal.h"
#include "PalInstanceID.h"
#include "PalLocationPoint_QuestBase.h"
#include "PalLocationPoint_QuestTracking.generated.h"

class UPalIndividualCharacterParameter;

UCLASS(Blueprintable)
class PAL_API UPalLocationPoint_QuestTracking : public UPalLocationPoint_QuestBase {
    GENERATED_BODY()
public:
    UPalLocationPoint_QuestTracking();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDeleteCharacterHPGauge(UPalIndividualCharacterParameter* Parameter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalInstanceID GetTargetCharacterInstanceId() const;
    
};

