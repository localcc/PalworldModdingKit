#pragma once
#include "CoreMinimal.h"
#include "InteractEventDelegate.generated.h"

class AActor;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FInteractEvent, AActor*, Other, TScriptInterface<IPalInteractiveObjectComponentInterface>, Component);

