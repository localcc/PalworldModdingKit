#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "Engine/EngineTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "BulletHoleDecalInfo.h"
#include "EPalDamageAnimationReactionType.h"
#include "EPalPassiveSkillEffectType.h"
#include "EPalPlayerDamageCameraShakeCategory.h"
#include "PalPassiveSkillEffect.h"
#include "PalBullet.generated.h"

class APalCharacter;
class UPrimitiveComponent;
class UProjectileMovementComponent;
class USphereComponent;

UCLASS(Blueprintable)
class APalBullet : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FDestroyBulletDelegate, UPrimitiveComponent*, HitComp, AActor*, OtherCharacter, UPrimitiveComponent*, OtherComp, const FHitResult&, Hi);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDestroyBulletDelegate OnDestroyDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* ProjectileMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalPlayerDamageCameraShakeCategory PlayerDamageCameraShake;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHitFriend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WeaponDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isDamageable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool AISoundEmitable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SneakAttackRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DeleteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DamageDecayStartRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LifeTimer;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalDamageAnimationReactionType weaponBulletDamageReactionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalPassiveSkillEffect> skillEffectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, FBulletHoleDecalInfo> BulletHoleDecalsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBulletHoleDecalInfo DefaultBulletHoleDecals;
    
    APalBullet(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWeaponDamage(int32 Damage);
    
    UFUNCTION(BlueprintCallable)
    void SetSneakAttackRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillEffectList(const TArray<FPalPassiveSkillEffect>& inList);
    
    UFUNCTION(BlueprintCallable)
    void SetDeleteTime(float DeleteSecound, float DecayStartRate);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageable(bool damageable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetBulletHoleDecal(const FHitResult& Hit, float LifeSpan, float FadeTime, float fadeScreenSize);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitToPalEnemy(UPrimitiveComponent* HitComp, APalCharacter* OtherCharacter, UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitToPalCharacter(UPrimitiveComponent* HitComp, APalCharacter* OtherCharacter, UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitToActor(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDestroy(UPrimitiveComponent* HitComp, AActor* OtherCharacter, UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlock(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDestroy(UPrimitiveComponent* HitComp, AActor* OtherCharacter, UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaponDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSneakAttackRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetParameterWithPassiveSkillEffect(float originalValue, EPalPassiveSkillEffectType EffectType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDecayDamageRate();
    
};

