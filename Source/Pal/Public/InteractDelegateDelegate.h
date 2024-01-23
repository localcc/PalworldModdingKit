#pragma once
#include "CoreMinimal.h"
#include "InteractDelegateDelegate.generated.h"

class AActor;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInteractDelegate, AActor*, Other, TScriptInterface<IPalInteractiveObjectComponentInterface>, Component);

