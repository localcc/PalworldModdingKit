#pragma once
#include "CoreMinimal.h"
#include "DelegateTickFunctionExecuteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDelegateTickFunctionExecute, float, DeltaTime);

