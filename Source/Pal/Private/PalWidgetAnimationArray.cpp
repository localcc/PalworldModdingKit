#include "PalWidgetAnimationArray.h"

UPalWidgetAnimationArray::UPalWidgetAnimationArray() {
    this->TargetWidget = NULL;
    this->multiplyTimeScale = 1.00f;
}

void UPalWidgetAnimationArray::StopAnimation(const FName& animationName) {
}

void UPalWidgetAnimationArray::StopAllAnimation() {
}

void UPalWidgetAnimationArray::SetTimeScale(float TimeScale) {
}

void UPalWidgetAnimationArray::PlayOneShotReverse(const FName& animationName) {
}

void UPalWidgetAnimationArray::PlayOneShotPingPong(const FName& animationName) {
}

void UPalWidgetAnimationArray::PlayOneshot(const FName& animationName) {
}

void UPalWidgetAnimationArray::PlayLoopReverse(const FName& animationName) {
}

void UPalWidgetAnimationArray::PlayLoopPingPong(const FName& animationName) {
}

void UPalWidgetAnimationArray::PlayLoop(const FName& animationName) {
}

void UPalWidgetAnimationArray::PauseAnimation(const FName& animationName) {
}

void UPalWidgetAnimationArray::Initialize(UUserWidget* inTargetWidget) {
}

void UPalWidgetAnimationArray::GetAnimationNameArray(TArray<FName>& OutArray) {
}


