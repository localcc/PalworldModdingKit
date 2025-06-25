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

void APalArenaWorldRankingInfo::OnRep_Records() {
}

TArray<FPalArenaWorldRankingRecord> APalArenaWorldRankingInfo::GetWorldArenaRanking() {
    return TArray<FPalArenaWorldRankingRecord>();
}

int32 APalArenaWorldRankingInfo::GetPlayerRankNo(const FGuid& PlayerUId) const {
    return 0;
}

void APalArenaWorldRankingInfo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalArenaWorldRankingInfo, Records);
}


