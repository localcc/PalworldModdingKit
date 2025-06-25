#include "PalFlowNode_GetCharacter.h"

UPalFlowNode_GetCharacter::UPalFlowNode_GetCharacter() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->Level = 0;
    this->CachedWorldContextObject = NULL;
}

void UPalFlowNode_GetCharacter::OnCreatedIndividual(FPalInstanceID IndividualId) {
}


