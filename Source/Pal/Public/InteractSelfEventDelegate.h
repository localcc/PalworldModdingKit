#pragma once
#include "CoreMinimal.h"
#include "InteractSelfEventDelegate.generated.h"

class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FInteractSelfEvent, TScriptInterface<IPalInteractiveObjectComponentInterface>, Component);

