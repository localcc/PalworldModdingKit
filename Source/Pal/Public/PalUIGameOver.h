#pragma once
#include "CoreMinimal.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIGameOver.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIGameOver : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    UPalUIGameOver();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistRespawnLocation();
    
};

