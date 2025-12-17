#pragma once
#include "CoreMinimal.h"
#include "PalOnMontagePlayDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalOnMontagePlayDelegate, FName, NotifyName);

