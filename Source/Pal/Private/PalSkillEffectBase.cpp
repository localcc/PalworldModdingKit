#include "PalSkillEffectBase.h"
#include "Templates/SubclassOf.h"

APalSkillEffectBase::APalSkillEffectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectSize = 1.00f;
    this->MinSize = 0.10f;
    this->MaxSize = 9999.00f;
    this->LifeTime = 15.00f;
    this->AttackFilter = NULL;
    this->HitFilterGround = NULL;
    this->HitFilterCustomRange = NULL;
    this->AttackTarget = NULL;
    this->SoundPlayer = NULL;
}

void APalSkillEffectBase::StopAllNiagaraSound() {
}

void APalSkillEffectBase::StopAkSound() {
}

FTimerHandle APalSkillEffectBase::SetTimeCallbackBySkillEffectSpawnParameter(const UObject* WorldContextObject, const FSkillEffectSpawnParameter& Parameter, UObject* callObject, FSkillEffectTimeDelegate timeDelegate) {
    return FTimerHandle{};
}

void APalSkillEffectBase::SetActorTransformByOwner(const AActor* SkillOwner, const FVector& MyOffset) {
}

void APalSkillEffectBase::SetActionTargetActor(AActor* Target) {
}

void APalSkillEffectBase::PlayAkSound(UAkAudioEvent* AudioEvent) {
}


void APalSkillEffectBase::LifeTimeCallback() {
}

bool APalSkillEffectBase::IsSelfOwnerCharacterOrRaider(AActor* HitTarget) {
    return false;
}

bool APalSkillEffectBase::IsRidden() {
    return false;
}

void APalSkillEffectBase::Initialize(const AActor* SkillOwner, const FVector& MyOffset, AActor* Target, FRandomStream NewRandomStream) {
}

APalCharacter* APalSkillEffectBase::GetOwnerCharacter() const {
    return NULL;
}

FVector APalSkillEffectBase::GetActionTargetLocation() const {
    return FVector{};
}

AActor* APalSkillEffectBase::GetActionTargetActor() const {
    return NULL;
}

APalSkillEffectBase* APalSkillEffectBase::CreateChildSkillEffect(TSubclassOf<APalSkillEffectBase> EffectClass, FTransform SpawnTransform, FRandomStream NewRandomStream, ESpawnActorCollisionHandlingMethod collisionMethod, AActor* ownerActor) {
    return NULL;
}


