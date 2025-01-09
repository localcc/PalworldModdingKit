#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalShopProductBase.generated.h"

class UPalShopProductCostTakerBase;
class UPalShopProductGiverBase;

UCLASS(Blueprintable)
class PAL_API UPalShopProductBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateNowStockNumDelegate, int32, NowStock);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateMaxStockNumDelegate, int32, MaxStockNum);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateNowStockNumDelegate OnUpdateNowStockNumDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateMaxStockNumDelegate OnUpdateMaxStockNumDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGuid MyProductID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsValidProductFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MyProductCostTaker, meta=(AllowPrivateAccess=true))
    UPalShopProductCostTakerBase* MyProductCostTaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MyProductGiver, meta=(AllowPrivateAccess=true))
    UPalShopProductGiverBase* MyProductGiver;
    
public:
    UPalShopProductBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateProductStock(int32 NowStock);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateProductMaxStock(int32 MaxStock);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_MyProductGiver();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MyProductCostTaker();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidProduct();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSoldout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInfinityStock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainStockNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetProductNameText(FText& OutText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxStockNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxBuyNum_LocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetId(FGuid& OutID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBuy_LocalPlayer() const;
    
};

