#include "PalUIStatusModel.h"

UPalUIStatusModel::UPalUIStatusModel() {
}

void UPalUIStatusModel::OnClickedPalIcon(int32 Index) {
}

void UPalUIStatusModel::Initialize(const TArray<UPalIndividualCharacterHandle*>& Handles) {
}

uint8 UPalUIStatusModel::GetNowSelectedIndex() const {
    return 0;
}

int32 UPalUIStatusModel::GetDisplaySpeed(int32 Index) const {
    return 0;
}

int32 UPalUIStatusModel::GetDisplayShotAttack(int32 Index) const {
    return 0;
}

EPalStatusPhysicalHealthType UPalUIStatusModel::GetDisplayPhysicalHealthType(int32 Index) const {
    return EPalStatusPhysicalHealthType::Healthful;
}

bool UPalUIStatusModel::GetDisplayPassiveSkillList(int32 Index, TArray<FName>& OutArray) const {
    return false;
}

uint8 UPalUIStatusModel::GetDisplayPalNum() const {
    return 0;
}

UPalIndividualCharacterHandle* UPalUIStatusModel::GetDisplayPalHandle(uint8 Index) const {
    return NULL;
}

int32 UPalUIStatusModel::GetDisplayNowExp(int32 Index) const {
    return 0;
}

void UPalUIStatusModel::GetDisplayNickName(int32 Index, FString& outName) {
}

int32 UPalUIStatusModel::GetDisplayNextExp(int32 Index) const {
    return 0;
}

int32 UPalUIStatusModel::GetDisplayMeleeAttack(int32 Index) const {
    return 0;
}

float UPalUIStatusModel::GetDisplayMaxHunger(int32 Index) const {
    return 0.0f;
}

FFixedPoint64 UPalUIStatusModel::GetDisplayMaxHP(int32 Index) const {
    return FFixedPoint64{};
}

int32 UPalUIStatusModel::GetDisplayLevel(int32 Index) const {
    return 0;
}

float UPalUIStatusModel::GetDisplayHunger(int32 Index) const {
    return 0.0f;
}

FFixedPoint64 UPalUIStatusModel::GetDisplayHP(int32 Index) const {
    return FFixedPoint64{};
}

EPalElementType UPalUIStatusModel::GetDisplayElementType2(int32 Index) const {
    return EPalElementType::None;
}

EPalElementType UPalUIStatusModel::GetDisplayElementType1(int32 Index) const {
    return EPalElementType::None;
}

int32 UPalUIStatusModel::GetDisplayEatingHabits(int32 Index) const {
    return 0;
}

int32 UPalUIStatusModel::GetDisplayDefence(int32 Index) const {
    return 0;
}

FText UPalUIStatusModel::GetDisplayDefaultName(int32 Index) const {
    return FText::GetEmpty();
}

FText UPalUIStatusModel::GetDisplayCoopActionName(int32 Index) const {
    return FText::GetEmpty();
}

FText UPalUIStatusModel::GetDisplayActiveSkillName(int32 Index, int32 skillIndex) const {
    return FText::GetEmpty();
}

void UPalUIStatusModel::ChangeNickname(int32 Index, const FString& newNickName) {
}

void UPalUIStatusModel::ChangeIndex(uint8 Index) {
}


