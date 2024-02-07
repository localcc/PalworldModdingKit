#include "PalMapObjectHatchingEggModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectHatchingEggModel::UPalMapObjectHatchingEggModel() {
    this->bWorkable = false;
    this->MenuUIWidgetClass = NULL;
    this->CurrentPalEggTemperatureDiff = 0;
}

void UPalMapObjectHatchingEggModel::UpdateWorkAmountBySec(const float NewWorkAmountBySec) {
}

void UPalMapObjectHatchingEggModel::SetTemperatureDiff(int32 TemperatureDiff) {
}

void UPalMapObjectHatchingEggModel::OnUpdateContainerContentInServer(UPalItemContainer* Container) {
}

void UPalMapObjectHatchingEggModel::OnRep_HatchTemperatureDiff() {
}

void UPalMapObjectHatchingEggModel::OnRep_HatchedCharacterSaveParameter() {
}

void UPalMapObjectHatchingEggModel::OnFinishWorkInServer(UPalWorkBase* Work) {
}

void UPalMapObjectHatchingEggModel::ObtainHatchedCharacter_ServerInternal(const int32 RequestPlayerId) {
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
}


