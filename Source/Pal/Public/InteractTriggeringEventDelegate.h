#pragma once
#include "CoreMinimal.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "InteractTriggeringEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FInteractTriggeringEvent, AActor*, Other, EPalInteractiveObjectIndicatorType, IndicatorType, float, DeltaTime);

