#pragma once
#include "CoreMinimal.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "InteractTriggerEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FInteractTriggerEvent, AActor*, Other, EPalInteractiveObjectIndicatorType, IndicatorType);

