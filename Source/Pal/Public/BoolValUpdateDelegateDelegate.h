#pragma once
#include "CoreMinimal.h"
#include "BoolValUpdateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBoolValUpdateDelegate, FName, Key, bool, NewValue);

