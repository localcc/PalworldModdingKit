#pragma once
#include "CoreMinimal.h"
#include "EPalDungeonInstanceBossState.h"
#include "PalDungeonGimmickUnlockableDoor.h"
#include "PalDungeonGimmickUnlockableDoor_DefeatBoss.generated.h"

class UPalDungeonInstanceModel;

UCLASS(Blueprintable)
class PAL_API APalDungeonGimmickUnlockableDoor_DefeatBoss : public APalDungeonGimmickUnlockableDoor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BossState, meta=(AllowPrivateAccess=true))
    EPalDungeonInstanceBossState BossState;
    
public:
    APalDungeonGimmickUnlockableDoor_DefeatBoss(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_BossState();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeBossStateImpl(const EPalDungeonInstanceBossState ToState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeBossState_ServerInternal(UPalDungeonInstanceModel* InstanceModel);
    
};

