#pragma once
#include "CoreMinimal.h"
#include "PalUserWidget.h"
#include "PalUIInGameGeneralDispatchEventReciever.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPalUIInGameGeneralDispatchEventReciever : public UPalUserWidget {
    GENERATED_BODY()
public:
    UPalUIInGameGeneralDispatchEventReciever();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenDismantlingUIFromRadialMenu(const int32 LastSelectedIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenDismantlingUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenBuildingUIFromRadialMenu(const FName BuildObjectId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenBuildingUI(const FName BuildObjectId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseDismantlingUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseBuildingUI();
    
};

