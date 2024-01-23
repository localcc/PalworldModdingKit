#pragma once
#include "CoreMinimal.h"
#include "PalShopProduct_PalSaveParameter.h"
#include "PalShopProduct_LostPal.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalShopProduct_LostPal : public UPalShopProduct_PalSaveParameter {
    GENERATED_BODY()
public:
    UPalShopProduct_LostPal();
};

