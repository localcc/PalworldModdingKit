#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EPalMapObjectCharacterTeamMissionState.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalNetArchive.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectCharacterTeamMissionModel.generated.h"

class UPalGroupGuildBase;
class UPalMapObjectCharacterTeamMissionAssignedInfo;
class UPalMapObjectCharacterTeamMissionFunctionsBase;
class UPalMapObjectCharacterTeamMissionModel;
class UPalMapObjectItemContainerModule;
class UPalUserWidgetOverlayUI;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectCharacterTeamMissionModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStateChangedDelegate, const EPalMapObjectCharacterTeamMissionState, LastState, const EPalMapObjectCharacterTeamMissionState, CurrentState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMultiDelegate, UPalMapObjectCharacterTeamMissionModel*, Self);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMultiDelegate OnChangedTargetMissionDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMultiDelegate OnReplicatedAssignedInfoDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMultiDelegate OnUpdatedCompleteDateTimeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateChangedDelegate OnChangedStateDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TargetMissionId, meta=(AllowPrivateAccess=true))
    FName TargetMissionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AssignedInfo, meta=(AllowPrivateAccess=true))
    UPalMapObjectCharacterTeamMissionAssignedInfo* AssignedInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EPalMapObjectCharacterTeamMissionState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FDateTime MissionStartDateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MissionCompleteDateTime, meta=(AllowPrivateAccess=true))
    FDateTime MissionCompleteDateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> MissionSelectUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalMapObjectCharacterTeamMissionFunctionsBase> BlueprintFunctionClass;
    
public:
    UPalMapObjectCharacterTeamMissionModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void RequestUnselectAssignedCharacter_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestUnselectAll_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void RequestStartMission_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void RequestSelectMission_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestSelectAuto_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void RequestSelectAssignedCharacter_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestCancelInProgressMission_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateItemContainerContents_ServerInternal(UPalMapObjectItemContainerModule* Module);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetMissionId(const FName OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State(const EPalMapObjectCharacterTeamMissionState OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionCompleteDateTime(const FDateTime OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AssignedInfo();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnExitPlayerGuild_ServerInternal(const UPalGroupGuildBase* Guild, const FGuid& PlayerUId);
    
};

