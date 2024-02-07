#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalShopLotteryBiomeType.h"
#include "EPalShopLotteryType.h"
#include "PalDataTableRowName_ItemShopLotteryData.h"
#include "PalDataTableRowName_PalShopCreateData.h"
#include "PalVenderDataComponent.generated.h"

class UPalShopBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalVenderDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRegisteredPalShopDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRegisteredItemShopDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegisteredItemShopDelegate OnRegisteredItemShopDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegisteredPalShopDelegate OnRegisteredPalShopDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid MyShopID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemShopRestockMinute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalShopLotteryType itemShopLotteryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemShopLotteryData itemShopSimpleLotteryTableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalShopLotteryBiomeType, FPalDataTableRowName_ItemShopLotteryData> itemShopBiomeLotteryTableMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PalShopRestockMinute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalShopLotteryType palShopLotteryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PalShopCreateData palShopSimpleLotteryTableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalShopLotteryBiomeType, FPalDataTableRowName_PalShopCreateData> palShopBiomeLotteryTableMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MyItemShop, meta=(AllowPrivateAccess=true))
    UPalShopBase* MyItemShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MyPalShop, meta=(AllowPrivateAccess=true))
    UPalShopBase* MyPalShop;
    
public:
    UPalVenderDataComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetPalShop(UPalShopBase*& OutShop) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetItemShop(UPalShopBase*& OutShop) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupShopData();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_MyPalShop();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MyItemShop();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidPalShop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidItemShop() const;
    
};

