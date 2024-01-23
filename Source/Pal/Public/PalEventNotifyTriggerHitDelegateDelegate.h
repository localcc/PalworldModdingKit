#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalEventNotifyTriggerHitDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPalEventNotifyTriggerHitDelegate, AActor*, HitActor, const FGuid&, AreaInstanceId);

