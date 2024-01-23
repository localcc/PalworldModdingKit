#pragma once
#include "CoreMinimal.h"
#include "AsyncCompletedCreateSessionFunctionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAsyncCompletedCreateSessionFunction, bool, IsSuccess, const FString&, ErrorStr);

