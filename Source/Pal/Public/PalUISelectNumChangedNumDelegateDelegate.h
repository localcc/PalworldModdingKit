#pragma once
#include "CoreMinimal.h"
#include "PalUISelectNumChangedNumDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FPalUISelectNumChangedNumDelegate, int32, nowSelectedNum);

