#pragma once
#include "CoreMinimal.h"
#include "InteractingEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FInteractingEvent, float, DeltaTime);

