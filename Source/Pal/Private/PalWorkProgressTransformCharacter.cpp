#include "PalWorkProgressTransformCharacter.h"
#include "Net/UnrealNetwork.h"

void UPalWorkProgressTransformCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalWorkProgressTransformCharacter, IndividualId);
}

UPalWorkProgressTransformCharacter::UPalWorkProgressTransformCharacter() {
}

