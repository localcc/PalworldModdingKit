#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectRaidBossSummonDelegateDelegate.h"
#include "PalMapObjectRaidBossSummonInterface.h"
#include "PalStageInstanceId.h"
#include "PalMapObjectRaidBossAreaSummon.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectRaidBossAreaSummon : public UPalMapObjectConcreteModelBase, public IPalMapObjectRaidBossSummonInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid RaidBossAreaInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TargetStageInstanceId, meta=(AllowPrivateAccess=true))
    FPalStageInstanceId TargetStageInstanceId;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectRaidBossSummonDelegate OnStartPerformDelegateInServer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectRaidBossSummonDelegate OnFinishPerformDelegateInServer;
    
    UPalMapObjectRaidBossAreaSummon();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void RequestStartRaidBoss_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetStageInstanceId();
    
    UFUNCTION(BlueprintCallable)
    void OnReceiveSummonConfirmationResult(const bool bResult);
    

    // Fix for true pure virtual functions not being implemented
};

