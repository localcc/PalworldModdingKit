#pragma once
#include "CoreMinimal.h"
#include "EPalItemShopProductType.h"
#include "PalShopProductCostTakerBase.h"
#include "PalShopCostTaker_StaticItem.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalShopCostTaker_StaticItem : public UPalShopProductCostTakerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EPalItemShopProductType ItemProductType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName RequireStaticItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName TargetProductStaticItemID;
    
public:
    UPalShopCostTaker_StaticItem();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

