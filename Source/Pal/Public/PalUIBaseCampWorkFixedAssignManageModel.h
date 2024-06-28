#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EPalUIFixedAssignManageListSortType.h"
#include "PalInstanceID.h"
#include "PalUIBaseCampWorkFixedAssignInfo.h"
#include "PalUIBaseCampWorkFixedAssignManageModel.generated.h"

class UPalBaseCampWorkCollectionReplicationList;
class UPalIndividualCharacterContainer;
class UPalUIBaseCampWorkFixedAssignManageModel;

UCLASS(Blueprintable)
class PAL_API UPalUIBaseCampWorkFixedAssignManageModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalUIBaseCampWorkFixedAssignManageModel*, Self);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfDelegate OnUpdateWorkInBaseCampDelegate;
    
    UPalUIBaseCampWorkFixedAssignManageModel();

    UFUNCTION(BlueprintCallable)
    void SortFixedAssignableWorks(EPalUIFixedAssignManageListSortType SortType, const TArray<FPalUIBaseCampWorkFixedAssignInfo>& OriginalArray, TArray<FPalUIBaseCampWorkFixedAssignInfo>& OutArray);
    
    UFUNCTION(BlueprintCallable)
    void RequestUnassignWork(const FGuid& WorkId, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void RequestUnassign(const FPalUIBaseCampWorkFixedAssignInfo& TargetInfo, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void RequestStartReplicateWorkInBaseCamp();
    
    UFUNCTION(BlueprintCallable)
    void RequestFixedAssignWork(const FGuid& WorkId, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void RequestFixedAssign(const FPalUIBaseCampWorkFixedAssignInfo& TargetInfo, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void RequestEndReplicateWorkInBaseCamp();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateWorkInBaseCamp(UPalBaseCampWorkCollectionReplicationList* ReplicationList);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterContainer* GetTargetBaseCampWorkerCharacterContainer() const;
    
    UFUNCTION(BlueprintCallable)
    void GetFixedAssignableWorks(TArray<FPalUIBaseCampWorkFixedAssignInfo>& OutWorks);
    
};

