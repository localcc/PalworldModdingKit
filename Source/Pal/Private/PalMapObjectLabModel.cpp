#include "PalMapObjectLabModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectLabModel::UPalMapObjectLabModel() {
    this->UIMenuClass = NULL;
}

void UPalMapObjectLabModel::RequestStartResearch_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectLabModel::RequestCancelResearch_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectLabModel::OnUpdateCurrentResearchProgress_ServerInternal(UPalGuildLab* OwnerGuildLab) {
}

void UPalMapObjectLabModel::OnUpdateCurrentResearch_ServerInternal(UPalGuildLab* OwnerGuildLab) {
}

void UPalMapObjectLabModel::OnRep_CurrentResearchId() {
}

void UPalMapObjectLabModel::OnFinishResearchWork_ServerInternal(UPalWorkBase* Work) {
}

void UPalMapObjectLabModel::OnAvailableAfterSpawned_ServerInternal(UPalMapObjectConcreteModelBase* Model) {
}

void UPalMapObjectLabModel::GetCurrentResearchWorkAmountInfo(float& Current, float& Required, bool& bCompleted) const {
}

void UPalMapObjectLabModel::GetCurrentResearch(FPalLabResearchMasterData& OutData, int32& RequireRank) const {
}

void UPalMapObjectLabModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectLabModel, CurrentResearchId);
}


