#include "PalPlayerSkinData.h"
#include "Net/UnrealNetwork.h"

UPalPlayerSkinData::UPalPlayerSkinData() {
}

void UPalPlayerSkinData::SendNewInventoryInfo_Implementation(FPalSkinInventoryInfo NewInfo) {
}

void UPalPlayerSkinData::RequestRespawnPal_Implementation(UPalIndividualCharacterParameter* IndividualCharacterParameter) {
}

void UPalPlayerSkinData::RemoveSkin_Implementation(EPalSkinType SkinType, FName InTarget) {
}

void UPalPlayerSkinData::RemovePalSkin_Implementation(UPalIndividualCharacterParameter* IndividualCharacterParameter) {
}

void UPalPlayerSkinData::RefreshValidSkin_Implementation(FGuid Guid) {
}

void UPalPlayerSkinData::OnRep_SkinInventoryInfo() {
}

void UPalPlayerSkinData::OnRep_PlayerUId() {
}

void UPalPlayerSkinData::LoginComplete_Server_Implementation() {
}

bool UPalPlayerSkinData::IsValidSkin(FName SkinName) const {
    return false;
}

TArray<UPalSkinDataBase*> UPalPlayerSkinData::GetHaveSkinListFromType(EPalSkinType InType) {
    return TArray<UPalSkinDataBase*>();
}

TArray<UPalSkinDataBase*> UPalPlayerSkinData::GetHaveSkinList() {
    return TArray<UPalSkinDataBase*>();
}

void UPalPlayerSkinData::FinishRefreshValidSkin_Implementation(FGuid Guid) {
}

void UPalPlayerSkinData::DeleteSkin_Implementation(FName SkinName) {
}

void UPalPlayerSkinData::ApplySkin(FName SkinName, FOnApplySkin InEvent) {
}

void UPalPlayerSkinData::ApplyPalSkin_Implementation(FName SkinName, UPalIndividualCharacterParameter* IndividualCharacterParameter) {
}

void UPalPlayerSkinData::AddSkin_Implementation(FName SkinName) {
}

void UPalPlayerSkinData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalPlayerSkinData, SkinInventoryInfo);
    DOREPLIFETIME(UPalPlayerSkinData, PlayerUId);
}


