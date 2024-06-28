#include "PalAIActionWorkerWait.h"

UPalAIActionWorkerWait::UPalAIActionWorkerWait() {
}

void UPalAIActionWorkerWait::TickForWalkAround(float DeltaTime) {
}


void UPalAIActionWorkerWait::OnTickForWait_Implementation(float DeltaTime) {
}

TEnumAsByte<EPathFollowingRequestResult::Type> UPalAIActionWorkerWait::MoveToLocationInBaseCamp(const FVector& ToLocation, float DeltaTime) {
    return EPathFollowingRequestResult::Failed;
}

TEnumAsByte<EPathFollowingRequestResult::Type> UPalAIActionWorkerWait::MoveToLocation(const FVector& ToLocation) {
    return EPathFollowingRequestResult::Failed;
}

bool UPalAIActionWorkerWait::CalcWalkAroundDestination(const float Radius, FVector& OutDestination) {
    return false;
}


