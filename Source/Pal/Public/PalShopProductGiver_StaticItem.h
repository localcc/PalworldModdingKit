#pragma once
#include "CoreMinimal.h"
#include "PalShopProductGiverBase.h"
#include "PalShopProductGiver_StaticItem.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalShopProductGiver_StaticItem : public UPalShopProductGiverBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName ProductStaticItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 OverridePrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 StackNumPerProduct;
    
public:
    UPalShopProductGiver_StaticItem();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

