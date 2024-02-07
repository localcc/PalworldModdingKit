#include "PalAIActionWorkerWait.h"

UPalAIActionWorkerWait::UPalAIActionWorkerWait() {
}


void UPalAIActionWorkerWait::OnTickForWait_Implementation(float DeltaTime) {
}

TEnumAsByte<EPathFollowingRequestResult::Type> UPalAIActionWorkerWait::MoveToLocation(const FVector& ToLocation) {
    return EPathFollowingRequestResult::Failed;
}

bool UPalAIActionWorkerWait::CalcWalkAroundDestination(const float Radius, FVector& OutDestination) {
    return false;
}


