#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectWorkeeModuleWorkDelegateDelegate.generated.h"

class UPalMapObjectWorkeeModule;
class UPalWorkBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FPalMapObjectWorkeeModuleWorkDelegate, UPalMapObjectWorkeeModule*, Module, UPalWorkBase*, Work);

