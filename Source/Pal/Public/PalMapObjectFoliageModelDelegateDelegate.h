#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectFoliageModelDelegateDelegate.generated.h"

class UPalMapObjectFoliageModel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalMapObjectFoliageModelDelegate, UPalMapObjectFoliageModel*, Model);

