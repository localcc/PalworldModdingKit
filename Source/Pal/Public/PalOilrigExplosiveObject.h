#pragma once
#include "CoreMinimal.h"
#include "EPalOilrigType.h"
#include "PalDamageInfo.h"
#include "PalLevelObjectActor.h"
#include "PalOilrigHandledActorInterface.h"
#include "PalOilrigExplosiveObject.generated.h"

UCLASS(Blueprintable)
class PAL_API APalOilrigExplosiveObject : public APalLevelObjectActor, public IPalOilrigHandledActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalOilrigType SelfOilrigType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsExplodedFlag, meta=(AllowPrivateAccess=true))
    bool IsExplodedFlag;
    
public:
    APalOilrigExplosiveObject(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SyncDestroyObject_ToAll();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsExplodedFlag();
    
    UFUNCTION(BlueprintCallable)
    void OnEexplosion(FPalDamageInfo DamageInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ChangeDestroyedVisual_ToAll();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeDestroyedVisual_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeDefaultVisual_BP();
    

    // Fix for true pure virtual functions not being implemented
};

