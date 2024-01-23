#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectModuleDelegateDelegate.generated.h"

class UPalMapObjectConcreteModelBase;
class UPalMapObjectConcreteModelModuleBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FPalMapObjectModuleDelegate, UPalMapObjectConcreteModelBase*, Model, UPalMapObjectConcreteModelModuleBase*, Module);

