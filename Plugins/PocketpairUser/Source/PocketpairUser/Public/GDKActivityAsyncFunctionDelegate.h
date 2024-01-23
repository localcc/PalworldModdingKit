#pragma once
#include "CoreMinimal.h"
#include "GDKActivityAsyncFunctionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGDKActivityAsyncFunction, const FString&, ResponseBody, bool, bResponseOK, int32, ResponseCode);

