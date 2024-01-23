#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterStatusOperationResult.h"
#include "PalCharacterStatusOperationResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalCharacterStatusOperationResultDelegate, const EPalCharacterStatusOperationResult, Result);

