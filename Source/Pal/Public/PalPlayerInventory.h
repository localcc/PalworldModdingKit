#pragma once
#include "CoreMinimal.h"
#include "PalItemInventoryBase.h"
#include "PalPlayerInventory.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalPlayerInventory : public UPalItemInventoryBase {
    GENERATED_BODY()
public:
    UPalPlayerInventory();
};

