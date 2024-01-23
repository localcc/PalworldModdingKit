#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelMulticastDelegateDelegate.generated.h"

class UPalMapObjectConcreteModelBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalMapObjectConcreteModelMulticastDelegate, UPalMapObjectConcreteModelBase*, Model);

