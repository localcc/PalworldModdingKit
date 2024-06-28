#include "PalMapObjectConvertItemModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectConvertItemModel::UPalMapObjectConvertItemModel() {
    this->RequestedProductNum = 0;
    this->RemainProductNum = 0;
    this->bIsWorkable = false;
    this->WorkSpeedAdditionalRate = 1.00f;
    this->CurrentRecipeRequestPlayerId = 0;
    this->TargetRankMax = 0;
    this->IsPickUpInteractable = true;
    this->bCanTransportOutProduct = false;
}

void UPalMapObjectConvertItemModel::ReceivePickupProductResult_Client(const FPalNetArchive& Archive) {
}

void UPalMapObjectConvertItemModel::ReceivedPickProductResult(UPalItemSlot* Slot) {
}

void UPalMapObjectConvertItemModel::PickupProduct_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectConvertItemModel::OnUpdateEnergyModuleState(UPalMapObjectEnergyModule* EnergyModule) {
}

void UPalMapObjectConvertItemModel::OnUpdateContainerContentInServer(UPalItemContainer* Container) {
}

void UPalMapObjectConvertItemModel::OnStartWorkAnyone_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& WorkerIndividualId) {
}

void UPalMapObjectConvertItemModel::OnRep_RequestedProductNum() {
}

void UPalMapObjectConvertItemModel::OnRep_RemainProductNum() {
}

void UPalMapObjectConvertItemModel::OnRep_IsWorkable() {
}

void UPalMapObjectConvertItemModel::OnRep_CurrentRecipeId() {
}

void UPalMapObjectConvertItemModel::OnFinishWorkInServer(UPalWorkBase* Work) {
}

void UPalMapObjectConvertItemModel::OnEndWorkAnyone_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& WorkerIndividualId) {
}

bool UPalMapObjectConvertItemModel::IsTransportToStorage() const {
    return false;
}

bool UPalMapObjectConvertItemModel::IsProductNumInfinite(const int32 ProductNum) {
    return false;
}

UPalItemSlot* UPalMapObjectConvertItemModel::GetSlotInjectableMaterial(const FName StaticItemId) const {
    return NULL;
}

int32 UPalMapObjectConvertItemModel::GetSlotIndexProductOut() const {
    return 0;
}

TArray<int32> UPalMapObjectConvertItemModel::GetSlotIndexesMaterialInput() const {
    return TArray<int32>();
}

int32 UPalMapObjectConvertItemModel::GetRemainCreateNum() const {
    return 0;
}

TArray<FName> UPalMapObjectConvertItemModel::GetRecipes() {
    return TArray<FName>();
}

UPalItemSlot* UPalMapObjectConvertItemModel::GetProductSlot() const {
    return NULL;
}

FName UPalMapObjectConvertItemModel::GetCurrentRecipeId() const {
    return NAME_None;
}

FPalItemRecipe UPalMapObjectConvertItemModel::GetCurrentRecipe() const {
    return FPalItemRecipe{};
}

void UPalMapObjectConvertItemModel::ChangeRecipe_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectConvertItemModel::Cancel_ServerInternal(const int32 RequestPlayerId) {
}

float UPalMapObjectConvertItemModel::CalcRequiredAmount(const float BaseRequiredAmount) const {
    return 0.0f;
}

void UPalMapObjectConvertItemModel::AddConvertItemResultLog(const FPalNetArchive& Archive) {
}

void UPalMapObjectConvertItemModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectConvertItemModel, CurrentRecipeId);
    DOREPLIFETIME(UPalMapObjectConvertItemModel, RequestedProductNum);
    DOREPLIFETIME(UPalMapObjectConvertItemModel, RemainProductNum);
    DOREPLIFETIME(UPalMapObjectConvertItemModel, bIsWorkable);
    DOREPLIFETIME(UPalMapObjectConvertItemModel, TargetTypesA);
    DOREPLIFETIME(UPalMapObjectConvertItemModel, TargetTypesB);
    DOREPLIFETIME(UPalMapObjectConvertItemModel, TargetRankMax);
    DOREPLIFETIME(UPalMapObjectConvertItemModel, MaterialTypesA);
    DOREPLIFETIME(UPalMapObjectConvertItemModel, MaterialTypesB);
    DOREPLIFETIME(UPalMapObjectConvertItemModel, bCanTransportOutProduct);
}


