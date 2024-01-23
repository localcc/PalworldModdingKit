#pragma once
#include "CoreMinimal.h"
#include "ECommonUserAvailability.h"
#include "ECommonUserPrivilege.h"
#include "CommonUserAvailabilityChangedDelegateDelegate.generated.h"

class UCommonUserInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FCommonUserAvailabilityChangedDelegate, const UCommonUserInfo*, UserInfo, ECommonUserPrivilege, Privilege, ECommonUserAvailability, OldAvailability, ECommonUserAvailability, NewAvailability);

