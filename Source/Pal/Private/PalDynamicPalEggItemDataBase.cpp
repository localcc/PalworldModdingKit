#include "PalDynamicPalEggItemDataBase.h"
#include "Net/UnrealNetwork.h"

UPalDynamicPalEggItemDataBase::UPalDynamicPalEggItemDataBase() {
}

void UPalDynamicPalEggItemDataBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalDynamicPalEggItemDataBase, CharacterID);
}


