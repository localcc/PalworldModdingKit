#include "PalPlayerRecordData.h"
#include "Net/UnrealNetwork.h"

UPalPlayerRecordData::UPalPlayerRecordData() {
    this->BossDefeatCount = 0;
    this->TribeCaptureCount = 0;
    this->PalCaptureBonusExpTableIndex = 0;
    this->NpcBonusExpTableIndex = 0;
    this->AreaBonusExpTableIndex = 0;
    this->RelicPossessNum = 0;
    this->RelicPossessNumMirror = 0;
    this->NormalDungeonClearCount = 0;
    this->FixedDungeonClearCount = 0;
    this->OilrigClearCount = 0;
    this->PalCaptureCountBonusCount_Tier1_Old = 0;
    this->PalCaptureCountBonusCount_Tier2_Old = 0;
    this->PalCaptureCountBonusCount_Tier3_Old = 0;
}

void UPalPlayerRecordData::OnRep_RelicNum() {
}

void UPalPlayerRecordData::OnCompleteBuild_ServerInternal(UPalMapObjectModel* MapObjectModel) {
}

int32 UPalPlayerRecordData::GetFoundedAreaNum() const {
    return 0;
}

int32 UPalPlayerRecordData::GetBonusExpTableIndex() const {
    return 0;
}

void UPalPlayerRecordData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalPlayerRecordData, OwnerPlayerUId);
    DOREPLIFETIME(UPalPlayerRecordData, TowerBossDefeatFlag);
    DOREPLIFETIME(UPalPlayerRecordData, TowerBossDefeatCount);
    DOREPLIFETIME(UPalPlayerRecordData, NormalBossDefeatFlag);
    DOREPLIFETIME(UPalPlayerRecordData, RaidBossDefeatCount);
    DOREPLIFETIME(UPalPlayerRecordData, BossDefeatCount);
    DOREPLIFETIME(UPalPlayerRecordData, TribeCaptureCount);
    DOREPLIFETIME(UPalPlayerRecordData, PalCaptureCount);
    DOREPLIFETIME(UPalPlayerRecordData, PalCaptureBonusCount);
    DOREPLIFETIME(UPalPlayerRecordData, PalButcherCount);
    DOREPLIFETIME(UPalPlayerRecordData, PaldeckUnlockFlag);
    DOREPLIFETIME(UPalPlayerRecordData, PalCaptureBonusExpTableIndex);
    DOREPLIFETIME(UPalPlayerRecordData, NpcBonusExpTableIndex);
    DOREPLIFETIME(UPalPlayerRecordData, AreaBonusExpTableIndex);
    DOREPLIFETIME(UPalPlayerRecordData, FindAreaFlag);
    DOREPLIFETIME(UPalPlayerRecordData, RelicObtainForInstanceFlag);
    DOREPLIFETIME(UPalPlayerRecordData, RelicPossessNum);
    DOREPLIFETIME(UPalPlayerRecordData, NoteObtainForInstanceFlag);
    DOREPLIFETIME(UPalPlayerRecordData, FastTravelPointUnlockFlag);
    DOREPLIFETIME(UPalPlayerRecordData, EnteringStageInstanceId);
    DOREPLIFETIME(UPalPlayerRecordData, BuildingObjectMapObjectInstanceIds);
    DOREPLIFETIME(UPalPlayerRecordData, CraftItemCount);
    DOREPLIFETIME(UPalPlayerRecordData, NormalDungeonClearCount);
    DOREPLIFETIME(UPalPlayerRecordData, FixedDungeonClearCount);
    DOREPLIFETIME(UPalPlayerRecordData, OilrigClearCount);
    DOREPLIFETIME(UPalPlayerRecordData, PalRankupCount);
    DOREPLIFETIME(UPalPlayerRecordData, CompletedEmoteNPCIDArray);
    DOREPLIFETIME(UPalPlayerRecordData, Debug_EnteringStageDataLayerName);
    DOREPLIFETIME(UPalPlayerRecordData, Debug_LastEnteredStageDataLayerName);
}


