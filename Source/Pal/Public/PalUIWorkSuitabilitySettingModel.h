#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalWorkSuitability.h"
#include "PalInstanceID.h"
#include "PalUIWorkSuitabilitySettingModel.generated.h"

class UPalIndividualCharacterContainer;

UCLASS(Blueprintable)
class PAL_API UPalUIWorkSuitabilitySettingModel : public UObject {
    GENERATED_BODY()
public:
    UPalUIWorkSuitabilitySettingModel();

    UFUNCTION(BlueprintCallable)
    void RequestChangeWorkSuitability(const FPalInstanceID& TargetIndividualId, const EPalWorkSuitability WorkSuitability, const bool bOn);
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeBaseCampBattle(const FPalInstanceID& TargetIndividualId, const bool bOn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterContainer* GetTargetBaseCampWorkerCharacterContainer() const;
    
};

