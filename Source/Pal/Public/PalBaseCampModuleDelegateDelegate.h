#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampModuleDelegateDelegate.generated.h"

class UPalBaseCampFunctionModuleBase;
class UPalBaseCampModel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FPalBaseCampModuleDelegate, UPalBaseCampModel*, Model, UPalBaseCampFunctionModuleBase*, Module);

