#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampFacilityRequestResult.generated.h"

UENUM(BlueprintType)
enum class EPalBaseCampFacilityRequestResult : uint8 {
    FailedNotExistsAnyFacilities,
    FailedNotExistsTheFacility,
    FailedAlreadyUsing,
    Success,
};

