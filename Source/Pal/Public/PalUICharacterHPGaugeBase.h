#pragma once
#include "CoreMinimal.h"
#include "PalUserWidget.h"
#include "PalUICharacterHPGaugeBase.generated.h"

class APalCharacter;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUICharacterHPGaugeBase : public UPalUserWidget {
    GENERATED_BODY()
public:
    UPalUICharacterHPGaugeBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePosition();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupGaugeColor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupEvents();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTargetCharacter(APalCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHPPercent(float Percent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestClose();
    
};

