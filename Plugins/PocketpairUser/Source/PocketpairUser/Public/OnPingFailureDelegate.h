#pragma once
#include "CoreMinimal.h"
#include "OnPingFailureDelegate.generated.h"

class UPingIP;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPingFailure, UPingIP*, PingOperation, const FString&, HostName);

