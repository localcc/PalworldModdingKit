#include "PalGroupGuildBase.h"
#include "Net/UnrealNetwork.h"

EPalGroupOperationResult UPalGroupGuildBase::RequestDismantleBaseCamp(const FGuid& BaseCampId) {
    return EPalGroupOperationResult::Success;
}

void UPalGroupGuildBase::OnRep_Guildname() {
}

void UPalGroupGuildBase::OnRep_BaseCampLevel(int32 OldValue) {
}

void UPalGroupGuildBase::OnDeletePlayerAccount_ServerInternal(UPalPlayerAccount* DeleteAccount) {
}

FString UPalGroupGuildBase::GetGuildName() const {
    return TEXT("");
}

int32 UPalGroupGuildBase::GetBaseCampMaxNumInGuild() const {
    return 0;
}

int32 UPalGroupGuildBase::GetBaseCampLevel() const {
    return 0;
}

void UPalGroupGuildBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalGroupGuildBase, MapObjectInstanceIds_BaseCampPoint);
    DOREPLIFETIME(UPalGroupGuildBase, BaseCampLevel);
    DOREPLIFETIME(UPalGroupGuildBase, GuildName);
}

UPalGroupGuildBase::UPalGroupGuildBase() {
    this->PalStorage = NULL;
    this->BaseCampLevel = 1;
    this->bAllPlayerNotOnlineAndAlreadyReset = false;
}

