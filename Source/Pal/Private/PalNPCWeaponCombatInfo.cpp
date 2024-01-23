#include "PalNPCWeaponCombatInfo.h"

FPalNPCWeaponCombatInfo::FPalNPCWeaponCombatInfo() {
    this->CombatAIActionClass = NULL;
    this->NPCWeaponRange_Near_cm = 0;
    this->NPCWeaponRange_Far_cm = 0;
    this->ShootInterval = 0.00f;
    this->MaxShootCount = 0;
    this->ReloadTime = 0.00f;
    this->RandomMoveTime_Min = 0.00f;
    this->AimOffset_Height = 0.00f;
    this->UseSideDashMovement = false;
    this->UseReloadMotion = false;
    this->MeleeAttackWithGun = false;
    this->AimRotateSpeed = 0.00f;
    this->FireStateClass = NULL;
}

