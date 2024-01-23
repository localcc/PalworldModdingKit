#pragma once
#include "CoreMinimal.h"
#include "GDKInviteAsyncFunctionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGDKInviteAsyncFunction, const FString&, InviteCode);

