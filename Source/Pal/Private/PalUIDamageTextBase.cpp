#include "PalUIDamageTextBase.h"


void UPalUIDamageTextBase::StartDisplay(float inDisplayTime) {
}

void UPalUIDamageTextBase::SetTargetWorldLocation(const FVector& NewLocation) {
}



void UPalUIDamageTextBase::ResetTimer() {
}

void UPalUIDamageTextBase::RequestClose() {
}


UPalUIDamageTextBase::UPalUIDamageTextBase() {
    this->DisplayTime = 1.00f;
    this->displayTimer = 0.00f;
    this->nowSeq = EPalDamageTextSeq::WaitStart;
}

