#pragma once
#include "CoreMinimal.h"
#include "EPalShopLotteryType.generated.h"

UENUM(BlueprintType)
enum class EPalShopLotteryType : uint8 {
    None,
    SimpleLottery,
    BiomeLottery,
};

