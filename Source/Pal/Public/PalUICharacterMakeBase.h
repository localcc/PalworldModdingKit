#pragma once
#include "CoreMinimal.h"
#include "PalPlayerDataCharacterMakeInfo.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUICharacterMakeBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUICharacterMakeBase : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    UPalUICharacterMakeBase();
protected:
    UFUNCTION(BlueprintCallable)
    void RequestChangePlayerName(const FString& NewPlayerName);
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerMakeInfo(FPalPlayerDataCharacterMakeInfo& OutMakeInfo);
    
    UFUNCTION(BlueprintCallable)
    void ApplyMakeInfoToPlayerData(const FPalPlayerDataCharacterMakeInfo& MakeInfo);
    
};

