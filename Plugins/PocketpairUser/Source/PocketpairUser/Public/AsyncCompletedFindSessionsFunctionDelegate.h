#pragma once
#include "CoreMinimal.h"
#include "FindSessionsCallbackProxy.h"
#include "AsyncCompletedFindSessionsFunctionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAsyncCompletedFindSessionsFunction, bool, IsSuccess, const TArray<FBlueprintSessionResult>&, Results, const FString&, ErrorStr);

