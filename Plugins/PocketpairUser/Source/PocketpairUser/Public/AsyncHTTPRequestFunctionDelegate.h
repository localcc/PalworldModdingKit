#pragma once
#include "CoreMinimal.h"
#include "AsyncHTTPRequestFunctionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAsyncHTTPRequestFunction, const FString&, ResponseBody, bool, bResponseOK, int32, ResponseCode);

