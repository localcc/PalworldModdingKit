#include "PalCoopClimbPlayer.h"

UPalCoopClimbPlayer::UPalCoopClimbPlayer() {
    this->Player = NULL;
    this->PlayerAnime = NULL;
    this->CurrentIndex = 0;
    this->Progress = 0.00f;
    this->Complete = false;
}

FTransform UPalCoopClimbPlayer::UpdateTransform(FTransform Climber, float ProgressSpeed, float LeapPosSpeed, float LeapRotateSpeed, float DeltaTime) {
    return FTransform{};
}

void UPalCoopClimbPlayer::InitializeNode(EHumanBone EntryBone, APalCharacter* PlayerCharacter, FTransform Climber) {
}


