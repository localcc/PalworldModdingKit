#pragma once
#include "CoreMinimal.h"
#include "ECommonUserOnlineContext.h"
#include "ECommonUserPrivilege.h"
#include "CommonUserOnInitializeCompleteDelegate.generated.h"

class UCommonUserInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FiveParams(FCommonUserOnInitializeComplete, const UCommonUserInfo*, UserInfo, bool, bSuccess, FText, Error, ECommonUserPrivilege, RequestedPrivilege, ECommonUserOnlineContext, OnlineContext);

