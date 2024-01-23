#pragma once
#include "CoreMinimal.h"
#include "InteractSelfDelegateDelegate.generated.h"

class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractSelfDelegate, TScriptInterface<IPalInteractiveObjectComponentInterface>, Component);

