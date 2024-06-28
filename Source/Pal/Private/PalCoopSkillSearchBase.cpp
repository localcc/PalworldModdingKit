#include "PalCoopSkillSearchBase.h"

UPalCoopSkillSearchBase::UPalCoopSkillSearchBase() {
    this->IsRangeIgnore = false;
    this->SearchRangeMax = 0.00f;
    this->ExtendRangePerSec = 0.00f;
    this->ElapsedTime = 0.00f;
    this->SkillRank = 0;
    this->bIsRunning = false;
    this->IsNotFinishAfterSearched = false;
}

void UPalCoopSkillSearchBase::Tick_Implementation(float DeltaTime, UPalCoopSkillSearchLocationRegister* LocationRegister) {
}

void UPalCoopSkillSearchBase::Terminate() {
}

void UPalCoopSkillSearchBase::Start_Implementation(const FVector& Origin, int32 Rank, const FGuid& RequestPlayerUId) {
}


void UPalCoopSkillSearchBase::OnRemoveLocationForCompass(const FGuid& LocationId, UPalLocationBase* Location) {
}


void UPalCoopSkillSearchBase::OnAddedLocationForCompass(const FGuid& LocationId, UPalLocationBase* Location) {
}

bool UPalCoopSkillSearchBase::IsSearchRangeIgnore() const {
    return false;
}

bool UPalCoopSkillSearchBase::IsRunning() const {
    return false;
}

bool UPalCoopSkillSearchBase::IsFinished_Implementation() const {
    return false;
}

bool UPalCoopSkillSearchBase::IsContinueProcess_Implementation() const {
    return false;
}

float UPalCoopSkillSearchBase::GetSearchRangeMax() const {
    return 0.0f;
}

float UPalCoopSkillSearchBase::GetSearchRangeByRank(int32 Rank) const {
    return 0.0f;
}

int32 UPalCoopSkillSearchBase::GetRank() const {
    return 0;
}

FVector UPalCoopSkillSearchBase::GetOrigin() const {
    return FVector{};
}

float UPalCoopSkillSearchBase::GetExtendSearchRangePerSec() const {
    return 0.0f;
}

float UPalCoopSkillSearchBase::GetExtendRangePerSecByRank(int32 Rank) const {
    return 0.0f;
}

float UPalCoopSkillSearchBase::GetCurrentSearchRadius() const {
    return 0.0f;
}

void UPalCoopSkillSearchBase::End_Implementation() {
}

void UPalCoopSkillSearchBase::ClearSearchResultParameters() {
}

void UPalCoopSkillSearchBase::AddSearchResultParameter(const FPalCoopSkillSearchResultParameter& ResultParameter) {
}


