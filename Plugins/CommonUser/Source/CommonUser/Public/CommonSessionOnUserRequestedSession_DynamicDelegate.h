#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnlineResultInformation.h"
#include "CommonSessionOnUserRequestedSession_DynamicDelegate.generated.h"

class UCommonSession_SearchResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCommonSessionOnUserRequestedSession_Dynamic, const FPlatformUserId&, LocalPlatformUserId, UCommonSession_SearchResult*, RequestedSession, const FOnlineResultInformation&, RequestedSessionResult);

