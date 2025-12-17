#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectOperationResult.h"
#include "OnPaintResultChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPaintResultChanged, EPalMapObjectOperationResult, NewResult);

