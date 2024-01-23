#pragma once
#include "CoreMinimal.h"
#include "ECommonMessagingResult.h"
#include "CommonMessagingResultMCDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCommonMessagingResultMCDelegate, ECommonMessagingResult, Result);

