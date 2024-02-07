#include "PalLocationPoint_DroppedCharacter.h"
#include "Net/UnrealNetwork.h"

UPalLocationPoint_DroppedCharacter::UPalLocationPoint_DroppedCharacter() {
}

FGuid UPalLocationPoint_DroppedCharacter::GetOwnerPlayerUId() const {
    return FGuid{};
}

UPalMapObjectPickableCharacterModelBase* UPalLocationPoint_DroppedCharacter::GetMapObjectConcreteModel() const {
    return NULL;
}

void UPalLocationPoint_DroppedCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalLocationPoint_DroppedCharacter, MapObjectConcreteModelId);
    DOREPLIFETIME(UPalLocationPoint_DroppedCharacter, OwnerPlayerUId);
}


