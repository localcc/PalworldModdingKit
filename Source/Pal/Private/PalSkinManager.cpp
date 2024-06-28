#include "PalSkinManager.h"

UPalSkinManager::UPalSkinManager() {
    this->SkinDataAsset = NULL;
}

bool UPalSkinManager::GetPalCharacterClass(FName SkinName, bool bIsBoss, TSoftClassPtr<APalCharacter>& OutCharacterClass) {
    return false;
}

TArray<UPalSkinDataBase*> UPalSkinManager::GetHaveSkinListFromType(FGuid InPlayerUId, EPalSkinType InType) {
    return TArray<UPalSkinDataBase*>();
}

TArray<UPalSkinDataBase*> UPalSkinManager::GetHaveSkinList(FGuid InPlayerUId) {
    return TArray<UPalSkinDataBase*>();
}

TArray<UPalSkinDataBase*> UPalSkinManager::GetAllSkinListFromType(EPalSkinType InType) {
    return TArray<UPalSkinDataBase*>();
}

TArray<UPalSkinDataBase*> UPalSkinManager::GetAllSkinList() {
    return TArray<UPalSkinDataBase*>();
}

void UPalSkinManager::ApplySkin(FGuid InPlayerUId, FName SkinName, FOnApplySkin InEvent) {
}

void UPalSkinManager::AddSkin(FGuid InPlayerUId, FName SkinName) {
}


