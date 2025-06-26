#pragma once
#include "CoreMinimal.h"
#include "OnCreateInteractDelegatesDelegate.generated.h"

class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCreateInteractDelegates, TScriptInterface<IPalInteractiveObjectComponentInterface>, InteractDelegatesInterface);

