#include "PalNetworkShopComponent.h"

UPalNetworkShopComponent::UPalNetworkShopComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalNetworkShopComponent::SetupShopDataForActor_ToServer_Implementation(AActor* VenderActor) {
}

void UPalNetworkShopComponent::RequestSellPals_ToServer_Implementation(const FGuid& RequestPlayerUId, const FGuid& ShopID, const TArray<FPalCharacterSlotId>& SellPalSlotIDArray) {
}

void UPalNetworkShopComponent::RequestSellItems_ToServer_Implementation(const FGuid& RequestPlayerUId, const FGuid& ShopID, const TArray<FPalItemSlotIdAndNum>& SellItemSlotIDArray) {
}

void UPalNetworkShopComponent::RequestCollectDroppedPalProductData_Implementation(const FGuid& RequestPlayerUId, const int32 MaxCollectNum) {
}

void UPalNetworkShopComponent::RequestBuyProduct_ToServer_Implementation(const FPalInstanceID& RequestPlayerInstanceId, const FGuid& ShopID, const FGuid& ProductId, int32 BuyNum) {
}

void UPalNetworkShopComponent::RequestBuyLostPal_ToServer_Implementation(const FGuid& RequestPlayerUId, const FPalCharacterStoredParameterId& StoredParameterId) {
}

void UPalNetworkShopComponent::RemoveShopData_ToServer_Implementation(const FGuid& RemoveShopID) {
}

void UPalNetworkShopComponent::RecieveBuyResult_ToClient_Implementation(EPalShopBuyResultType ResultType) {
}

void UPalNetworkShopComponent::ReceiveDroppedPalProductData_ToClient_Implementation(const TArray<FPalDroppedPalProductDataForShop>& CollectedData) {
}


