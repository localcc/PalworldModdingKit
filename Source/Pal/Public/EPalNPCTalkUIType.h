#pragma once
#include "CoreMinimal.h"
#include "EPalNPCTalkUIType.generated.h"

UENUM(BlueprintType)
enum class EPalNPCTalkUIType : uint8 {
    None,
    FreeTalk,
    NormalShop,
    WeaponShop,
    PalShop,
    QuestOrder,
    RandomEventShop,
    CollectionItemTrade_001,
};

