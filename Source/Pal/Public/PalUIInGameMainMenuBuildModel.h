#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalUIInGameMainMenuBuildModel.generated.h"

class UPalItemContainer;

UCLASS(Blueprintable)
class UPalUIInGameMainMenuBuildModel : public UObject {
    GENERATED_BODY()
public:
    UPalUIInGameMainMenuBuildModel();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Setup();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateInventory(UPalItemContainer* Container);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Dispose();
    
};

