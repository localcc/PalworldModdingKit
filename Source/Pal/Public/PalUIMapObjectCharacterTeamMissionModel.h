#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EPalElementType.h"
#include "EPalMapObjectCharacterTeamMissionState.h"
#include "PalCharacterTeamMissionInfo.h"
#include "PalInstanceID.h"
#include "PalMapObjectCharacterTeamMissionIndividualRepInfo.h"
#include "PalUIMapObjectCharacterTeamMissionIndividual.h"
#include "PalUIMapObjectCharacterTeamMissionModel.generated.h"

class UPalGuildCharacterTeamMission;
class UPalMapObjectCharacterTeamMissionAssignedInfo;
class UPalMapObjectCharacterTeamMissionFunctionsBase;
class UPalMapObjectCharacterTeamMissionModel;
class UPalUIMapObjectCharacterTeamMissionModel;

UCLASS(Blueprintable)
class PAL_API UPalUIMapObjectCharacterTeamMissionModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStateChangedDelegate, const EPalMapObjectCharacterTeamMissionState, LastState, const EPalMapObjectCharacterTeamMissionState, CurrentState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMultiDelegate, UPalUIMapObjectCharacterTeamMissionModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMultiDelegate OnChangedMissionDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMultiDelegate OnChangedAssignedInfoDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMultiDelegate OnUpdateReleasedMissionInfoDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMultiDelegate OnUpdateCompleteDateTimeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateChangedDelegate OnChangedStateDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalMapObjectCharacterTeamMissionFunctionsBase* Functions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalUIMapObjectCharacterTeamMissionIndividual> AssignedIndividualInfos;
    
public:
    UPalUIMapObjectCharacterTeamMissionModel();

    UFUNCTION(BlueprintCallable)
    void RequestUnselectAssignedCharacter(const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void RequestUnselectAll();
    
    UFUNCTION(BlueprintCallable)
    void RequestStopReplication();
    
    UFUNCTION(BlueprintCallable)
    void RequestStartReplication();
    
    UFUNCTION(BlueprintCallable)
    void RequestStartMission();
    
    UFUNCTION(BlueprintCallable)
    void RequestSelectMission(const FName MissionId);
    
    UFUNCTION(BlueprintCallable)
    void RequestSelectAuto();
    
    UFUNCTION(BlueprintCallable)
    void RequestSelectAssignedCharacter(const FPalInstanceID& IndividualId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateReleasedMissionInfo(UPalGuildCharacterTeamMission* OwnerGuildCharacterTeamMission);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedCompleteDateTime(UPalMapObjectCharacterTeamMissionModel* OwnerConcreteModel);
    
    UFUNCTION(BlueprintCallable)
    void OnReplicatedAssignedInfo(UPalMapObjectCharacterTeamMissionModel* OwnerConcreteModel);
    
    UFUNCTION(BlueprintCallable)
    void OnPreReplicatedRemoveAssignedInfo(const FPalMapObjectCharacterTeamMissionIndividualRepInfo& RepInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnPostReplicatedChangeAssignedInfo(const FPalMapObjectCharacterTeamMissionIndividualRepInfo& RepInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnPostReplicatedAddAssignedInfo(const FPalMapObjectCharacterTeamMissionIndividualRepInfo& RepInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedTargetMission(UPalMapObjectCharacterTeamMissionModel* OwnerConcreteModel);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedState(const EPalMapObjectCharacterTeamMissionState LastState, const EPalMapObjectCharacterTeamMissionState CurrentState);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedAssignedInfo_ServerInternal(UPalMapObjectCharacterTeamMissionAssignedInfo* AssignedInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MakeTransientAssignInfo(const FPalInstanceID& IndividualId, FPalUIMapObjectCharacterTeamMissionIndividual& OutAssignInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMaxAssigned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistAssignInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSelectableMissionInfos(TArray<FPalCharacterTeamMissionInfo>& OutInfos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainMissionSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMissionInfo(const FName MissionId, FPalCharacterTeamMissionInfo& OutInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetInProgressMissionCompleteDateTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalMapObjectCharacterTeamMissionState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentMissionInfo(FPalCharacterTeamMissionInfo& OutInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentElementalRequiredInfo(EPalElementType& OutRequiredElementType, int32& CurrentAssignedNum, int32& RequiredNum, bool& bSatisfiedCondition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetConcreteModelInstanceId(FGuid& OutID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAssignedIndividualInfos(TArray<FPalUIMapObjectCharacterTeamMissionIndividual>& OutIndividualInfos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateCurrentRewardRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalculateCurrentMissionRequiredSecondsByTeamStrength(const int32 TeamStrength) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalculateCurrentMissionRequiredSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalculateCharacterTeamStrength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalculateCharacterStrength(const FPalInstanceID& IndividualId) const;
    
};

