#pragma once
#include "CoreMinimal.h"
#include "JoinSessionResultType.h"
#include "AsyncCompletedJoinSessionFunctionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAsyncCompletedJoinSessionFunction, bool, IsSuccess, JoinSessionResultType, Type);

