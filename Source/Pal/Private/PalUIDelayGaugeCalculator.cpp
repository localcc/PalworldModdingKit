#include "PalUIDelayGaugeCalculator.h"

UPalUIDelayGaugeCalculator::UPalUIDelayGaugeCalculator() {
    this->mainBar = NULL;
    this->subBar = NULL;
    this->delayGaugeTimer = 0.00f;
    this->delayGaugeStartTime = 0.00f;
    this->delayGaugeProgressPerSecond = 0.00f;
}

void UPalUIDelayGaugeCalculator::Update(float DeltaTime) {
}

void UPalUIDelayGaugeCalculator::Setup(UProgressBar* inMainBar, UProgressBar* inSubBar) {
}

void UPalUIDelayGaugeCalculator::SetPercentForce(float Percent) {
}

void UPalUIDelayGaugeCalculator::SetPercent(float Percent) {
}


