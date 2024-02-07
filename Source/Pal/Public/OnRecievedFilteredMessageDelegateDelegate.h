#pragma once
#include "CoreMinimal.h"
#include "PalChatMessage.h"
#include "OnRecievedFilteredMessageDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRecievedFilteredMessageDelegate, const FPalChatMessage&, Message);

