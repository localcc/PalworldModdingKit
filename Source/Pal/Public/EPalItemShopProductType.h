#pragma once
#include "CoreMinimal.h"
#include "EPalItemShopProductType.generated.h"

UENUM(BlueprintType)
enum class EPalItemShopProductType : uint8 {
    Invalid,
    Normal,
    OnlyPurchaseOne,
};

