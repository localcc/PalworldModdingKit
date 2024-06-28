#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectWorkeeModuleWorkMulticastDelegateDelegate.generated.h"

class UPalMapObjectWorkeeModule;
class UPalWorkBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPalMapObjectWorkeeModuleWorkMulticastDelegate, UPalMapObjectWorkeeModule*, Module, UPalWorkBase*, Work);

