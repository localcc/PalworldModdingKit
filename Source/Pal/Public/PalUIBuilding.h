#pragma once
#include "CoreMinimal.h"
#include "PalUserWidgetStackableUI.h"
#include "PalUIBuilding.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPalUIBuilding : public UPalUserWidgetStackableUI {
    GENERATED_BODY()
public:
    UPalUIBuilding();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistBaseCamp();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuildObjectSuccessed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuildObjectFailed(const int32 ResultIntValue);
    
};

