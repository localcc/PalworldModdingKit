#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalItemShopProductType.h"
#include "PalDroppedPalProductDataForShop.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalShopManager.generated.h"

class UDataTable;
class UPalShopBase;
class UPalShopProduct_LostPal;
class UPalShopProduct_TradeItem;

// todo: these probably have params
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRecievedBuyResultDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FReceivedDroppedPalDataDelegate);

UCLASS(Blueprintable)
class PAL_API UPalShopManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecievedBuyResultDelegate OnRecievedBuyResultDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceivedDroppedPalDataDelegate OnReceivedDroppedPalDataDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalItemShopProductType, TSubclassOf<UPalShopProduct_TradeItem>> ItemShopProductClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemShopSettingDataTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalShopBase*> CreatedItemShopMap_ForServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalShopBase*> CreatedPalShopMap_ForServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalDroppedPalProductDataForShop> LocalDroppedPalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalShopProduct_LostPal* LostPalProduct_Tmp;
    
public:
    UPalShopManager();


    // Fix for true pure virtual functions not being implemented
};

