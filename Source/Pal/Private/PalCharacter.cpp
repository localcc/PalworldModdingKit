#include "PalCharacter.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"
#include "PalActionComponent.h"
#include "PalAnimNotifyParameterComponent.h"
#include "PalCharacterAroundInfoCollectorComponent.h"
#include "PalCharacterCameraComponent.h"
#include "PalCharacterMovementComponent.h"
#include "PalCharacterParameterComponent.h"
#include "PalDamageReactionComponent.h"
#include "PalFootIKComponent.h"
#include "PalLookAtComponent.h"
#include "PalPassiveSkillComponent.h"
#include "PalShooterSpringArmComponent.h"
#include "PalSkeletalMeshComponent.h"
#include "PalStaticCharacterParameterComponent.h"
#include "PalStatusComponent.h"
#include "PalVisualEffectComponent.h"

APalCharacter::APalCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UPalSkeletalMeshComponent>(TEXT("CharacterMesh0")).SetDefaultSubobjectClass<UPalCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->UpdateGroundInterval = 1.00f;
    this->ActionComponent = CreateDefaultSubobject<UPalActionComponent>(TEXT("ActionComponent"));
    this->CharacterParameterComponent = CreateDefaultSubobject<UPalCharacterParameterComponent>(TEXT("CharacterParameterComponent"));
    this->StaticCharacterParameterComponent = CreateDefaultSubobject<UPalStaticCharacterParameterComponent>(TEXT("StaticCharacterParameterComponent"));
    this->DamageReactionComponent = CreateDefaultSubobject<UPalDamageReactionComponent>(TEXT("DamageReactionComponent"));
    this->StatusComponent = CreateDefaultSubobject<UPalStatusComponent>(TEXT("StatusComponent"));
    this->CameraBoom = CreateDefaultSubobject<UPalShooterSpringArmComponent>(TEXT("CameraBoom"));
    this->FollowCamera = CreateDefaultSubobject<UPalCharacterCameraComponent>(TEXT("FollowCamera"));
    this->LookAtComponent = CreateDefaultSubobject<UPalLookAtComponent>(TEXT("LookAtComponent"));
    this->NavInvokerComponent = NULL;
    this->FootIKComponent = CreateDefaultSubobject<UPalFootIKComponent>(TEXT("FootIKComponent"));
    this->VisualEffectComponent = CreateDefaultSubobject<UPalVisualEffectComponent>(TEXT("VisualEffectComponent"));
    this->PassiveSkillComponent = CreateDefaultSubobject<UPalPassiveSkillComponent>(TEXT("PassiveSkillComponent"));
    this->HUDComponent = NULL;
    this->AnimNotifyComponent = CreateDefaultSubobject<UPalAnimNotifyParameterComponent>(TEXT("AnimNotifyComponent"));
    this->AroundInfoCollectorComponent = CreateDefaultSubobject<UPalCharacterAroundInfoCollectorComponent>(TEXT("AroundInfoCollectorComponent"));
    this->RagdollInteractiveSphere = CreateDefaultSubobject<USphereComponent>(TEXT("RagdollInteractiveSphere"));
    this->bIsNeutralGroup = false;
    this->bIsBattleMode = false;
    this->bIsTalkMode = false;
    this->FlyMeshHeightCtrlComponent = NULL;
    this->bIsPalActiveActor = true;
    this->bIsOtomoCollision = false;
    this->bIsLocalInitialized = false;
    this->bIsDisable_ChangeTickInterval_ByImportance = false;
    this->bIsPart = false;
    this->ImportanceType = EPalCharacterImportanceType::Near;
    this->CurrentAirDashCount = 0;
    this->bUseBodyPartsCollisionProfileNameBaseCamp = false;
    this->AroundInfoCollectorComponent->SetupAttachment(RootComponent);
    this->CameraBoom->SetupAttachment(RootComponent);
    this->FollowCamera->SetupAttachment(CameraBoom);
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this))->SetupAttachment(RootComponent);
    this->RagdollInteractiveSphere->SetupAttachment(RootComponent);
}

void APalCharacter::UpdateGroundRayCast(bool bImmediateApply) {
}

void APalCharacter::UnbindOnCompleteInitializeParameterDelegate(EPalCharacterCompleteDelegatePriority Priority, const FPalOnCharacterCompleteInitializeParameter& Event) {
}

void APalCharacter::SetVisibleHandAttachMesh(bool Active) {
}

void APalCharacter::SetVisibleCharacterMesh(bool Active) {
}

void APalCharacter::SetRideMeshTranslationOffset(FVector InNewRideMeshTranslationOffset) {
}

void APalCharacter::SetOtomoCollisionProfile_Implementation(bool IsOtomoCollision) {
}

void APalCharacter::SetDisableChangeIntervalByImportance(FName flagName, bool isDisable) {
}

void APalCharacter::SetActiveCollisionMovement(bool Active) {
}

void APalCharacter::SetActiveActorStayVisible_Implementation(bool Active) {
}

void APalCharacter::SetActiveActor_Implementation(bool Active) {
}

void APalCharacter::RPCDummy_Implementation() {
}

void APalCharacter::ResetTickInterval() {
}

void APalCharacter::RequestJump() {
}

void APalCharacter::RequestExecuteTickNextFrameForAction() {
}

void APalCharacter::ReplaceCurrentReservedMontage_WithPlayRate(UAnimMontage* ReservedMontage, UAnimMontage* NewMontage, float PlayRate) {
}

void APalCharacter::Play2Montage_WithPlayRate(UAnimMontage* firstMontage, UAnimMontage* nextMontage, float PlayRate) {
}

void APalCharacter::Play2Montage(UAnimMontage* firstMontage, UAnimMontage* nextMontage) {
}

void APalCharacter::OnTeleport_ToClient_Implementation(const FVector& Location, const FQuat& Rotation) {
}

void APalCharacter::OnRep_RootCollisionProfileName() {
}

void APalCharacter::OnRep_IsPalActiveActor(bool PrevIsActiveActor) {
}

void APalCharacter::OnRep_IsOtomoCollision(bool PrevbIsOtomoCollision) {
}

void APalCharacter::OnRep_CapsuleRootSettings() {
}

void APalCharacter::OnRep_bUseBodyPartsCollisionProfileNameBaseCamp() {
}

void APalCharacter::OnOverlapEndByAroundInfo(AActor* OtherActor) {
}

void APalCharacter::OnOverlapBeginByAroundInfo(AActor* OtherActor) {
}

void APalCharacter::OnDeadCharacter(FPalDeadInfo DeadInfo) {
}

void APalCharacter::OnDamageReaction(FPalDamageRactionInfo ReactionInfo) {
}

void APalCharacter::OnChangeWetnessStatus(bool IsSwim) {
}

void APalCharacter::LocalInitialized() {
}

bool APalCharacter::IsPreCooping() const {
    return false;
}

bool APalCharacter::IsPart() const {
    return false;
}

bool APalCharacter::IsInitialized() const {
    return false;
}

bool APalCharacter::IsCooping() const {
    return false;
}


bool APalCharacter::GetTalkMode() const {
    return false;
}

FVector APalCharacter::GetRideMeshTranslationOffset() const {
    return FVector{};
}

UPalCharacterMovementComponent* APalCharacter::GetPalCharacterMovementComponent() const {
    return NULL;
}

TSoftObjectPtr<UNiagaraSystem> APalCharacter::GetOverrideSleepFX() const {
    return NULL;
}


UPalSkeletalMeshComponent* APalCharacter::GetMainMesh() const {
    return NULL;
}

FVector APalCharacter::GetHPGaugeLocation_Implementation() const {
    return FVector{};
}


UAnimMontage* APalCharacter::GetCurrentReservedMontage() const {
    return NULL;
}

UPalCharacterParameterComponent* APalCharacter::GetCharacterParameterComponent() const {
    return NULL;
}

bool APalCharacter::GetBattleMode() const {
    return false;
}

bool APalCharacter::GetActiveActorFlag() const {
    return false;
}

UPalActionComponent* APalCharacter::GetActionComponent() const {
    return NULL;
}

void APalCharacter::ForceResetJumpState() {
}

void APalCharacter::ChangeWantFood_ToAll_Implementation(bool IsWantFood, bool IsExistFood) {
}

void APalCharacter::ChangeTalkModeFlag_ToAll_Implementation(bool IsTalk) {
}

void APalCharacter::ChangeBattleModeFlag_ToAll_Implementation(bool IsBattle) {
}

void APalCharacter::ChangeBattleModeFlag(bool IsBattle) {
}

void APalCharacter::BroadcastOnCompleteInitializeParameter() {
}

void APalCharacter::BindOnCompleteInitializeParameterDelegate(EPalCharacterCompleteDelegatePriority Priority, const FPalOnCharacterCompleteInitializeParameter& Event) {
}

void APalCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalCharacter, bIsNeutralGroup);
    DOREPLIFETIME(APalCharacter, bIsPalActiveActor);
    DOREPLIFETIME(APalCharacter, bIsOtomoCollision);
    DOREPLIFETIME(APalCharacter, RootCollisionProfileName);
    DOREPLIFETIME(APalCharacter, CapsuleRootSettings);
    DOREPLIFETIME(APalCharacter, bUseBodyPartsCollisionProfileNameBaseCamp);
}


