#include "PalArenaWorldRankingInfo.h"
#include "Net/UnrealNetwork.h"

APalArenaWorldRankingInfo::APalArenaWorldRankingInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->ArenaNPCDataTable = NULL;
}

void APalArenaWorldRankingInfo::UpdatePlayerName(UPalIndividualCharacterParameter* IndividualParameter, const FString& NewName) {
}

void APalArenaWorldRankingInfo::UpdatePlayerGuildName(const UPalGroupGuildBase* Guild, const FString& NewGuildName) {
}

void APalArenaWorldRankingInfo::UpdatePlayerGuild(const FGuid& PlayerUId, UPalGroupGuildBase* PrevGuild, UPalGroupGuildBase* AfterGuild) {
}

void APalArenaWorldRankingInfo::UpdateArenaRankPoint(UPalIndividualCharacterParameter* IndividualParameter, int32 NewArenaRankPoint) {
}

void APalArenaWorldRankingInfo::OnRep_FastTopRankRecords() {
}

void APalArenaWorldRankingInfo::OnReceivedPlayerNameWordFilteringResult(UWordFilterReceiveObject* ReceiveObject, const FString& ResponseBody, bool bResponseOK, int32 ResponseCode) {
}

void APalArenaWorldRankingInfo::OnReceivedGuildNameWordFilteringResult(UWordFilterReceiveObject* ReceiveObject, const FString& ResponseBody, bool bResponseOK, int32 ResponseCode) {
}

TArray<FPalArenaWorldRankingRecord> APalArenaWorldRankingInfo::GetTopWorldArenaRanking() {
    return TArray<FPalArenaWorldRankingRecord>();
}

FPalArenaWorldRankingRecord APalArenaWorldRankingInfo::GetRecordByPlayerUid_ServerInternal(const FGuid& PlayerUId) const {
    return FPalArenaWorldRankingRecord{};
}

void APalArenaWorldRankingInfo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalArenaWorldRankingInfo, FastTopRankRecords);
}


