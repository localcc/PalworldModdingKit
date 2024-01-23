#pragma once
#include "CoreMinimal.h"
#include "ReactivePropertyFloatValueChangeMulticastDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReactivePropertyFloatValueChangeMulticastDelegate, float, NewValue);

