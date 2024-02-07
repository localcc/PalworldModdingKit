#include "PalWorkProgressTransformCharacter.h"
#include "Net/UnrealNetwork.h"

UPalWorkProgressTransformCharacter::UPalWorkProgressTransformCharacter() {
}

void UPalWorkProgressTransformCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalWorkProgressTransformCharacter, IndividualId);
}


