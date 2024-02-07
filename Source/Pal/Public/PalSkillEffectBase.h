#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "PalNiagaraSoundStopInterface.h"
#include "SkillEffectSpawnParameter.h"
#include "SkillEffectTimeDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "PalSkillEffectBase.generated.h"

class APalCharacter;
class APalSkillEffectBase;
class UAkAudioEvent;
class UObject;
class UPalAttackFilter;
class UPalHitFilter;
class UPalSoundPlayer;

UCLASS(Blueprintable)
class APalSkillEffectBase : public AActor, public IPalNiagaraSoundStopInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalAttackFilter* AttackFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalHitFilter* HitFilterGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalHitFilter* HitFilterCustomRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttackTarget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle LifeTimeHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalSoundPlayer* SoundPlayer;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStream;
    
    APalSkillEffectBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopAllNiagaraSound();
    
    UFUNCTION(BlueprintCallable)
    void StopAkSound();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FTimerHandle SetTimeCallbackBySkillEffectSpawnParameter(const UObject* WorldContextObject, const FSkillEffectSpawnParameter& Parameter, UObject* callObject, FSkillEffectTimeDelegate timeDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetActorTransformByOwner(const AActor* SkillOwner, const FVector& MyOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetActionTargetActor(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void PlayAkSound(UAkAudioEvent* AudioEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialize();
    
private:
    UFUNCTION(BlueprintCallable)
    void LifeTimeCallback();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelfOwnerCharacterOrRaider(AActor* HitTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRidden();
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const AActor* SkillOwner, const FVector& MyOffset, AActor* Target, FRandomStream NewRandomStream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetOwnerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActionTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActionTargetActor() const;
    
    UFUNCTION(BlueprintCallable)
    APalSkillEffectBase* CreateChildSkillEffect(TSubclassOf<APalSkillEffectBase> EffectClass, FTransform SpawnTransform, FRandomStream NewRandomStream, ESpawnActorCollisionHandlingMethod collisionMethod, AActor* ownerActor);
    

    // Fix for true pure virtual functions not being implemented
};

