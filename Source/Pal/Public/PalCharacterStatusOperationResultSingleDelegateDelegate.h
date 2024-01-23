#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterStatusOperationResult.h"
#include "PalCharacterStatusOperationResultSingleDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FPalCharacterStatusOperationResultSingleDelegate, const EPalCharacterStatusOperationResult, Result);

