#pragma once
#include "CoreMinimal.h"
#include "PalStageModelBase.h"
#include "PalStageModelDungeon.generated.h"

class UPalDungeonInstanceModel;
class UPalStageModelDungeon;

UCLASS(Blueprintable)
class PAL_API UPalStageModelDungeon : public UPalStageModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, UPalStageModelDungeon*, SelfModel);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMulticastDelegate OnRepInstanceModelDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_InstanceModel, meta=(AllowPrivateAccess=true))
    UPalDungeonInstanceModel* InstanceModel;
    
public:
    UPalStageModelDungeon();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_InstanceModel();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalDungeonInstanceModel* GetInstanceModel() const;
    
};

