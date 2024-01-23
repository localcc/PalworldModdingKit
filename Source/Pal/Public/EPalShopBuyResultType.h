#pragma once
#include "CoreMinimal.h"
#include "EPalShopBuyResultType.generated.h"

UENUM(BlueprintType)
enum class EPalShopBuyResultType : uint8 {
    Successed,
    Failed_InvalidBuyNum,
    Failed_NotEnoughStock,
    Failed_NotEnoughMoney,
    Failed_NotEnoughItemSlot,
    Failed_NotEnoughCharacterSlot,
    Failed_ExistReservedProcess,
    Failed_NotFoundItemContainer,
    Failed_NotFoundPlayerInventoryData,
    Failed_NotFoundPlayerMoneyData,
    Failed_NotFoundProduct,
    Failed_NotFoundShop,
    Failed_NotFoundStoredPal,
    Unknown,
};

