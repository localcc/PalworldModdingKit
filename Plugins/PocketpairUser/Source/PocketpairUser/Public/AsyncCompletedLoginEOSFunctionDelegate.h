#pragma once
#include "CoreMinimal.h"
#include "AsyncCompletedLoginEOSFunctionDelegate.generated.h"

class UPocketpairUserInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAsyncCompletedLoginEOSFunction, const UPocketpairUserInfo*, UserInfo, bool, bSuccess, const FString&, ErrorStr);

