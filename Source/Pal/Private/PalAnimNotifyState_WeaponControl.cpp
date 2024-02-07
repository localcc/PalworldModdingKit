#include "PalAnimNotifyState_WeaponControl.h"

UPalAnimNotifyState_WeaponControl::UPalAnimNotifyState_WeaponControl() {
    this->bIsDisableShoot = false;
    this->bIsDisableAim = false;
    this->bIsDisableAttachLeftHand = false;
    this->bIsDisableReload = false;
    this->bIsDisableChangeWeapon = false;
    this->Priority = EPalShooterFlagContainerPriority::Weapon;
}


