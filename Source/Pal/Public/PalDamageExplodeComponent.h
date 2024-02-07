#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalDamageInfo.h"
#include "PalDamageExplodeComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalDamageExplodeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamageDelegate_Ex, FPalDamageInfo, DamageInfo);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionDelayTime;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamageDelegate_Ex OnDamageDelegate_Ex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsExploded;
    
public:
    UPalDamageExplodeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnExplosionActor_Delay(AActor* Attacker, float DelayTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnExplosionActor(AActor* Attacker);
    
    UFUNCTION(BlueprintCallable)
    void ForceExplode(AActor* Attacker);
    
};

