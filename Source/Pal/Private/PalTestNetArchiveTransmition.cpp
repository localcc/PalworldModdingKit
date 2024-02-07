#include "PalTestNetArchiveTransmition.h"

APalTestNetArchiveTransmition::APalTestNetArchiveTransmition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
}

void APalTestNetArchiveTransmition::SendTest() {
}

void APalTestNetArchiveTransmition::OnRecieveTest(const FPalNetArchive& Ar) {
}


