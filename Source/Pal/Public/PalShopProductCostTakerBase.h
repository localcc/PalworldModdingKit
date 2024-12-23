#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalShopProductCreateData.h"
#include "PalShopProductCostTakerBase.generated.h"

class UPalShopProductBase;

UCLASS(Blueprintable)
class PAL_API UPalShopProductCostTakerBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalShopProductCreateData ProductCreateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalShopProductBase> ParentProduct;
    
public:
    UPalShopProductCostTakerBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

