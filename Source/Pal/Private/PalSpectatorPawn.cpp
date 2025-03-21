#include "PalSpectatorPawn.h"

APalSpectatorPawn::APalSpectatorPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
    this->DefaultMaxSpeed = 1200.00f;
    this->InitSpeedRateIndex = 0;
    this->MaxDistanceFromLimitedLocation = 1000.00f;
    this->CameraBoomArmLengthWhenFollowPlayer = 0.00f;
    this->CameraBoomArmLengthWhenFreely = 0.00f;
}


