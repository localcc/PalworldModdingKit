#include "PalQuestData.h"

UPalQuestData::UPalQuestData() {
    this->NowQuestBlock = NULL;
}

void UPalQuestData::ProgressInternal() {
}

void UPalQuestData::OnUpdatedQuestBlock(UPalQuestBlock* UpdatedBlock) {
}

void UPalQuestData::OnCompletedQuestBlock(UPalQuestBlock* CompletedBlock) {
}

void UPalQuestData::Initialize(int32 BlockIndex, const FName& InQuestName) {
}

void UPalQuestData::GetQuestDataName(FName& outName) {
}

void UPalQuestData::GetQuestBlock(UPalQuestBlock*& OutBlock) {
}

int32 UPalQuestData::GetNowQuestBlockIndex() const {
    return 0;
}

void UPalQuestData::GetCustomRewardGiverClass(TSoftClassPtr<UPalQuestRewardGiver>& OutClass) {
}

void UPalQuestData::GetCommonRewardData(FPalCommonQuestRewardData& OutData) {
}

bool UPalQuestData::CompleteNowBlock() {
    return false;
}


