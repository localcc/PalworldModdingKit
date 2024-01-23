#pragma once
#include "CoreMinimal.h"
#include "PalDialogBoolCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FPalDialogBoolCallback, bool, bResult);

