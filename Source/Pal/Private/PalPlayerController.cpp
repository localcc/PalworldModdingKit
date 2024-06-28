#include "PalPlayerController.h"
#include "Net/UnrealNetwork.h"
#include "PalAIActionComponent.h"
#include "PalCutsceneComponent.h"

APalPlayerController::APalPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoManageActiveCameraTarget = false;
    this->ClickEventKeys.AddDefaulted(1);
    this->bAdmin = false;
    this->AIActionComponent = CreateDefaultSubobject<UPalAIActionComponent>(TEXT("ActionsComp"));
    this->CutsceneComponent = CreateDefaultSubobject<UPalCutsceneComponent>(TEXT("PalCutsceneComponent"));
    this->Transmitter = NULL;
    this->WeaponPaletteLongPressTime = 1.00f;
    this->PawnChangeCameraInterpChangeTime = 0.10f;
    this->isOpenConstructionMenu = false;
    this->RecoilCurve = NULL;
    this->DamageCameraShake = NULL;
    this->DamageCamShakeRegulatorClass = NULL;
    this->DamageCamShakeRegulator = NULL;
    this->AutoAimTarget = NULL;
    this->PlayerInputOneFlameCommandList = NULL;
    this->IsBuldingActiveFlag_ForServer = false;
}

void APalPlayerController::UpdateCharacterNickName_ToServer_Implementation(const FPalInstanceID& InstanceId, const FString& NewNickName) {
}

bool APalPlayerController::TrySwitchOtomo() {
    return false;
}

void APalPlayerController::ThrowPalByOutSide(AActor* PreOtomoPal, UPalIndividualCharacterHandle* PreHandle) {
}

void APalPlayerController::TeleportToSafePoint_ToServer_Implementation() {
}

void APalPlayerController::StartStepCoolDownCoolTimer() {
}

void APalPlayerController::StartFlyToServer_Implementation() {
}

void APalPlayerController::ShooterComponent_StopReload_ToServer_Implementation(UPalShooterComponent* Shooter, int32 ID) {
}

void APalPlayerController::ShooterComponent_SetTargetDirection_ToServer_Implementation(UPalShooterComponent* Shooter, FVector targetDirection) {
}

void APalPlayerController::ShooterComponent_ReloadWeapon_ToServer_Implementation(UPalShooterComponent* Shooter, int32 ID) {
}

void APalPlayerController::ShooterComponent_PullCancel_ToServer_Implementation(UPalShooterComponent* Shooter) {
}

void APalPlayerController::ShooterComponent_ChangeIsShooting_ToServer_Implementation(UPalShooterComponent* Shooter, int32 ID, bool IsShooting) {
}

void APalPlayerController::ShooterComponent_ChangeIsAiming_ToServer_Implementation(UPalShooterComponent* Shooter, int32 ID, bool IsAiming) {
}

void APalPlayerController::SetupInternalForSphere_ToServer_Implementation(int32 ID, APalSphereBodyBase* Target, APalCharacter* TargetCharacter) {
}

void APalPlayerController::SetupInternalForSphere_ToALL_Implementation(int32 ID, APalSphereBodyBase* Target, APalCharacter* TargetCharacter) {
}

void APalPlayerController::SetupInternalForSphere(APalSphereBodyBase* Target, APalCharacter* TargetCharacter) {
}

void APalPlayerController::SetSneakBonusFlagForSphere_ToServer_Implementation(int32 ID, APalSphereBodyBase* Target, bool isSneak) {
}

void APalPlayerController::SetSneakBonusFlagForSphere_ToALL_Implementation(int32 ID, APalSphereBodyBase* Target, bool isSneak) {
}

void APalPlayerController::SetSneakBonusFlagForSphere(APalSphereBodyBase* Target, bool isSneak) {
}

void APalPlayerController::SetRiderRelativeRotation_ToServer_Implementation(FRotator Rotator) {
}



void APalPlayerController::SetFavoraitePal_ToServer_Implementation(const FPalInstanceID& InstanceId, const bool IsFavorite) {
}

void APalPlayerController::SetDisableThrowPalFlag(FName flagName, bool isDisable) {
}

void APalPlayerController::SetDisableSwitchPalFlag(FName flagName, bool isDisable) {
}

void APalPlayerController::SetDisableInputFlag(FName flagName, bool isDisable) {
}

void APalPlayerController::SetDisableCoopFlag(FName flagName, bool isDisable) {
}

void APalPlayerController::SetCaptureLevelForSphere_ToServer_Implementation(int32 ID, APalSphereBodyBase* Target, int32 Level) {
}

void APalPlayerController::SetCaptureLevelForSphere_ToALL_Implementation(int32 ID, APalSphereBodyBase* Target, int32 Level) {
}

void APalPlayerController::SetCaptureLevelForSphere(APalSphereBodyBase* Target, int32 Level) {
}

void APalPlayerController::SetCameraRotatorToPlayerCharacter_ToServer_Implementation(FRotator CameraRotator) {
}

void APalPlayerController::SendScreenLogToClient_Implementation(const FString& Message, FLinearColor Color, float Duration, const FName& Key) {
}

void APalPlayerController::SendLog_ToClient_Implementation(const EPalLogPriority Priority, const FText& Text, const FPalLogAdditionalData& AdditionalData) {
}

void APalPlayerController::SendBuldingActiveFlag_ToServer_Implementation(bool IsActive) {
}

void APalPlayerController::SelfKillPlayer_Implementation() {
}

void APalPlayerController::RPCDummy_Implementation() {
}

void APalPlayerController::RequestUseReturnToBaseCampItem_ToServer_Implementation(const FPalItemSlotId& ItemData) {
}

void APalPlayerController::RequestUseReturnToBaseCampItem(const FPalItemSlotId& ItemData) {
}

void APalPlayerController::RequestSyncOilrigDestroyObject_ToServer_Implementation(FGuid ObjectID) {
}

void APalPlayerController::RequestLiftupThrow_ToServer_Implementation(AActor* Target) {
}

void APalPlayerController::RequestLiftup_ToServer_Implementation(APalCharacter* TargetCharacter) {
}

void APalPlayerController::RequestFastTravel_ToServer_Implementation(const FGuid& LocationId) {
}

void APalPlayerController::RequestExitGuild_ToServer_Implementation() {
}

void APalPlayerController::RequestEnterToPlayerGuild_ToServer_Implementation(APalPlayerCharacter* RespondentPlayerCharacter) {
}

void APalPlayerController::RequestDestroyOilrigCannon_Implementation(APalOilRigCannonBase* Cannon) {
}

void APalPlayerController::RequestDecreaseWeaponDurability_ToServer_Implementation(FPalItemId ItemId) {
}

void APalPlayerController::RequestChangeGuildName_ToServer_Implementation(const FString& NewGuildName) {
}

void APalPlayerController::RequestChangeCharacterMakeInfo_ToServer_Implementation(const FPalPlayerDataCharacterMakeInfo& NewMakeInfo) {
}

void APalPlayerController::RequestChangeAdminGuild_ToServer_Implementation(const FGuid& NextAdminPlayerUId) {
}

void APalPlayerController::RequestBanPlayerFromGuild_ToServer_Implementation(const FGuid& TargetPlayerUId) {
}

void APalPlayerController::ReplaceEquipWaza_ToServer_Implementation(const FPalInstanceID& InstanceId, const EPalWazaID OldWaza, const EPalWazaID NewWaza) {
}

void APalPlayerController::RemoveEquipWaza_ToServer_Implementation(const FPalInstanceID& InstanceId, const EPalWazaID TargetWaza) {
}

void APalPlayerController::RemoveCameraRotateSpeedModifierRate(const FName& modifierName) {
}

void APalPlayerController::ReceiveSuccessRequestEnterGuild_ToClient_Implementation(const EPalGuildJoinRequestResult Result, const FPalInstanceID& EnterPlayerInstanceId) {
}

void APalPlayerController::ReceiveOfferJoinGuildPlayer_ToClient_Implementation(const FGuid& FlowUniqueId, const FPalInstanceID& RequestPlayerInstanceId) {
}

void APalPlayerController::ReceiveLiftupRequestResult_ToClient_Implementation(EPalLiftupRequestResult Result) {
}

void APalPlayerController::ReceiveFailedRequestGuildWithLog_ToClient_Implementation(const EPalGuildJoinRequestResult Result) {
}

void APalPlayerController::ReceiveFailedRequestGuildWithAlert_ToClient_Implementation(const EPalGuildJoinRequestResult Result) {
}

void APalPlayerController::ReauestDamageExplode_ToServer_Implementation(UPalDamageExplodeComponent* ExplodeComponent, const FPalDamageInfo DamageInfo) {
}

void APalPlayerController::PlaySkill(int32 SlotID) {
}

void APalPlayerController::PalDeprojectScreenPositionToWorld(FVector& StartLocation, FVector& RayDirection) {
}

void APalPlayerController::OnWeaponNotify(EWeaponNotifyType Type) {
}

void APalPlayerController::OnUpdateWeightInventory(float Weight) {
}


void APalPlayerController::OnStartGliding() {
}


void APalPlayerController::OnStartAim() {
}


void APalPlayerController::OnReleasedSpawnPalButton() {
}

void APalPlayerController::OnReceiveConfirmResultRequestGuild_ClientInternal(const bool bResponse) {
}


void APalPlayerController::OnOverWeightInventory(float Weight) {
}







void APalPlayerController::OnLongReleasedSpawnPalButton() {
}

void APalPlayerController::OnLongPressedCoopButton() {
}

void APalPlayerController::OnLanded(UPalCharacterMovementComponent* MovementComponent, const FHitResult& Hit) {
}

void APalPlayerController::OnJump(UPalCharacterMovementComponent* MovementComponent) {
}




void APalPlayerController::OnFixedWeightInventory(float Weight) {
}

void APalPlayerController::OnEndRolling() {
}


void APalPlayerController::OnEndAim() {
}

void APalPlayerController::OnDestroyPawn(AActor* DestroyedActor) {
}

void APalPlayerController::OnDamage(FPalDamageResult DamageResult) {
}

void APalPlayerController::OnChangeSwimming(bool IsInSwimming) {
}

void APalPlayerController::OnChangePadOption(const FPalOptionPadSettings& PrevSettings, const FPalOptionPadSettings& NewSettings) {
}


void APalPlayerController::OnChangeKeyboardOption(const FPalOptionKeyboardSettings& PrevSettings, const FPalOptionKeyboardSettings& NewSettings) {
}


void APalPlayerController::OnActionBegin(const UPalActionBase* ActionBase) {
}

void APalPlayerController::NotifyRideWallStop_ToClient_Implementation() {
}

void APalPlayerController::NotifyLiftupCampPal_ToClient_Implementation(APalCharacter* TargetCharacter) {
}

void APalPlayerController::NotifyConfirmRequestGuild_ToServer_Implementation(const FGuid& FlowUniqueId, const bool bResponse) {
}

void APalPlayerController::JumpCancelPalThrow(UPalCharacterMovementComponent* MovementComponent) {
}

bool APalPlayerController::IsSwimming() const {
    return false;
}

bool APalPlayerController::IsRidingFlyPal() const {
    return false;
}

bool APalPlayerController::IsRiding() const {
    return false;
}

bool APalPlayerController::IsOtomoPartnerSkillCanTrigger() const {
    return false;
}

bool APalPlayerController::IsCooping() const {
    return false;
}

bool APalPlayerController::IsBuldingActiveFlagForServer() const {
    return false;
}



APalCharacter* APalPlayerController::GetRiderCharacter() const {
    return NULL;
}

FGuid APalPlayerController::GetPlayerUId() const {
    return FGuid{};
}

APalPlayerState* APalPlayerController::GetPalPlayerState() const {
    return NULL;
}

void APalPlayerController::GetOffToServer_Implementation() {
}

APawn* APalPlayerController::GetLowBodyPawn() const {
    return NULL;
}

APalCharacter* APalPlayerController::GetLowBodyPalCharacter() const {
    return NULL;
}

UPalLoadoutSelectorComponent* APalPlayerController::GetLoadoutSelectorComponent() const {
    return NULL;
}

FVector2D APalPlayerController::GetKeyboardMoveValue() const {
    return FVector2D{};
}

APalCharacter* APalPlayerController::GetDefaultPlayerCharacter() const {
    return NULL;
}

APalCharacter* APalPlayerController::GetControlPalCharacter() const {
    return NULL;
}

FVector2D APalPlayerController::GetControllerRightStickValue() const {
    return FVector2D{};
}

FVector2D APalPlayerController::GetControllerLeftStickValue() const {
    return FVector2D{};
}

void APalPlayerController::EndFlyToServer_Implementation() {
}

void APalPlayerController::EnableShootingByAction(const UPalActionComponent* Component) {
}


void APalPlayerController::Debug_TogglePartnerSkillNoDecrease_Implementation() {
}

void APalPlayerController::Debug_TeleportToNearestPlayer_Implementation() {
}

void APalPlayerController::Debug_TeleportToNearestCamp_Implementation() {
}

void APalPlayerController::Debug_TeleportToBotLocation_Implementation(int32 botIndex) {
}

void APalPlayerController::Debug_TeleportToBotCamp_Implementation(int32 botIndex) {
}

void APalPlayerController::Debug_Teleport2D_Implementation(const FVector& Location) {
}

void APalPlayerController::Debug_ShowInvaderDebugLog_Implementation() {
}

void APalPlayerController::Debug_SetPalWorldTimeScale_Implementation(float Rate) {
}

void APalPlayerController::Debug_SetPalWorldTime_Implementation(int32 Hour) {
}

void APalPlayerController::Debug_SetFPSForServer_Implementation(float fps) {
}

void APalPlayerController::Debug_RerollCharacterMake_Implementation() {
}

void APalPlayerController::Debug_ReceiveCheatCommand_ToClient_Implementation(const FString& Message) {
}

void APalPlayerController::Debug_ParallelForUpdateActiveTiles_Implementation() {
}

void APalPlayerController::Debug_NotConsumeMaterialsInCraft_Implementation() {
}

void APalPlayerController::Debug_NotConsumeMaterialsInBuild_Implementation() {
}

void APalPlayerController::Debug_Muteki_ToServer_Implementation() {
}

void APalPlayerController::Debug_InvaderMarchRandom_Implementation() {
}

void APalPlayerController::Debug_InvaderMarch_Implementation() {
}

void APalPlayerController::Debug_InsightsTraceStop_ToServer_Implementation() {
}

void APalPlayerController::Debug_InsightsTraceStart_ToServer_Implementation() {
}

void APalPlayerController::Debug_IgnoreRestrictedByItemsForPartnerSkill_Implementation() {
}

void APalPlayerController::Debug_HighJump_ToServer_Implementation() {
}

void APalPlayerController::Debug_HighJump() {
}

void APalPlayerController::Debug_ForceSpawnRarePal_ToServer_Implementation() {
}

void APalPlayerController::Debug_EnableCollectPalCount_Implementation() {
}

void APalPlayerController::Debug_CheatCommand_ToServer_Implementation(const FString& Command) {
}

void APalPlayerController::Debug_AddPlayerExp_ToServer_Implementation(int32 addExp) {
}

void APalPlayerController::Debug_AddPartyExp_ToServer_Implementation(int32 addExp) {
}

void APalPlayerController::Debug_AddMoney_ToServer_Implementation(int64 addValue) {
}

void APalPlayerController::Debug_AddExpForALLPlayer_ToServer_Implementation(int32 addExp) {
}

void APalPlayerController::ConfirmRequestGuild_ToClient_Implementation(const FGuid& FlowUniqueId, const EPalGuildJoinRequestConfirm ConfirmType) {
}

bool APalPlayerController::CanCooping() const {
    return false;
}

void APalPlayerController::CallOnCoopReleaseDelegate_ToServer_Implementation() {
}

void APalPlayerController::AddPlayerStatusPoint_ToServer_Implementation(const TArray<FPalGotStatusPoint>& AddStatusPointArray) {
}

void APalPlayerController::AddKillLog_Client_Implementation(const FPalKillLogDisplayData& KillLogData) {
}

void APalPlayerController::AddEquipWaza_ToServer_Implementation(const FPalInstanceID& InstanceId, const EPalWazaID NewWaza) {
}

void APalPlayerController::AddDeathLog_Client_Implementation(const FPalKillLogDisplayData& DeathLogData) {
}

void APalPlayerController::AddCameraRotateSpeedModifierRate(const FName& modifierName, float Rate) {
}


void APalPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalPlayerController, bAdmin);
    DOREPLIFETIME(APalPlayerController, Transmitter);
}


