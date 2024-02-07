#include "PalUIGuildMenu.h"

UPalUIGuildMenu::UPalUIGuildMenu() {
}

void UPalUIGuildMenu::RequestExitGuild() {
}

void UPalUIGuildMenu::RequestChangeGuildName(const FString& NewGuildName) {
}

void UPalUIGuildMenu::RequestChangeAdmin(const FGuid& TargetPlayerUId) {
}

void UPalUIGuildMenu::RequestBanPlayer(const FGuid& TargetPlayerUId) {
}

void UPalUIGuildMenu::OnUpdatedMemberInfo_Binded(const UPalGroupGuildBase* Guild, const FGuid& PlayerUId, const FPalGuildPlayerInfo& PlayerInfo) {
}


void UPalUIGuildMenu::OnUpdatedGuildName_Binded(const FString& NewGuildName) {
}



bool UPalUIGuildMenu::IsExistPlayer(const FGuid& PlayerUId) {
    return false;
}

bool UPalUIGuildMenu::IsAdminLocalPlayer() {
    return false;
}

UPalGroupGuildBase* UPalUIGuildMenu::GetMyGuild() const {
    return NULL;
}

void UPalUIGuildMenu::GetGuildName(FString& OutGuildName) const {
}

void UPalUIGuildMenu::GetGuildMemberInfo(TMap<FGuid, FPalUIGuildMemberDisplayInfo>& OutDisplayInfoMap) const {
}

void UPalUIGuildMenu::GetAdminPlayerUId(FGuid& OutAdminPlayerUId) {
}

bool UPalUIGuildMenu::CanExitGuild() {
    return false;
}


