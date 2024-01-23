#include "PalBaseCampModulePassiveEffect.h"
#include "Net/UnrealNetwork.h"

void UPalBaseCampModulePassiveEffect::OnNotAvailableMapObjectInServer(UPalMapObjectConcreteModelBase* Model) {
}

void UPalBaseCampModulePassiveEffect::OnAvailableMapObjectInServer(UPalMapObjectConcreteModelBase* Model) {
}

void UPalBaseCampModulePassiveEffect::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBaseCampModulePassiveEffect, RepInfoArray);
}

UPalBaseCampModulePassiveEffect::UPalBaseCampModulePassiveEffect() {
}

