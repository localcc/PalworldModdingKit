#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalShopProductBase.h"
#include "PalShopProduct_TradeItem.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalShopProduct_TradeItem : public UPalShopProductBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName ProductStaticItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float BuyRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 OverridePrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName RequireStaticItemID;
    
public:
    UPalShopProduct_TradeItem();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequireItemNum(const FGuid& PlayerUId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRequireItemName(FName& OutRequireItemName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetProductStaticItemID(FName& OutStaticID) const;
    
};

