#include "PalMapObjectHatchingEggModelBase.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectHatchingEggModelBase::UPalMapObjectHatchingEggModelBase() {
    this->MenuUIWidgetClass = NULL;
    this->bWorkable = false;
    this->DefaultConsumeEnergySpeed = 0.00f;
    this->DefaultAutoWorkAmountBySec = 0.00f;
}

void UPalMapObjectHatchingEggModelBase::UpdateWorkAmountBySec(const float NewWorkAmountBySec) {
}

void UPalMapObjectHatchingEggModelBase::RequestObtainSingleHatchedCharacter(int32 SlotIndex) {
}

void UPalMapObjectHatchingEggModelBase::RequestObtainAllHatchedCharacter() {
}

void UPalMapObjectHatchingEggModelBase::OnUpdateEnergyModuleState(UPalMapObjectEnergyModule* EnergyModule) {
}

void UPalMapObjectHatchingEggModelBase::OnUpdateContainerContentInServer(UPalItemContainer* Container) {
}

void UPalMapObjectHatchingEggModelBase::OnRepEggInfoArray() {
}

void UPalMapObjectHatchingEggModelBase::OnFinishWorkInServer(UPalWorkBase* Work) {
}

void UPalMapObjectHatchingEggModelBase::OnChangeBaseCampPassive(UPalBaseCampModulePassiveEffect* PassiveEffectModule) {
}

void UPalMapObjectHatchingEggModelBase::OnAddNewWorker(UPalIndividualCharacterHandle* AddCharacterHandle) {
}

void UPalMapObjectHatchingEggModelBase::ObtainHatchedCharacter_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectHatchingEggModelBase::NotifyHatchFailed_NoEmptySlot_ClientInternal() {
}

void UPalMapObjectHatchingEggModelBase::NotifyHatchComplete_ClientInternal() {
}

bool UPalMapObjectHatchingEggModelBase::IsWorkable() const {
    return false;
}

UPalWorkProgress* UPalMapObjectHatchingEggModelBase::GetWorkProgress(const int32 SlotIndex) {
    return NULL;
}

bool UPalMapObjectHatchingEggModelBase::GetPalEggRankInfo(const int32 SlotIndex, FPalEggRankInfo& OutPalEggRankInfo) {
    return false;
}

int32 UPalMapObjectHatchingEggModelBase::GetItemSlotNum() const {
    return 0;
}

void UPalMapObjectHatchingEggModelBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectHatchingEggModelBase, RepInfoArray);
    DOREPLIFETIME(UPalMapObjectHatchingEggModelBase, bWorkable);
}


