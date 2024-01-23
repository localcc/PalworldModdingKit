#pragma once
#include "CoreMinimal.h"
#include "PalDeadInfo.h"
#include "PalEventNotifyCharacterDeadDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalEventNotifyCharacterDeadDelegate, const FPalDeadInfo&, DeadInfo);

