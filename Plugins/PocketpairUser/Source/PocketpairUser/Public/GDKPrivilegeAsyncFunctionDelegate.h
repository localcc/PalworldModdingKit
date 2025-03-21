#pragma once
#include "CoreMinimal.h"
#include "GDKPrivilegeAsyncFunctionDelegate.generated.h"

class UGDKPrivilegeAsyncFunction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGDKPrivilegeAsyncFunction, UGDKPrivilegeAsyncFunction*, Privilege);

