#include "PalMapObjectHatchingEggModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectHatchingEggModel::UPalMapObjectHatchingEggModel() {
    this->bWorkable = false;
    this->MenuUIWidgetClass = NULL;
    this->CurrentPalEggTemperatureDiff = 0;
    this->HatchedPalEggData = NULL;
}

void UPalMapObjectHatchingEggModel::UpdateWorkAmountBySec(const float NewWorkAmountBySec) {
}

void UPalMapObjectHatchingEggModel::SetTemperatureDiff(int32 TemperatureDiff) {
}

void UPalMapObjectHatchingEggModel::OnUpdateEnergyModuleState(UPalMapObjectEnergyModule* EnergyModule) {
}

void UPalMapObjectHatchingEggModel::OnUpdateContainerContentInServer(UPalItemContainer* Container) {
}

void UPalMapObjectHatchingEggModel::OnRep_HatchTemperatureDiff() {
}

void UPalMapObjectHatchingEggModel::OnRep_HatchedCharacterSaveParameter() {
}

void UPalMapObjectHatchingEggModel::OnFinishWorkInServer(UPalWorkBase* Work) {
}

void UPalMapObjectHatchingEggModel::OnChangeBaseCampPassive(const FGuid& BaseCampId) {
}

void UPalMapObjectHatchingEggModel::OnAddNewWorker(UPalIndividualCharacterHandle* AddCharacterHandle) {
}

void UPalMapObjectHatchingEggModel::ObtainHatchedCharacter_ServerInternal(const int32 RequestPlayerId) {
}

bool UPalMapObjectHatchingEggModel::IsWorkable() const {
    return false;
}

int32 UPalMapObjectHatchingEggModel::GetTemperatureDiff() {
    return 0;
}

bool UPalMapObjectHatchingEggModel::GetPalEggRankInfo(FPalEggRankInfo& OutPalEggRankInfo) {
    return false;
}

void UPalMapObjectHatchingEggModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectHatchingEggModel, HatchedCharacterSaveParameter);
    DOREPLIFETIME(UPalMapObjectHatchingEggModel, bWorkable);
    DOREPLIFETIME(UPalMapObjectHatchingEggModel, MenuUIWidgetClass);
    DOREPLIFETIME(UPalMapObjectHatchingEggModel, CurrentPalEggTemperatureDiff);
    DOREPLIFETIME(UPalMapObjectHatchingEggModel, HatchedPalEggData);
}


