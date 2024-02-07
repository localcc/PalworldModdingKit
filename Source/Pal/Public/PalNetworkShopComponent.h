#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalShopBuyResultType.h"
#include "PalCharacterSlotId.h"
#include "PalCharacterStoredParameterId.h"
#include "PalDroppedPalProductDataForShop.h"
#include "PalInstanceID.h"
#include "PalItemSlotIdAndNum.h"
#include "PalNetworkShopComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkShopComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkShopComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetupShopDataForActor_ToServer(AActor* VenderActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSellPals_ToServer(const FGuid& RequestPlayerUId, const FGuid& ShopID, const TArray<FPalCharacterSlotId>& SellPalSlotIDArray);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSellItems_ToServer(const FGuid& RequestPlayerUId, const FGuid& ShopID, const TArray<FPalItemSlotIdAndNum>& SellItemSlotIDArray);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestCollectDroppedPalProductData(const FGuid& RequestPlayerUId, const int32 MaxCollectNum);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestBuyProduct_ToServer(const FPalInstanceID& RequestPlayerInstanceId, const FGuid& ShopID, const FGuid& ProductId, int32 BuyNum);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestBuyLostPal_ToServer(const FGuid& RequestPlayerUId, const FPalCharacterStoredParameterId& StoredParameterId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RemoveShopData_ToServer(const FGuid& RemoveShopID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RecieveBuyResult_ToClient(EPalShopBuyResultType ResultType);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveDroppedPalProductData_ToClient(const TArray<FPalDroppedPalProductDataForShop>& CollectedData);
    
};

