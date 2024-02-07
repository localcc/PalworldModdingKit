#include "PalBaseCampModulePassiveEffect.h"
#include "Net/UnrealNetwork.h"

UPalBaseCampModulePassiveEffect::UPalBaseCampModulePassiveEffect() {
}

void UPalBaseCampModulePassiveEffect::OnNotAvailableMapObjectInServer(UPalMapObjectConcreteModelBase* Model) {
}

void UPalBaseCampModulePassiveEffect::OnAvailableMapObjectInServer(UPalMapObjectConcreteModelBase* Model) {
}

void UPalBaseCampModulePassiveEffect::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBaseCampModulePassiveEffect, RepInfoArray);
}


