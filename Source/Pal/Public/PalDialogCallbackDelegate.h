#pragma once
#include "CoreMinimal.h"
#include "PalDialogCallbackDelegate.generated.h"

class UPalDialogParameterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FPalDialogCallback, bool, bResult, UPalDialogParameterBase*, Parameter);

