#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectRaidBossSummonDelegateDelegate.h"
#include "PalMapObjectRaidBossSummonInterface.h"
#include "PalNetArchive.h"
#include "PalStageInstanceId.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectRaidBossSummon.generated.h"

class UPalDialogParameterBase;
class UPalUIMapObjectRaidBossSummonSelectionModel;
class UPalUserWidgetOverlayUI;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectRaidBossSummon : public UPalMapObjectConcreteModelBase, public IPalMapObjectRaidBossSummonInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectRaidBossSummonDelegate OnStartPerformDelegateInServer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SummonRequestPlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SummonRequestStaticItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartedSummonPerformanceInClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TargetStageInstanceId, meta=(AllowPrivateAccess=true))
    FPalStageInstanceId TargetStageInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> SelectItemMenuUIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> SelectBattleTypeMenuUIClass;
    
public:
    UPalMapObjectRaidBossSummon();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void RequestSummonRaidBoss_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestEnterNewRaidArea_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestEnterExistingRaidArea_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnStoneSelectionFromUI(UPalUIMapObjectRaidBossSummonSelectionModel* UIModel);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedBattleTypeResult(UPalUIMapObjectRaidBossSummonSelectionModel* UIModel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetStageInstanceId();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReceiveEnterRaidBossAreaResult(const bool bResult);
    
    UFUNCTION(BlueprintCallable)
    void OnReceiveConfirmStartRaidBossBattleResult(const bool bResult, UPalDialogParameterBase* Parameter);
    
    UFUNCTION(BlueprintCallable)
    void OnReceiveConfirmStartRaidBossAreaBattleResult(const bool bResult, UPalDialogParameterBase* Parameter);
    

    // Fix for true pure virtual functions not being implemented
};

