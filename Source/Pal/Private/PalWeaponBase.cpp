#include "PalWeaponBase.h"

APalWeaponBase::APalWeaponBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BulletDeleteTime = 0.50f;
    this->BulletDeleteTimePVP = 0.50f;
    this->BulletDecayStartRate = 1.00f;
    this->RecoilCurve = NULL;
    this->RecoilYawRange = 0.10f;
    this->RecoilPitchTotalMax = 2.00f;
    this->RecoilDecaySpeed = 1.00f;
    this->ShotCameraShake = NULL;
    this->ShotForceFeedbackEffect = NULL;
    this->WeaponCoopType = EWeaponCoopType::None;
    this->WeaponType = EPalWeaponType::None;
    this->IsRequiredBullet = true;
    this->IsRequiredBulletForAltFire = false;
    this->ShootBlurMaterial = NULL;
    this->ShootBlurAlphaCurve = NULL;
    this->weaponBulletDamageReactionType = EPalDamageAnimationReactionType::Big;
    this->IsEmptyOtomoPal = false;
    this->CoolDownTime = 0.00f;
    this->IsTriggerOnlyFireWeapon = false;
    this->IsTriggerOnlyAltFireWeapon = false;
    this->PvPDamageRate = 1.00f;
    this->PvPBuildingDamageRate = 1.00f;
    this->PvPPlayerToGuildPalDamageRate = 1.00f;
    this->IsInfinityMagazine = false;
    this->IsOverrideAnimRateScale = false;
    this->OverrideAnimRateScale = 1.00f;
    this->IsOverrideTargetRayCastMaxDegree = false;
    this->OverrideTargetRayCastMaxDegree = 30.00f;
    this->ShootBlurMaterialDynamic = NULL;
    this->ownWeaponStaticData = NULL;
    this->ownWeaponDynamicData = NULL;
    this->PalSoundSlotCache = NULL;
    this->RecoilPowerRate = 1.00f;
    this->IsScopeMode = false;
    this->IsOneBulletReloadWeapon = false;
    this->DelayDestorySecond = 0.00f;
    this->IsUnnecessaryDynamicData = false;
    this->ShooterFlagPriority = EPalShooterFlagContainerPriority::Weapon;
    this->BackWeaponClass = NULL;
    this->BackWeaponModel = NULL;
    this->LoadoutSelectorIndex = 0;
}

void APalWeaponBase::UnbindGetWeaponDamageDelegate() {
}

UPalDynamicWeaponItemDataBase* APalWeaponBase::TryGetDynamicWeaponData() const {
    return NULL;
}

void APalWeaponBase::StartCoolDown(float Rate) {
}

void APalWeaponBase::SetupWeaponSkill() {
}

void APalWeaponBase::SetHiddenWeaponMyself(bool isHidden) {
}

void APalWeaponBase::SetHiddenWeaponDefault(bool isHidden) {
}

void APalWeaponBase::SetHiddenWeapon(FName flagName, bool isHidden) {
}

void APalWeaponBase::SendWeaponNotify(EWeaponNotifyType Type) {
}

bool APalWeaponBase::SeekRightHandOpen_Implementation() const {
    return false;
}

bool APalWeaponBase::SeekLeftHandOpen_Implementation() const {
    return false;
}

void APalWeaponBase::RPCDummy_Implementation() {
}

void APalWeaponBase::ReserveSummonWeapon() {
}

void APalWeaponBase::RequestConsumeItem_ForThrowWeapon(const FName& StaticItemId, int32 ConsumeNum) {
}

void APalWeaponBase::RequestConsumeItem(const FName& StaticItemId, int32 ConsumeNum) {
}

bool APalWeaponBase::ReloadBullets() {
    return false;
}

void APalWeaponBase::ReleaseSummonWeapon() {
}

void APalWeaponBase::PlaySoundWithOption(const FPalDataTableRowName_SoundID& ID, const FPalSoundOptions& Arg) {
}

void APalWeaponBase::PlaySound(const FPalDataTableRowName_SoundID& ID) {
}


void APalWeaponBase::OnStartAim_Implementation() {
}






void APalWeaponBase::OnPullCancel_Implementation() {
}


void APalWeaponBase::OnEndAim_Implementation() {
}

void APalWeaponBase::OnDetachWeapon_Implementation(AActor* detachActor) {
}

void APalWeaponBase::OnCreatedDynamicItemDataInClient(UPalDynamicItemDataBase* CreatedItemData) {
}

void APalWeaponBase::OnCreatedBullet_Implementation(APalBullet* Bullet) {
}


void APalWeaponBase::OnAttachWeapon_Implementation(AActor* attachActor) {
}

bool APalWeaponBase::IsUseLeftHandAttach_Implementation() const {
    return false;
}


bool APalWeaponBase::IsLocallyControlledWeapon() const {
    return false;
}

bool APalWeaponBase::IsHiddenWeapon() {
    return false;
}

bool APalWeaponBase::IsFullMagazine() const {
    return false;
}

bool APalWeaponBase::IsExistBulletInPlayerInventory() const {
    return false;
}

bool APalWeaponBase::IsExistAltFireBulletInPlayerInventory() const {
    return false;
}

bool APalWeaponBase::IsEnableAutoAim_Implementation() const {
    return false;
}

bool APalWeaponBase::IsEnableAltFire_Implementation() const {
    return false;
}

bool APalWeaponBase::IsEmptyMagazine_Implementation() const {
    return false;
}

bool APalWeaponBase::IsCoolDown() const {
    return false;
}



int32 APalWeaponBase::GetWeaponDamageFromDelegate_Implementation() const {
    return 0;
}

int32 APalWeaponBase::GetWeaponDamage_forPlayerFlamethrower() const {
    return 0;
}

int32 APalWeaponBase::GetWeaponDamage_Implementation() const {
    return 0;
}

int32 APalWeaponBase::GetWeaponBaseDamage() const {
    return 0;
}

AActor* APalWeaponBase::GetWeaponAttacker_Implementation() {
    return NULL;
}

TArray<FPalSpecialAttackRateInfo> APalWeaponBase::GetSpecialAttackRateInfos() const {
    return TArray<FPalSpecialAttackRateInfo>();
}

float APalWeaponBase::GetSneakAttackRate() {
    return 0.0f;
}

TArray<FPalPassiveSkillEffect> APalWeaponBase::GetSkillEffectList() {
    return TArray<FPalPassiveSkillEffect>();
}

float APalWeaponBase::GetShooterComponentBlurRate() {
    return 0.0f;
}

void APalWeaponBase::GetRequiredBulletName(FName& outName) {
}

float APalWeaponBase::GetRemainingCoolDownTime() const {
    return 0.0f;
}

int32 APalWeaponBase::GetRemainBulletCount_Implementation() const {
    return 0;
}

FRandomStream APalWeaponBase::GetRandomStream() const {
    return FRandomStream{};
}

float APalWeaponBase::GetRandomFloat(float Min, float Max) {
    return 0.0f;
}

float APalWeaponBase::GetPvPPlayerToGuildPalDamageRate_Implementation() const {
    return 0.0f;
}

float APalWeaponBase::GetPvPBuildingDamageRate_Implementation() const {
    return 0.0f;
}

float APalWeaponBase::GetParameterWithPassiveSkillEffect(float originalValue, EPalPassiveSkillEffectType EffectType) const {
    return 0.0f;
}

APalCharacter* APalWeaponBase::GetOwnerCharacter_Implementation() const {
    return NULL;
}


int32 APalWeaponBase::GetNeedSpawnSummonWeaponCount() {
    return 0;
}

int32 APalWeaponBase::GetMaxSummonCount() {
    return 0;
}

USceneComponent* APalWeaponBase::GetMainMesh_Implementation() {
    return NULL;
}

int32 APalWeaponBase::GetMagazineSize() const {
    return 0;
}

FTransform APalWeaponBase::GetLeftHandTransform_Implementation() const {
    return FTransform{};
}

FPalItemId APalWeaponBase::GetItemId() const {
    return FPalItemId{};
}

int32 APalWeaponBase::GetInventoryBulletCount() const {
    return 0;
}

FName APalWeaponBase::GetEquipSocketName_Implementation() {
    return NAME_None;
}

float APalWeaponBase::GetDurability() const {
    return 0.0f;
}


FVector APalWeaponBase::GetBulletShootRootLocation_Implementation() {
    return FVector{};
}

float APalWeaponBase::GetBulletDeleteTime() const {
    return 0.0f;
}

float APalWeaponBase::GetBlurModifierValue() {
    return 0.0f;
}

FName APalWeaponBase::GetAltFireActionName() const {
    return NAME_None;
}

int32 APalWeaponBase::DecrementCurrentSelectPalSphere(int32 RequestConsumeNum, FName& UsedItemID) {
    return 0;
}

bool APalWeaponBase::DecrementBullet_Implementation() {
    return false;
}

void APalWeaponBase::DecreaseDurabilityWithValue(float Durability) {
}

void APalWeaponBase::DecreaseDurability() {
}

void APalWeaponBase::ClearWeaponSkill() {
}

void APalWeaponBase::ClearSummonWeapon() {
}

bool APalWeaponBase::CanUseAltFire_Implementation() const {
    return false;
}

bool APalWeaponBase::CanReserveSummonWeapon() {
    return false;
}

bool APalWeaponBase::CanDealDamageWeapon_Implementation() const {
    return false;
}

float APalWeaponBase::CalcStability_Implementation() {
    return 0.0f;
}

float APalWeaponBase::CalcRange_Implementation() {
    return 0.0f;
}

float APalWeaponBase::CalcDPS_Implementation() {
    return 0.0f;
}

float APalWeaponBase::CalcAccuracy_Implementation() {
    return 0.0f;
}

void APalWeaponBase::ApplyOverrideMaterial_ForUI() {
}


