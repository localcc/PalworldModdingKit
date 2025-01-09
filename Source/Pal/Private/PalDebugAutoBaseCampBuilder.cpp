#include "PalDebugAutoBaseCampBuilder.h"

APalDebugAutoBaseCampBuilder::APalDebugAutoBaseCampBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRandomPassiveSkill = false;
}

void APalDebugAutoBaseCampBuilder::OnCreatedIndividual_ServerInternal(FPalInstanceID ID) {
}


