#include "PalWeaponBase.h"

APalWeaponBase::APalWeaponBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BulletDeleteTime = 0.50f;
    this->BulletDecayStartRate = 1.00f;
    this->RecoilCurve = NULL;
    this->RecoilYawRange = 0.10f;
    this->RecoilPitchTotalMax = 2.00f;
    this->RecoilDecaySpeed = 1.00f;
    this->ShotCameraShake = NULL;
    this->WeaponCoopType = EWeaponCoopType::None;
    this->WeaponType = EPalWeaponType::None;
    this->IsRequiredBullet = true;
    this->ShootBlurMaterial = NULL;
    this->ShootBlurAlphaCurve = NULL;
    this->weaponBulletDamageReactionType = EPalDamageAnimationReactionType::Big;
    this->IsEmptyOtomoPal = false;
    this->CoolDownTime = 0.00f;
    this->IsTriggerOnlyFireWeapon = false;
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

void APalWeaponBase::RequestConsumeItem_ForThrowWeapon(const FName& StaticItemId, int32 ConsumeNum) {
}

void APalWeaponBase::RequestConsumeItem(const FName& StaticItemId, int32 ConsumeNum) {
}

bool APalWeaponBase::ReloadBullets() {
    return false;
}

void APalWeaponBase::PlaySoundWithOption(const FPalDataTableRowName_SoundID& ID, const FPalSoundOptions& Arg) {
}

void APalWeaponBase::PlaySound(const FPalDataTableRowName_SoundID& ID) {
}


void APalWeaponBase::OnStartAim_Implementation() {
}






void APalWeaponBase::OnEndAim_Implementation() {
}

void APalWeaponBase::OnDetachWeapon_Implementation(AActor* detachActor) {
}

void APalWeaponBase::OnCreatedBullet_Implementation(APalBullet* Bullet) {
}


void APalWeaponBase::OnAttachWeapon_Implementation(AActor* attachActor) {
}

bool APalWeaponBase::IsUseLeftHandAttach_Implementation() const {
    return false;
}

bool APalWeaponBase::IsHiddenWeapon() {
    return false;
}

bool APalWeaponBase::IsFullMagazine() const {
    return false;
}

bool APalWeaponBase::IsExistBulletInPlayerInventory() {
    return false;
}

bool APalWeaponBase::IsEnableAutoAim_Implementation() const {
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

float APalWeaponBase::GetRandomFloat(float Min, float Max) {
    return 0.0f;
}

float APalWeaponBase::GetParameterWithPassiveSkillEffect(float originalValue, EPalPassiveSkillEffectType EffectType) const {
    return 0.0f;
}

APalCharacter* APalWeaponBase::GetOwnerCharacter_Implementation() {
    return NULL;
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

FName APalWeaponBase::GetEquipSocketName_Implementation() {
    return NAME_None;
}


float APalWeaponBase::GetBlurModifierValue() {
    return 0.0f;
}

int32 APalWeaponBase::DecrementCurrentSelectPalSphere(int32 RequestConsumeNum, FName& UsedItemID) {
    return 0;
}

bool APalWeaponBase::DecrementBullet_Implementation() {
    return false;
}

void APalWeaponBase::ClearWeaponSkill() {
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


