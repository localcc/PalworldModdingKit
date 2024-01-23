#include "PalRandomIncidentLotteryBase.h"

bool UPalRandomIncidentLotteryBase::LotteryIncident_Implementation(FPalRandomIncidentSpawnIncidentParameter& OutResult) {
    return false;
}

float UPalRandomIncidentLotteryBase::GetLotteryRate_Implementation() const {
    return 0.0f;
}

int32 UPalRandomIncidentLotteryBase::GetLotteryParameters_Implementation(TArray<FPalRandomIncidentSpawnIncidentParameter>& OutParam) const {
    return 0;
}

UPalRandomIncidentLotteryBase::UPalRandomIncidentLotteryBase() {
    this->LotteryRate = 0.00f;
}

