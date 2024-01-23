#pragma once
#include "CoreMinimal.h"
#include "EFetchResult.generated.h"

UENUM(BlueprintType)
enum class EFetchResult : uint8 {
    Success,
    HttpFailed,
    JSONParsingFailed,
};

