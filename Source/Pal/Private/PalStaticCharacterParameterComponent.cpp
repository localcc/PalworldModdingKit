#include "PalStaticCharacterParameterComponent.h"

UPalStaticCharacterParameterComponent::UPalStaticCharacterParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CallApproachWalkSpeedMultiplier = 1.00f;
    this->CaptureSuccessRate = 1.00f;
    this->IsPal = false;
    this->SkillEffectScale = 1.00f;
    this->FollowSideDistanceRate = 1.00f;
    this->StepVelocityXY = 50.00f;
    this->StepVelocityZ = 10.00f;
    this->HeadBoneName = TEXT("Head");
    this->PhysicsBodyRootName = TEXT("pelvis");
    this->ToolAttachBoneName = TEXT("Socket_Weapon_R");
    this->ExclamationMarkOffsetZ = 50.00f;
    this->MovementType = EPalMonsterMovementType::GroundOnly;
    this->Weight_KG = 10.00f;
    this->Mass_Scale = 100;
    this->IsGroundCrossRange = 50.00f;
    this->IsUncapturable = false;
    this->IsBackWalkForwardAnime = false;
    this->IsRightLeft_WakeupFromRagdoll = false;
    this->PettingSize = EPalPettingSizeType::Small;
    this->PettingDistance = 100.00f;
    this->PettingStartAddDistance = 20.00f;
    this->PettingEndLeaveDistance = 0.00f;
    this->PettingCameraCenterDistance_Override = -1.00f;
    this->PettingCameraHeight_Override = -1.00f;
    this->PettingCameraArmLength_Override = -1.00f;
    this->Size = EPalSizeType::S;
    this->Ragdoll_GravityRate = 3.00f;
    this->IsLookatIKAble = true;
    this->SmallDamageAnimationApplyRate = 0.20f;
    this->SmallDamageAnimationPlayRate = 2.00f;
    this->IsForcedTurnWhenDamageReaction = false;
    this->DisableNPCDamageRolling = false;
    this->DefenseBuildObjectAssignDistance = 0.00f;
    this->DefenseBuildObjectAssignHeight = 0.00f;
    this->IsHideDefenseLauncherFooting = false;
    this->PalSoundSlotCache = NULL;
    this->PalFootStepEffectAssetCache = NULL;
    this->MissWazaAction = NULL;
    this->IsBoss_Database = false;
    this->IsTowerBoss_Database = false;
    this->IsRaidBoss_Database = false;
    this->SpawnedCharacterType = EPalSpawnedCharacterType::Common;
    this->IsRaidBoss_BP = false;
}

void UPalStaticCharacterParameterComponent::SetSpawnedCharacterType(EPalSpawnedCharacterType SpawnedType) {
}

void UPalStaticCharacterParameterComponent::LoadWazaActionClass(EPalWazaID WazaID) {
}

bool UPalStaticCharacterParameterComponent::IsTowerBossPal() {
    return false;
}

bool UPalStaticCharacterParameterComponent::IsSwimPal() {
    return false;
}

bool UPalStaticCharacterParameterComponent::IsRarePal() {
    return false;
}

bool UPalStaticCharacterParameterComponent::IsRaidBossPal() {
    return false;
}

bool UPalStaticCharacterParameterComponent::IsFlyPal() {
    return false;
}

bool UPalStaticCharacterParameterComponent::IsBossPal_Database_ExceptRare() {
    return false;
}

bool UPalStaticCharacterParameterComponent::IsBossPal_Database() {
    return false;
}

bool UPalStaticCharacterParameterComponent::IgnoreLeanBack() {
    return false;
}

bool UPalStaticCharacterParameterComponent::IgnoreBlowAway() {
    return false;
}

EPalSpawnedCharacterType UPalStaticCharacterParameterComponent::GetSpawnedCharacterType() {
    return EPalSpawnedCharacterType::Common;
}

FPalRandomRestInfo UPalStaticCharacterParameterComponent::GetRandomRestInfoWithOption(const TArray<UAnimMontage*>& ExceptMontages) const {
    return FPalRandomRestInfo{};
}

FPalRandomRestInfo UPalStaticCharacterParameterComponent::GetRandomRestInfo() const {
    return FPalRandomRestInfo{};
}

float UPalStaticCharacterParameterComponent::GetCaptureRate_ByCharacterID() {
    return 0.0f;
}

UAnimMontage* UPalStaticCharacterParameterComponent::FindMontange(const EPalActionType ActionType, bool& bExist) const {
    return NULL;
}


