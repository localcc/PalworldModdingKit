#include "PalCharacterParameterComponent.h"
#include "Net/UnrealNetwork.h"

UPalCharacterParameterComponent::UPalCharacterParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsCooping = false;
    this->bIsEnableSendReticleTarget = false;
    this->bIsEnableMuteki = false;
    this->IsSPOverheat = false;
    this->bIsHyperArmor = false;
    this->bIsDebugMuteki = false;
    this->ElementType1 = EPalElementType::None;
    this->ElementType2 = EPalElementType::None;
    this->IsOverrideTarget = false;
    this->Trainer = NULL;
    this->OtomoPal = NULL;
    this->IndividualHandle = NULL;
    this->IndividualParameter = NULL;
    this->IsStun = false;
    this->IsEnableSpeedCollision = true;
    this->IsCanSneakAttacked = false;
    this->IsFriendBulletIgnore = false;
    this->BiologicalGrade = 0;
    this->IsPredator = false;
    this->IsEdible = true;
    this->HiddenCollisionOverlapCount = 0;
    this->BurnCollisionOverlapCount = 0;
    this->LavaCollisionOverlapCount = 0;
    this->DamageUpElement_ByElementStatus = EPalElementType::None;
    this->DamageDownElement_ByElementStatus = EPalElementType::None;
    this->IsDarknessRandomAttack = false;
    this->AttackUp = 0;
    this->DefenseUp = 0;
    this->IsSleepAction = false;
    this->IsDisableOtomoReturnEffect = false;
    this->MaxHPRate_ForTowerBoss = 1.00f;
    this->MaxSPBuffRate = 1.00f;
    this->bIsUseGroundRayCast = true;
    this->BaseCampWorkerOrderType = EPalMapBaseCampWorkerOrderType::Work;
    this->bBaseCampWorkerAttackableFriend = false;
    this->WorkType = EPalWorkType::None;
    this->bAppliedBaseCampWorkerInitialized = false;
    this->WorkingState = EPalWorkWorkerWorkingState::Wait;
    this->bBeingRescued = false;
    this->DyingHP = 0.00f;
    this->DyingMaxHP = 100.00f;
    this->ItemContainer = NULL;
    this->IsCapturedProcessing = false;
    this->CanDropItem = false;
    this->IsImmortality = false;
    this->IsMimicryMode = false;
    this->OtomoAttackStopJudge = NULL;
}

void UPalCharacterParameterComponent::ZeroDyingHP_ToServer_Implementation() {
}

void UPalCharacterParameterComponent::ZeroDyingHP() {
}

void UPalCharacterParameterComponent::SubDyingHP(float SubHP) {
}

void UPalCharacterParameterComponent::SetupBiologicalGradeFromDatabase() {
}

void UPalCharacterParameterComponent::SetTrainer(APalCharacter* inTrainer) {
}

void UPalCharacterParameterComponent::SetSP(FFixedPoint64 NewSP) {
}

void UPalCharacterParameterComponent::SetReticleTarget_ToServer_Implementation(AActor* Actor) {
}

void UPalCharacterParameterComponent::SetOverrideTargetLocation_ToServer_Implementation(FVector TargetLocation) {
}

void UPalCharacterParameterComponent::SetOverrideTargetLocation(FVector TargetLocation) {
}

void UPalCharacterParameterComponent::SetMuteki(FName flagName, bool IsEnable) {
}

void UPalCharacterParameterComponent::SetMP(FFixedPoint64 NewMP) {
}

void UPalCharacterParameterComponent::SetMaxSP(FFixedPoint64 NewMaxSP) {
}

void UPalCharacterParameterComponent::SetMaxMP(FFixedPoint64 NewMaxMP) {
}

void UPalCharacterParameterComponent::SetIsOverrideTarget_ToServer_Implementation(int32 ID, bool IsOverride) {
}

void UPalCharacterParameterComponent::SetIsOverrideTarget_ToALL_Implementation(int32 ID, bool IsOverride) {
}

void UPalCharacterParameterComponent::SetIsOverrideTarget_Innner(bool IsOverride) {
}

void UPalCharacterParameterComponent::SetIsOverrideTarget(bool IsOverride) {
}

void UPalCharacterParameterComponent::SetIsCapturedProcessing(bool IsCaptureProcess) {
}

void UPalCharacterParameterComponent::SetHP(FFixedPoint64 NewHP) {
}

void UPalCharacterParameterComponent::SetEnableSendReticleTarget(FName flagName, bool IsEnable) {
}

void UPalCharacterParameterComponent::SetElementTypeFromDatabase(APalCharacter* InCharacter) {
}

void UPalCharacterParameterComponent::SetDisableNaturalHealing_Component(FName Key, bool Disable) {
}

void UPalCharacterParameterComponent::SetDisableCreateUNKO(FName flagName, bool isDisable) {
}

void UPalCharacterParameterComponent::SetCoopingFlag(bool IsEnable) {
}

void UPalCharacterParameterComponent::ReviveFromDying() {
}

void UPalCharacterParameterComponent::ResetSP() {
}

void UPalCharacterParameterComponent::ResetDyingHP() {
}

void UPalCharacterParameterComponent::RemoveTrapMovingPanel(AActor* TrapActor) {
}

void UPalCharacterParameterComponent::RemoveTrapLegHold(AActor* TrapActor) {
}

void UPalCharacterParameterComponent::OnSlipDamage(int32 Damage) {
}

void UPalCharacterParameterComponent::OnRep_Trainer() {
}

void UPalCharacterParameterComponent::OnRep_PossessStaticItemId() {
}

void UPalCharacterParameterComponent::OnRep_ItemContainer() {
}

void UPalCharacterParameterComponent::OnRep_IndividualParameter() {
}

void UPalCharacterParameterComponent::OnInitializedCharacter(APalCharacter* OwnerCharacter) {
}

void UPalCharacterParameterComponent::OnInitialize_AfterSetIndividualParameter(APalCharacter* Character) {
}

void UPalCharacterParameterComponent::OnDamage(FPalDamageResult DamageResult) {
}

bool UPalCharacterParameterComponent::IsOtomo() const {
    return false;
}

bool UPalCharacterParameterComponent::IsMuteki() {
    return false;
}

bool UPalCharacterParameterComponent::IsLive() const {
    return false;
}

bool UPalCharacterParameterComponent::IsInHiddenCollision() {
    return false;
}

bool UPalCharacterParameterComponent::IsHyperArmor() const {
    return false;
}

bool UPalCharacterParameterComponent::IsHittingLava() const {
    return false;
}

bool UPalCharacterParameterComponent::IsDyingHPZero() const {
    return false;
}

bool UPalCharacterParameterComponent::IsDyingHPMax() const {
    return false;
}

bool UPalCharacterParameterComponent::IsDying() const {
    return false;
}

bool UPalCharacterParameterComponent::IsDead() const {
    return false;
}

bool UPalCharacterParameterComponent::IsCooping() const {
    return false;
}

bool UPalCharacterParameterComponent::IsAssignedToAnyWork() const {
    return false;
}

bool UPalCharacterParameterComponent::IsAssignedFixed() const {
    return false;
}

bool UPalCharacterParameterComponent::HasFloorPhysMaterial() const {
    return false;
}

bool UPalCharacterParameterComponent::HasElementType(const EPalElementType ElementType) const {
    return false;
}

FGuid UPalCharacterParameterComponent::GetWorkId() const {
    return FGuid{};
}

UPalWorkAssign* UPalCharacterParameterComponent::GetWorkAssign() const {
    return NULL;
}

UPalWorkBase* UPalCharacterParameterComponent::GetWork() const {
    return NULL;
}

FFixedPoint64 UPalCharacterParameterComponent::GetSP() {
    return FFixedPoint64{};
}

int32 UPalCharacterParameterComponent::GetShotAttack() {
    return 0;
}

float UPalCharacterParameterComponent::GetSanity() {
    return 0.0f;
}

AActor* UPalCharacterParameterComponent::GetReticleTargetActor() {
    return NULL;
}

float UPalCharacterParameterComponent::GetRadius() const {
    return 0.0f;
}

FVector UPalCharacterParameterComponent::GetOverrideTargetLocation_ConsiderRide() {
    return FVector{};
}

UPalOtomoAttackStopJudgeByBallList* UPalCharacterParameterComponent::GetOtomoAttackStopJudge() {
    return NULL;
}

void UPalCharacterParameterComponent::GetNickname(FString& outName) {
}

FFixedPoint64 UPalCharacterParameterComponent::GetMP() {
    return FFixedPoint64{};
}

int32 UPalCharacterParameterComponent::GetMeleeAttack() {
    return 0;
}

FFixedPoint64 UPalCharacterParameterComponent::GetMaxSP() {
    return FFixedPoint64{};
}

float UPalCharacterParameterComponent::GetMaxSanity() {
    return 0.0f;
}

FFixedPoint64 UPalCharacterParameterComponent::GetMaxMP() {
    return FFixedPoint64{};
}

FFixedPoint64 UPalCharacterParameterComponent::GetMaxHP() {
    return FFixedPoint64{};
}

float UPalCharacterParameterComponent::GetMaxFullStomach() {
    return 0.0f;
}

FGuid UPalCharacterParameterComponent::GetMapObjectInstanceIdApproachTo() const {
    return FGuid{};
}

int32 UPalCharacterParameterComponent::GetLevel() {
    return 0;
}

int32 UPalCharacterParameterComponent::GetLegHoldResistLevel() {
    return 0;
}

bool UPalCharacterParameterComponent::GetIsCapturedProcessing() {
    return false;
}

UPalIndividualCharacterParameter* UPalCharacterParameterComponent::GetIndividualParameter() const {
    return NULL;
}

float UPalCharacterParameterComponent::GetHPRate() {
    return 0.0f;
}

FFixedPoint64 UPalCharacterParameterComponent::GetHP() const {
    return FFixedPoint64{};
}

FHitResult UPalCharacterParameterComponent::GetHitGroundResult() const {
    return FHitResult{};
}

float UPalCharacterParameterComponent::GetFullStomach() {
    return 0.0f;
}

TEnumAsByte<EPhysicalSurface> UPalCharacterParameterComponent::GetFloorPhisicalSurface() const {
    return SurfaceType_Default;
}

FVector UPalCharacterParameterComponent::GetFloorLocation() const {
    return FVector{};
}

int32 UPalCharacterParameterComponent::GetDefense() {
    return 0;
}

int32 UPalCharacterParameterComponent::GetCraftSpeed_WorkSuitability(const EPalWorkSuitability WorkSuitability) {
    return 0;
}

int32 UPalCharacterParameterComponent::GetCraftSpeed() {
    return 0;
}

FGuid UPalCharacterParameterComponent::GetBaseCampId() const {
    return FGuid{};
}

void UPalCharacterParameterComponent::AddTrapMovingPanel(AActor* TrapActor) {
}

void UPalCharacterParameterComponent::AddTrapLegHold(AActor* TrapActor) {
}

void UPalCharacterParameterComponent::AddDyingHP(float AddHP) {
}

void UPalCharacterParameterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalCharacterParameterComponent, bIsCooping);
    DOREPLIFETIME(UPalCharacterParameterComponent, bIsEnableSendReticleTarget);
    DOREPLIFETIME(UPalCharacterParameterComponent, bIsEnableMuteki);
    DOREPLIFETIME(UPalCharacterParameterComponent, OverrideTargetLocation);
    DOREPLIFETIME(UPalCharacterParameterComponent, Trainer);
    DOREPLIFETIME(UPalCharacterParameterComponent, IndividualParameter);
    DOREPLIFETIME(UPalCharacterParameterComponent, IsCanSneakAttacked);
    DOREPLIFETIME(UPalCharacterParameterComponent, IsFriendBulletIgnore);
    DOREPLIFETIME(UPalCharacterParameterComponent, MaxHPRate_ForTowerBoss);
    DOREPLIFETIME(UPalCharacterParameterComponent, WorkAssignId);
    DOREPLIFETIME(UPalCharacterParameterComponent, WorkType);
    DOREPLIFETIME(UPalCharacterParameterComponent, WorkingState);
    DOREPLIFETIME(UPalCharacterParameterComponent, PossessStaticItemId);
    DOREPLIFETIME(UPalCharacterParameterComponent, bBeingRescued);
    DOREPLIFETIME(UPalCharacterParameterComponent, DyingHP);
    DOREPLIFETIME(UPalCharacterParameterComponent, DyingMaxHP);
    DOREPLIFETIME(UPalCharacterParameterComponent, ItemContainer);
    DOREPLIFETIME(UPalCharacterParameterComponent, IsImmortality);
    DOREPLIFETIME(UPalCharacterParameterComponent, UnreachableMapObjectRepInfoArray);
}


