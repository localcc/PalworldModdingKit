#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalShopProductCreateData.h"
#include "PalShopProductGiverBase.generated.h"

class UPalShopProductBase;

UCLASS(Blueprintable)
class PAL_API UPalShopProductGiverBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateNowStockNumDelegate, int32, NowStock);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateMaxStockNumDelegate, int32, MaxStockNum);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateNowStockNumDelegate OnUpdateNowStockNumDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateMaxStockNumDelegate OnUpdateMaxStockNumDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalShopProductCreateData ProductCreateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalShopProductBase> ParentProduct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsInfinityStockFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StockNum, meta=(AllowPrivateAccess=true))
    int32 StockNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxStockNum, meta=(AllowPrivateAccess=true))
    int32 MaxStockNum;
    
public:
    UPalShopProductGiverBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_StockNum();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxStockNum();
    
};

