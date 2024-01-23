#pragma once
#include "CoreMinimal.h"
#include "EPalWorkSuitability.h"
#include "PalUserWidgetWorldHUD.h"
#include "PalUIMapObjectStatusIndicatorBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPalUIMapObjectStatusIndicatorBase : public UPalUserWidgetWorldHUD {
    GENERATED_BODY()
public:
    UPalUIMapObjectStatusIndicatorBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalWorkSuitability GetWorkSuitability() const;
    
};

