#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "PalUserWidgetWorldHUD.h"
#include "PalUserWidgetTimerGaugeBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUserWidgetTimerGaugeBase : public UPalUserWidgetWorldHUD {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle targetTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
public:
    UPalUserWidgetTimerGaugeBase();
protected:
    UFUNCTION(BlueprintCallable)
    void VisibilityForceHidden(ESlateVisibility changedVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGaugeText(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGaugePercent(float Percent);
    
};

