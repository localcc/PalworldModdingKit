#include "PalPartnerSkillParameterComponent.h"
#include "Templates/SubclassOf.h"

UPalPartnerSkillParameterComponent::UPalPartnerSkillParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkillName = TEXT("Unknown");
    this->WazaID = EPalWazaID::None;
    this->bCanThrowPal = true;
    this->bCanChangeWeapon = true;
    this->bIsToggleKey = false;
    this->bIdlelCostDecreaseEveryFrame = false;
    this->bIsExecSkillContinuation = false;
    this->bIsRunning = false;
    this->bIsOverheat = false;
    this->bIsExecuting = false;
    this->SkillModule = NULL;
    this->FunnelCharacterClass = NULL;
    this->FunnelControllerClass = NULL;
    this->FunnelAttackWazaID = EPalWazaID::None;
    this->PassiveSkill = NULL;
}

void UPalPartnerSkillParameterComponent::Stop() {
}

void UPalPartnerSkillParameterComponent::Start() {
}

void UPalPartnerSkillParameterComponent::SetName(FName Name) {
}

void UPalPartnerSkillParameterComponent::SetDisableGlider_ToAll_Implementation(FName flagName, bool isDisable) {
}

void UPalPartnerSkillParameterComponent::SetDisableFunnel(FName flagName, bool isDisable) {
}

void UPalPartnerSkillParameterComponent::SetDisableFlagsBySetting_Implementation(bool isDisable) {
}

void UPalPartnerSkillParameterComponent::SetCoopFlag_ForServer(bool IsCoop) {
}

void UPalPartnerSkillParameterComponent::Recover() {
}

void UPalPartnerSkillParameterComponent::OnUpdateInventoryContainer(UPalItemContainer* Container) {
}

void UPalPartnerSkillParameterComponent::OnRideInactivated() {
}

void UPalPartnerSkillParameterComponent::OnRideActivated() {
}

void UPalPartnerSkillParameterComponent::OnOwnerCharacterSpawned(FPalInstanceID ID) {
}

void UPalPartnerSkillParameterComponent::OnInitializedCharacter(APalCharacter* OwnerCharacter) {
}

void UPalPartnerSkillParameterComponent::OnInactivatedAsWorker() {
}

void UPalPartnerSkillParameterComponent::OnInactivatedAsPartner() {
}

void UPalPartnerSkillParameterComponent::OnInactivatedAsOtomoHolder() {
}

void UPalPartnerSkillParameterComponent::OnExec() {
}

void UPalPartnerSkillParameterComponent::OnComplated() {
}

void UPalPartnerSkillParameterComponent::OnActivatedAsWorker() {
}

void UPalPartnerSkillParameterComponent::OnActivatedAsPartner() {
}

void UPalPartnerSkillParameterComponent::OnActivatedAsOtomoHolder() {
}

bool UPalPartnerSkillParameterComponent::IsToggleKey() const {
    return false;
}

bool UPalPartnerSkillParameterComponent::IsRunning() const {
    return false;
}

bool UPalPartnerSkillParameterComponent::IsRestrictedByItems(AActor* Trainer) const {
    return false;
}

bool UPalPartnerSkillParameterComponent::IsPlayerTrigger() const {
    return false;
}

bool UPalPartnerSkillParameterComponent::IsOverheat() const {
    return false;
}

bool UPalPartnerSkillParameterComponent::IsExistActiveSkill() const {
    return false;
}

bool UPalPartnerSkillParameterComponent::IsDisableGlider() const {
    return false;
}

bool UPalPartnerSkillParameterComponent::IsDisableFunnel() const {
    return false;
}

bool UPalPartnerSkillParameterComponent::IsCoolDown() const {
    return false;
}

float UPalPartnerSkillParameterComponent::GetWazaPowerRate(EPalWazaID Waza) const {
    return 0.0f;
}

EPalWazaID UPalPartnerSkillParameterComponent::GetWazaID() const {
    return EPalWazaID::None;
}

FName UPalPartnerSkillParameterComponent::GetSkillName() const {
    return NAME_None;
}

void UPalPartnerSkillParameterComponent::GetRideParameter(FPalPartnerSkillParameterRide& OutParam) {
}

TArray<FPalDataTableRowName_ItemData> UPalPartnerSkillParameterComponent::GetRestrictionItems() const {
    return TArray<FPalDataTableRowName_ItemData>();
}

FFixedPoint UPalPartnerSkillParameterComponent::GetMainDamage() const {
    return FFixedPoint{};
}

float UPalPartnerSkillParameterComponent::GetEffectTimeRatio() {
    return 0.0f;
}

FFixedPoint UPalPartnerSkillParameterComponent::GetEffectTimeMax() const {
    return FFixedPoint{};
}

FFixedPoint UPalPartnerSkillParameterComponent::GetEffectTime() const {
    return FFixedPoint{};
}

float UPalPartnerSkillParameterComponent::GetCoolDownTimeRatio() {
    return 0.0f;
}

FFixedPoint UPalPartnerSkillParameterComponent::GetCoolDownTimeMax() const {
    return FFixedPoint{};
}

FFixedPoint UPalPartnerSkillParameterComponent::GetCoolDownTime() const {
    return FFixedPoint{};
}

float UPalPartnerSkillParameterComponent::GetActiveSkillMainValueByRank() const {
    return 0.0f;
}

void UPalPartnerSkillParameterComponent::ForceOverheat() {
}

void UPalPartnerSkillParameterComponent::ExecDuring(float DeltaTime) {
}

UPalCoopSkillModuleBase* UPalPartnerSkillParameterComponent::CreateSkillModule(TSubclassOf<UPalCoopSkillModuleBase> SkillModuleClass) {
    return NULL;
}

bool UPalPartnerSkillParameterComponent::CanOpenTreasure(EPalMapObjectTreasureGradeType TreasureGrade) const {
    return false;
}

bool UPalPartnerSkillParameterComponent::CanExec() const {
    return false;
}

bool UPalPartnerSkillParameterComponent::CanChangeWeapon() const {
    return false;
}

void UPalPartnerSkillParameterComponent::CallOnToggleExecute_ToAll_Implementation(bool Execute) {
}

void UPalPartnerSkillParameterComponent::CallOnStop_ToAll_Implementation() {
}

void UPalPartnerSkillParameterComponent::CallOnStartSearchEffect_ToAll_Implementation(const FGuid& RequestPlayerUId, const FPalCoopSkillSearchEffectParameter& EffectParam) {
}

void UPalPartnerSkillParameterComponent::CallOnStart_ToAll_Implementation() {
}

void UPalPartnerSkillParameterComponent::CallOnOverheat_ToAll_Implementation() {
}

void UPalPartnerSkillParameterComponent::CallOnEffectTimeChanged_ToAll_Implementation(FFixedPoint NewEffectTime, FFixedPoint NewEffectTimeMax) {
}

void UPalPartnerSkillParameterComponent::CallOnCoolDownTimeChanged_ToAll_Implementation(FFixedPoint NewCoolDownTime, FFixedPoint NewCoolDownTimeMax) {
}

void UPalPartnerSkillParameterComponent::CallOnCoolDownCompleted_ToAll_Implementation() {
}


