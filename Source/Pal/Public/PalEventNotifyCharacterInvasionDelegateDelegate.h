#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalEventNotifyCharacterInvasionDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPalEventNotifyCharacterInvasionDelegate, AActor*, InvasionActor, const FGuid&, AreaInstanceId);

