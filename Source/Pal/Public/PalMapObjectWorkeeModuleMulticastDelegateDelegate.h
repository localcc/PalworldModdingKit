#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectWorkeeModuleMulticastDelegateDelegate.generated.h"

class UPalMapObjectWorkeeModule;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalMapObjectWorkeeModuleMulticastDelegate, UPalMapObjectWorkeeModule*, Module);

