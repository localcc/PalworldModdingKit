#pragma once
#include "CoreMinimal.h"
#include "PalPlayerDataCharacterMakeInfo.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUICharacterDressing.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUICharacterDressing : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    UPalUICharacterDressing();

protected:
    UFUNCTION(BlueprintCallable)
    void ApplyDressingInfoToPlayerData(const FPalPlayerDataCharacterMakeInfo& MakeInfo);
    
};

