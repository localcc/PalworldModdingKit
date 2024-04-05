#pragma once
#include "CoreMinimal.h"
#include "PalUIItemChestFilterMulticastDelegateDelegate.generated.h"

class UPalMapObjectItemContainerModule;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalUIItemChestFilterMulticastDelegate, UPalMapObjectItemContainerModule*, Module);

