#include "WeaponAnimationInfo.h"

FWeaponAnimationInfo::FWeaponAnimationInfo() {
    this->NormalMoveBlendSpace = NULL;
    this->CrouchMoveBlendSpace = NULL;
    this->AimingMoveBlendSpace = NULL;
    this->HipShootingMoveBlendSpace = NULL;
    this->CrouchAimingMoveBlendSpace = NULL;
    this->JumpPreliminary = NULL;
    this->JumpStart = NULL;
    this->JumpLoopUp = NULL;
    this->JumpLoopDown = NULL;
    this->JumpEnd = NULL;
    this->AirJumpUp = NULL;
    this->Sliding = NULL;
    this->SlidingEnd = NULL;
    this->Sprint = NULL;
    this->ReloadMontage = NULL;
    this->WeaponChangeMontage = NULL;
}

