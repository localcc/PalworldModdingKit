#pragma once
#include "CoreMinimal.h"
#include "PalStageModelBase.h"
#include "PalStageModelBossBattle.generated.h"

class UPalBossBattleInstanceModel;

UCLASS(Blueprintable)
class PAL_API UPalStageModelBossBattle : public UPalStageModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_InstanceModel, meta=(AllowPrivateAccess=true))
    UPalBossBattleInstanceModel* InstanceModel;
    
public:
    UPalStageModelBossBattle();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_InstanceModel();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBossBattleInstanceModel* GetInstanceModel() const;
    
};

