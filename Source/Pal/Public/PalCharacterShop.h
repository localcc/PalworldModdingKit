#pragma once
#include "CoreMinimal.h"
#include "PalShopBase.h"
#include "PalCharacterShop.generated.h"

class UPalShopProduct_LostPal;

UCLASS(Blueprintable)
class PAL_API UPalCharacterShop : public UPalShopBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalShopProduct_LostPal*> LocalLostPalProductArray;
    
public:
    UPalCharacterShop();
};

