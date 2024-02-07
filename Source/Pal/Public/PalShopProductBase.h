#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalShopProductBase.generated.h"

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
    bool IsInfinityStockFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StockNum, meta=(AllowPrivateAccess=true))
    int32 StockNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxStockNum, meta=(AllowPrivateAccess=true))
    int32 MaxStockNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsValidProductFlag;
    
public:
    UPalShopProductBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_StockNum();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxStockNum();
    
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

