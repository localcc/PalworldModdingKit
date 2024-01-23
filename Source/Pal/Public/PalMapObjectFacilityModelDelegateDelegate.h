#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectFacilityModelDelegateDelegate.generated.h"

class UPalMapObjectConcreteModelBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalMapObjectFacilityModelDelegate, UPalMapObjectConcreteModelBase*, Model);

