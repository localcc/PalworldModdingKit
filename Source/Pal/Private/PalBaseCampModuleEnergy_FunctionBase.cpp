#include "PalBaseCampModuleEnergy_FunctionBase.h"
#include "Net/UnrealNetwork.h"

UPalBaseCampModuleEnergy_FunctionBase::UPalBaseCampModuleEnergy_FunctionBase() {
    this->CurrentState = EPalBaseCampModuleEnergyState::Waiting;
    this->ProvideWaitRemainTime = 0.00f;
}

void UPalBaseCampModuleEnergy_FunctionBase::InvokeOnUpdateEnergyAmount(UPalMapObjectGenerateEnergyModel* Model) {
}

void UPalBaseCampModuleEnergy_FunctionBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBaseCampModuleEnergy_FunctionBase, EnergyGeneratorConcreteModelIds);
    DOREPLIFETIME(UPalBaseCampModuleEnergy_FunctionBase, CurrentState);
}


