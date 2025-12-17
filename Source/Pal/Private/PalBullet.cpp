#include "PalBullet.h"
#include "Components/SphereComponent.h"
#include "PalProjectileMovementComponent.h"

APalBullet::APalBullet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
    this->CollisionComp = (USphereComponent*)RootComponent;
    this->ProjectileMovement = CreateDefaultSubobject<UPalProjectileMovementComponent>(TEXT("ProjectileComp"));
    this->PlayerDamageCameraShake = EPalPlayerDamageCameraShakeCategory::Gun_S;
    this->bIsHitFriend = false;
    this->WeaponDamage = 0;
    this->PvPWeaponDamageRate = 1.00f;
    this->PvPBuildingDamageRate = 1.00f;
    this->PvPPlayerToGuildPalDamageRate = 1.00f;
    this->isDamageable = true;
    this->AISoundEmitable = true;
    this->SneakAttackRate = 2.00f;
    this->DeleteTime = -1.00f;
    this->DamageDecayStartRate = -1.00f;
    this->LifeTimer = 0.00f;
    this->weaponBulletDamageReactionType = EPalDamageAnimationReactionType::Big;
    this->bUsePool = false;
}

void APalBullet::SetWeaponDamage(int32 Damage) {
}

void APalBullet::SetSneakAttackRate(float Rate) {
}

void APalBullet::SetSkillEffectList(const TArray<FPalPassiveSkillEffect>& inList) {
}

void APalBullet::SetRandomStream(FRandomStream Stream) {
}

void APalBullet::SetPvPWeaponDamageRate(float Rate) {
}

void APalBullet::SetPvPPlayerToGuildPalDamageRate(float Rate) {
}

void APalBullet::SetPvPBuildingDamageRate(float Rate) {
}

void APalBullet::SetOwnerStaticItemId(const FName& ItemId) {
}

void APalBullet::SetDeleteTime(float DeleteSecound, float DecayStartRate) {
}

void APalBullet::SetDamageable(bool damageable) {
}

bool APalBullet::SetBulletHoleDecal_Implementation(const FHitResult& Hit, float LifeSpan, float FadeTime, float fadeScreenSize) {
    return false;
}

void APalBullet::ResetLifeTimer() {
}

void APalBullet::RegisterIgnoreActor(AActor* Actor) {
}

void APalBullet::RegisterCannotHitAreaBox(UBoxComponent* BoxComp) {
}

void APalBullet::OnHitWater_Implementation(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, const FHitResult& Hit) {
}

void APalBullet::OnHitToPalEnemy_Implementation(UPrimitiveComponent* HitComp, APalCharacter* OtherCharacter, UPrimitiveComponent* OtherComp, const FHitResult& Hit) {
}

void APalBullet::OnHitToPalCharacter_Implementation(UPrimitiveComponent* HitComp, APalCharacter* OtherCharacter, UPrimitiveComponent* OtherComp, const FHitResult& Hit) {
}

void APalBullet::OnHitToActor_Implementation(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, const FHitResult& Hit) {
}

void APalBullet::OnHit_Implementation(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, const FHitResult& Hit) {
}

void APalBullet::OnDestroy_Implementation(UPrimitiveComponent* HitComp, AActor* OtherCharacter, UPrimitiveComponent* OtherComp, const FHitResult& Hit) {
}

void APalBullet::OnBlock_Implementation(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void APalBullet::OnBeginOverlap(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit) {
}

bool APalBullet::IsDestroy_Implementation(UPrimitiveComponent* HitComp, AActor* OtherCharacter, UPrimitiveComponent* OtherComp, const FHitResult& Hit) {
    return false;
}

int32 APalBullet::GetWeaponDamage() const {
    return 0;
}

float APalBullet::GetSneakAttackRate() {
    return 0.0f;
}

FRandomStream APalBullet::GetRandomStream() const {
    return FRandomStream{};
}

float APalBullet::GetPvPWeaponDamageRate() const {
    return 0.0f;
}

float APalBullet::GetPvPPlayerToGuildPalDamageRate() const {
    return 0.0f;
}

float APalBullet::GetPvPBuildingDamageRate() const {
    return 0.0f;
}

float APalBullet::GetParameterWithPassiveSkillEffect(float originalValue, EPalPassiveSkillEffectType EffectType) const {
    return 0.0f;
}

FName APalBullet::GetOwnerStaticItemId() const {
    return NAME_None;
}

float APalBullet::GetDecayDamageRate() {
    return 0.0f;
}


