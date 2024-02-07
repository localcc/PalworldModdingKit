#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "PalShopBase.generated.h"

class UPalShopProductBase;

UCLASS(Blueprintable)
class PAL_API UPalShopBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdateAnyProductDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateAnyProductDelegate OnUpdateAnyProduct;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGuid MyShopID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MyShopName, meta=(AllowPrivateAccess=true))
    FName MyShopName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ProductArray, meta=(AllowPrivateAccess=true))
    TArray<UPalShopProductBase*> ProductArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalShopProductBase*> ProductMap_ForServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle RestockTimerHandle_ForServer;
    
public:
    UPalShopBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateAnyProductStock(int32 NowStock);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateAnyProductMaxStock(int32 MaxStock);
    
    UFUNCTION(BlueprintCallable)
    void OnTimerTrigger_Restock();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ProductArray();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MyShopName();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetId(FGuid& OutID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllProduct(TArray<UPalShopProductBase*>& OutProductArray) const;
    
};

