#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalWidgetTimerGaugeParameter.generated.h"

UCLASS(Blueprintable)
class UPalWidgetTimerGaugeParameter : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName bindActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHide;
    
    UPalWidgetTimerGaugeParameter();
};

