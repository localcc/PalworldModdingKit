#pragma once
#include "CoreMinimal.h"
#include "EPalWorkSuitability.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIWorkSuitabilitySelect.generated.h"

class UPalHUDDispatchParameter_WorkSuitabilityPreference;
class UPalIndividualCharacterContainer;
class UPalIndividualCharacterSlot;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIWorkSuitabilitySelect : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalHUDDispatchParameter_WorkSuitabilityPreference> MyHUDDispatchParameter;
    
public:
    UPalUIWorkSuitabilitySelect();

protected:
    UFUNCTION(BlueprintCallable)
    void RequestChangeSuitabilitySetting(const UPalIndividualCharacterSlot* TargetCharacterSlot, EPalWorkSuitability SuitabilityType, bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeBattleSetting(const UPalIndividualCharacterSlot* TargetCharacterSlot, bool CanBattle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTargetCharacterContainer(UPalIndividualCharacterContainer*& OutContainer) const;
    
};

