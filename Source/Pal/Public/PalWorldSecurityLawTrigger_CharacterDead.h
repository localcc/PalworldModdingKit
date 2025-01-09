#pragma once
#include "CoreMinimal.h"
#include "PalDeadInfo.h"
#include "PalWorldSecurityLawTrigger.h"
#include "PalWorldSecurityLawTrigger_CharacterDead.generated.h"

class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API UPalWorldSecurityLawTrigger_CharacterDead : public UPalWorldSecurityLawTrigger {
    GENERATED_BODY()
public:
    UPalWorldSecurityLawTrigger_CharacterDead();

protected:
    UFUNCTION(BlueprintCallable)
    void OnNotifiedEvent(const FPalDeadInfo& DeadInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Condition(const FPalDeadInfo& DeadInfo, UPalIndividualCharacterHandle*& CriminalHandle);
    
};

