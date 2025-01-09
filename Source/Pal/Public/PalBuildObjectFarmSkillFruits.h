#pragma once
#include "CoreMinimal.h"
#include "EPalFarmSkillFruitsState.h"
#include "PalBuildObject.h"
#include "PalBuildObjectFarmSkillFruits.generated.h"

class AActor;
class APalMapObjectFarmSkillFruitsTree;
class UAkAudioEvent;
class UNiagaraSystem;
class UPalMapObjectConcreteModelBase;

UCLASS(Blueprintable)
class PAL_API APalBuildObjectFarmSkillFruits : public APalBuildObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* GrowupFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HarvestSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepSkillFruitsTree, meta=(AllowPrivateAccess=true))
    APalMapObjectFarmSkillFruitsTree* SkillFruitsTree;
    
public:
    APalBuildObjectFarmSkillFruits(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateState(EPalFarmSkillFruitsState NextCropState);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateProductSlot_ServerInternal(int32 ProductIndex, FName StaticItemId);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteractHarvest(int32 ProductIndex, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnSetConcreteModelAfterAvailable(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION(BlueprintCallable)
    void OnRepSkillFruitsTree();
    
};

