#pragma once
#include "CoreMinimal.h"
#include "PalStageModelBase.h"
#include "PalStageModelRaidBossArea.generated.h"

class UPalRaidBossAreaInstanceModel;
class UPalStageModelRaidBossArea;

UCLASS(Blueprintable)
class PAL_API UPalStageModelRaidBossArea : public UPalStageModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, UPalStageModelRaidBossArea*, SelfModel);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMulticastDelegate OnRepInstanceModelDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_InstanceModel, meta=(AllowPrivateAccess=true))
    UPalRaidBossAreaInstanceModel* InstanceModel;
    
public:
    UPalStageModelRaidBossArea();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_InstanceModel();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalRaidBossAreaInstanceModel* GetInstanceModel() const;
    
};

