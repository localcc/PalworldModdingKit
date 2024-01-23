#pragma once
#include "CoreMinimal.h"
#include "EPalGroupOperationResult.h"
#include "PalGroupOperationDynamicDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FPalGroupOperationDynamicDelegate, const EPalGroupOperationResult, Result);

