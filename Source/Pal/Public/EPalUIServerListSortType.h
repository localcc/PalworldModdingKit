#pragma once
#include "CoreMinimal.h"
#include "EPalUIServerListSortType.generated.h"

UENUM(BlueprintType)
enum class EPalUIServerListSortType : uint8 {
    Latest,
    DaysAsc,
    DaysDesc,
    CurrentPlayerAsc,
    CurrentPlayerDesc,
};

