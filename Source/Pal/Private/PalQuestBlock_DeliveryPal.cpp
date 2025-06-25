#include "PalQuestBlock_DeliveryPal.h"
#include "Net/UnrealNetwork.h"

UPalQuestBlock_DeliveryPal::UPalQuestBlock_DeliveryPal() {
    this->requireNum = 0;
    this->DeliveredCount = 0;
}

void UPalQuestBlock_DeliveryPal::OnRep_DeliveredCount() {
}

bool UPalQuestBlock_DeliveryPal::IsValidDeliveryPal(const FPalCharacterSlotId& CheckSlotId) const {
    return false;
}

int32 UPalQuestBlock_DeliveryPal::GetRemainDeliveryNum() const {
    return 0;
}

void UPalQuestBlock_DeliveryPal::Delivery(const TArray<FPalCharacterSlotId>& DeliveryPalSlotIdArray) {
}

void UPalQuestBlock_DeliveryPal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalQuestBlock_DeliveryPal, DeliveredCount);
}


