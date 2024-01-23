#pragma once
#include "CoreMinimal.h"
#include "ECommonUserPrivilegeResult.generated.h"

UENUM(BlueprintType)
enum class ECommonUserPrivilegeResult : uint8 {
    Unknown,
    Available,
    UserNotLoggedIn,
    LicenseInvalid,
    VersionOutdated,
    NetworkConnectionUnavailable,
    AgeRestricted,
    AccountTypeRestricted,
    AccountUseRestricted,
    PlatformFailure,
};

