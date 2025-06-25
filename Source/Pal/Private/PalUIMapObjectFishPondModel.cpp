#include "PalUIMapObjectFishPondModel.h"

UPalUIMapObjectFishPondModel::UPalUIMapObjectFishPondModel() {
    this->ProductNum = 1;
}

void UPalUIMapObjectFishPondModel::SetProductNum(const int32 Num) {
}

void UPalUIMapObjectFishPondModel::SelectLotteryName(const FName LotteryName) {
}

void UPalUIMapObjectFishPondModel::RequestStartProduce() {
}

FText UPalUIMapObjectFishPondModel::GetTitleText() const {
    return FText::GetEmpty();
}

void UPalUIMapObjectFishPondModel::GetTargetLotteryNames(TArray<FName>& OutTargetLotteryNames) const {
}

void UPalUIMapObjectFishPondModel::GetTargetInfos(TArray<FPalUIMapObjectFishPondTargetInfo>& OutInfos) const {
}

FName UPalUIMapObjectFishPondModel::GetSelectedLotteryName() const {
    return NAME_None;
}

void UPalUIMapObjectFishPondModel::GetRequiredMaterialInfos(TArray<FPalStaticItemIdAndNum>& RequiredMaterialInfos) {
}

int32 UPalUIMapObjectFishPondModel::GetProductNum() const {
    return 0;
}

void UPalUIMapObjectFishPondModel::GetCaptureTargetCharacterInfos(TArray<FPalUIMapObjectFishPondCharacterInfo>& OutArray) const {
}

bool UPalUIMapObjectFishPondModel::CanRequestStartProduce() const {
    return false;
}

int32 UPalUIMapObjectFishPondModel::CalcLocalPlayerMaxProductableNum() {
    return 0;
}


