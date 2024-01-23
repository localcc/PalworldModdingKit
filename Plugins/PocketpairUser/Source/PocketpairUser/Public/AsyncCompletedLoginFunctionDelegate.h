#pragma once
#include "CoreMinimal.h"
#include "AsyncCompletedLoginFunctionDelegate.generated.h"

class UPocketpairUserInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAsyncCompletedLoginFunction, const UPocketpairUserInfo*, UserInfo, bool, bSuccess, const FString&, ErrorStr);

