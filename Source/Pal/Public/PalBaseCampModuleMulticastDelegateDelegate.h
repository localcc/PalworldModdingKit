#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampModuleMulticastDelegateDelegate.generated.h"

class UPalBaseCampFunctionModuleBase;
class UPalBaseCampModel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPalBaseCampModuleMulticastDelegate, UPalBaseCampModel*, Model, UPalBaseCampFunctionModuleBase*, Module);

