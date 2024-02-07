#include "PalLocationPoint_Character.h"
#include "Net/UnrealNetwork.h"

UPalLocationPoint_Character::UPalLocationPoint_Character() {
    this->CharacterLocationType = EPalCharacterLocationType::None;
}

void UPalLocationPoint_Character::OnDestroyedTarget(AActor* Target) {
}

void UPalLocationPoint_Character::OnDeadTarget(FPalDeadInfo Info) {
}

EPalCharacterLocationType UPalLocationPoint_Character::GetCharacterLocationType() const {
    return EPalCharacterLocationType::None;
}

FName UPalLocationPoint_Character::GetCharacterID() const {
    return NAME_None;
}

void UPalLocationPoint_Character::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalLocationPoint_Character, IndividualId);
    DOREPLIFETIME(UPalLocationPoint_Character, CharacterLocationType);
    DOREPLIFETIME(UPalLocationPoint_Character, TargetBaseCampId);
    DOREPLIFETIME(UPalLocationPoint_Character, CharacterID);
}


