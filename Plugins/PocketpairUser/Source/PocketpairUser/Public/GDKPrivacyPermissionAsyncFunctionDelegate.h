#pragma once
#include "CoreMinimal.h"
#include "GDKPrivacyPermissionAsyncFunctionDelegate.generated.h"

class UGDKPrivacyPermissionAsyncFunction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGDKPrivacyPermissionAsyncFunction, UGDKPrivacyPermissionAsyncFunction*, PrivacyPermission);

