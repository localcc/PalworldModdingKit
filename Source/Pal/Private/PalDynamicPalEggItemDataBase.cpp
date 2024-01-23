#include "PalDynamicPalEggItemDataBase.h"
#include "Net/UnrealNetwork.h"

void UPalDynamicPalEggItemDataBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalDynamicPalEggItemDataBase, CharacterID);
}

UPalDynamicPalEggItemDataBase::UPalDynamicPalEggItemDataBase() {
}

