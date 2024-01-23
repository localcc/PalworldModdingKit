#pragma once
#include "CoreMinimal.h"
#include "ReactivePropertyFloatValueChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FReactivePropertyFloatValueChangeDelegate, float, NewValue);

