#include "PalAIActionCoopAssaultrifleMode.h"

UPalAIActionCoopAssaultrifleMode::UPalAIActionCoopAssaultrifleMode() {
    this->SearchEnemyRadius = 25000.00f;
    this->SearchLocationRadiusMax = 3000.00f;
    this->SearchLocationRadiusStep = 500.00f;
    this->SearchLocationDegStep = 30.00f;
    this->SearchingLocationRadius = 0.00f;
    this->TargetCharacter = NULL;
    this->ReticleTarget = NULL;
}

void UPalAIActionCoopAssaultrifleMode::Update(float DeltaTime) {
}

void UPalAIActionCoopAssaultrifleMode::SetAimStartPoint(const FVector& OffsetLocation) {
}

void UPalAIActionCoopAssaultrifleMode::SearchForTargetAndShootingLocation() {
}

void UPalAIActionCoopAssaultrifleMode::ProgressSeraching(float DeltaTime) {
}

void UPalAIActionCoopAssaultrifleMode::Progress_VerifyShootableEnemy() {
}

void UPalAIActionCoopAssaultrifleMode::Progress_CollectShootableLocation() {
}

void UPalAIActionCoopAssaultrifleMode::OnUpdateShootingLocation_Implementation(APalCharacter* Target, const FVector& ShootLocation) {
}

void UPalAIActionCoopAssaultrifleMode::OnRoadBlocked_Implementation() {
}

bool UPalAIActionCoopAssaultrifleMode::IsSearching() const {
    return false;
}

bool UPalAIActionCoopAssaultrifleMode::HasReached(const FVector& Goal) const {
    return false;
}

APalCharacter* UPalAIActionCoopAssaultrifleMode::GetTrainer() const {
    return NULL;
}

void UPalAIActionCoopAssaultrifleMode::GetTargetEnemies(TArray<APalCharacter*>& Enemies) {
}

APalCharacter* UPalAIActionCoopAssaultrifleMode::GetTargetCharacter() {
    return NULL;
}

APalCharacter* UPalAIActionCoopAssaultrifleMode::GetReticleTarget() const {
    return NULL;
}

void UPalAIActionCoopAssaultrifleMode::GetCandidateLocations(float Radius, float DegStep, TArray<FPalCoopSkillAssaultrifleModeCandidateLocation>& Results) {
}

bool UPalAIActionCoopAssaultrifleMode::FindLocationToShootEnemy(APalCharacter* Target, FPalCoopSkillAssaultrifleModeCandidateLocation& OutLocation) {
    return false;
}

void UPalAIActionCoopAssaultrifleMode::ClearTargetCharacter() {
}


