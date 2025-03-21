#pragma once
#include "CoreMinimal.h"
#include "PocketpairConnectServerFunctionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPocketpairConnectServerFunction, bool, bResponseOK);

