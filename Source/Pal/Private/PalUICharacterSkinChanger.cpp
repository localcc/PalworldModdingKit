#include "PalUICharacterSkinChanger.h"

UPalUICharacterSkinChanger::UPalUICharacterSkinChanger() {
}

void UPalUICharacterSkinChanger::RequestRemoveSkin(UPalIndividualCharacterSlot* TargetSlot) {
}

void UPalUICharacterSkinChanger::RequestGetSkinInfo() {
}

void UPalUICharacterSkinChanger::RequestChangeSkin(const FName& SkinName, UPalIndividualCharacterSlot* TargetSlot) {
}

TMap<FName, FPalUICharacterSkinDisplayInfo> UPalUICharacterSkinChanger::GetCachedSkinInfo() {
    return TMap<FName, FPalUICharacterSkinDisplayInfo>();
}


