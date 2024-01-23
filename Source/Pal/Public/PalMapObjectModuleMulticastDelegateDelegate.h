#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectModuleMulticastDelegateDelegate.generated.h"

class UPalMapObjectConcreteModelBase;
class UPalMapObjectConcreteModelModuleBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPalMapObjectModuleMulticastDelegate, UPalMapObjectConcreteModelBase*, Model, UPalMapObjectConcreteModelModuleBase*, Module);

