#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/EngineBaseTypes.h"
#include "EPalWidgetInputMode.h"
#include "PalActivatableWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPalActivatableWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWidgetInputMode InputConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMouseCaptureMode GameMouseCaptureMode;
    
public:
    UPalActivatableWidget();
};

