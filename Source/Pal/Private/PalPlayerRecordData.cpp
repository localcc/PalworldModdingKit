#include "PalPlayerRecordData.h"
#include "Net/UnrealNetwork.h"

UPalPlayerRecordData::UPalPlayerRecordData() {
    this->BossDefeatCount = 0;
    this->TribeCaptureCount = 0;
    this->PalCaptureCountBonusCount_Tier1 = 0;
    this->PalCaptureCountBonusCount_Tier2 = 0;
    this->PalCaptureCountBonusCount_Tier3 = 0;
    this->RelicPossessNum = 0;
    this->RelicPossessNumMirror = 0;
}

void UPalPlayerRecordData::OnRep_RelicNum() {
}

void UPalPlayerRecordData::OnCompleteBuild_ServerInternal(UPalMapObjectModel* MapObjectModel) {
}

void UPalPlayerRecordData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalPlayerRecordData, OwnerPlayerUId);
    DOREPLIFETIME(UPalPlayerRecordData, TowerBossDefeatFlag);
    DOREPLIFETIME(UPalPlayerRecordData, NormalBossDefeatFlag);
    DOREPLIFETIME(UPalPlayerRecordData, BossDefeatCount);
    DOREPLIFETIME(UPalPlayerRecordData, TribeCaptureCount);
    DOREPLIFETIME(UPalPlayerRecordData, PalCaptureCount);
    DOREPLIFETIME(UPalPlayerRecordData, PaldeckUnlockFlag);
    DOREPLIFETIME(UPalPlayerRecordData, PalCaptureCountBonusCount_Tier1);
    DOREPLIFETIME(UPalPlayerRecordData, PalCaptureCountBonusCount_Tier2);
    DOREPLIFETIME(UPalPlayerRecordData, PalCaptureCountBonusCount_Tier3);
    DOREPLIFETIME(UPalPlayerRecordData, RelicObtainForInstanceFlag);
    DOREPLIFETIME(UPalPlayerRecordData, RelicPossessNum);
    DOREPLIFETIME(UPalPlayerRecordData, NoteObtainForInstanceFlag);
    DOREPLIFETIME(UPalPlayerRecordData, FastTravelPointUnlockFlag);
    DOREPLIFETIME(UPalPlayerRecordData, EnteringStageInstanceId);
    DOREPLIFETIME(UPalPlayerRecordData, BuildingObjectMapObjectInstanceIds);
    DOREPLIFETIME(UPalPlayerRecordData, Debug_EnteringStageDataLayerName);
    DOREPLIFETIME(UPalPlayerRecordData, Debug_LastEnteredStageDataLayerName);
}


