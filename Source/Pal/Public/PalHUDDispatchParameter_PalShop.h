#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_PalShop.generated.h"

class UPalShopBase;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_PalShop : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalShopBase* Shop;
    
    UPalHUDDispatchParameter_PalShop();
};

