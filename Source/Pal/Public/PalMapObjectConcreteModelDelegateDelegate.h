#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelDelegateDelegate.generated.h"

class UPalMapObjectConcreteModelBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FPalMapObjectConcreteModelDelegate, UPalMapObjectConcreteModelBase*, Model);

