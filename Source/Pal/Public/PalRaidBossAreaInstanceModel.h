#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EPalRaidBossAreaPhase.h"
#include "PalRaidBossAreaPhaseInfo.h"
#include "PalStageInstanceId.h"
#include "PalRaidBossAreaInstanceModel.generated.h"

class UDataLayerAsset;
class UPalRaidBossAreaInstanceModelStateMachine;

UCLASS(Blueprintable)
class PAL_API UPalRaidBossAreaInstanceModel : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid RaidBossAreaInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform StartPointTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform BaseCampPointTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform SummonAltarPointTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalStageInstanceId StageInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid RaidPalBoxInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid RaidAreaBaseCampId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid RaidSummonAltarInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerBaseCampId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid RequestPlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StaticItemId, meta=(AllowPrivateAccess=true))
    FName StaticItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PhaseInfo, meta=(AllowPrivateAccess=true))
    FPalRaidBossAreaPhaseInfo PhaseInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bRaidBossBattleStateFinishedStandby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBox StageAreaBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSurrenderRequested;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataLayerAsset* ReservedDataLayerAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalRaidBossAreaInstanceModelStateMachine* PhaseStateMachine;
    
public:
    UPalRaidBossAreaInstanceModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StaticItemId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PhaseInfo();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidPhaseTime_ForClient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetRaidBossAreaInstanceId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentPhaseRemainingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalRaidBossAreaPhaseInfo GetCurrentPhaseInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalRaidBossAreaPhase GetCurrentPhase() const;
    
};

