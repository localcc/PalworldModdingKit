#pragma once
#include "CoreMinimal.h"
#include "PushContentToLayerForPlayerAsyncDelegateDelegate.generated.h"

class UCommonActivatableWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPushContentToLayerForPlayerAsyncDelegate, UCommonActivatableWidget*, UserWidget);

