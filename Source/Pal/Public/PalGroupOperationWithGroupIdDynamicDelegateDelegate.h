#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalGroupOperationResult.h"
#include "PalGroupOperationWithGroupIdDynamicDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FPalGroupOperationWithGroupIdDynamicDelegate, const EPalGroupOperationResult, Result, const FGuid&, GroupId);

