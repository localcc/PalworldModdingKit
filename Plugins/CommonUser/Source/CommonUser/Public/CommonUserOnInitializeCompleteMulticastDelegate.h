#pragma once
#include "CoreMinimal.h"
#include "ECommonUserOnlineContext.h"
#include "ECommonUserPrivilege.h"
#include "CommonUserOnInitializeCompleteMulticastDelegate.generated.h"

class UCommonUserInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FCommonUserOnInitializeCompleteMulticast, const UCommonUserInfo*, UserInfo, bool, bSuccess, FText, Error, ECommonUserPrivilege, RequestedPrivilege, ECommonUserOnlineContext, OnlineContext);

