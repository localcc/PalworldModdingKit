#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectFoliageModelSingleDelegateDelegate.generated.h"

class UPalMapObjectFoliageModel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FPalMapObjectFoliageModelSingleDelegate, UPalMapObjectFoliageModel*, Model);

