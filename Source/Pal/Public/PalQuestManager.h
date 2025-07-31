#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalLocalQuestLocationData.h"
#include "PalOrderedQuestSaveData.h"
#include "PalQuestReplicationData.h"
#include "PalQuestManager.generated.h"

class UDataTable;
class UPalCommonQuestRewardGiver;
class UPalIndividualCharacterParameter;
class UPalLocationBase;
class UPalQuestData;

UCLASS(Blueprintable)
class PAL_API UPalQuestManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateTrackingQuestId, const FName&, QuestId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatedQuestDelegate, const FName&, QuestId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOrderedQuestDelegate, const FName&, QuestId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompletedQuestDelegate, const FName&, QuestId);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOrderedQuestDelegate OnOrderedQuestDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdatedQuestDelegate OnUpdatedQuestDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompletedQuestDelegate OnCompletedQuestDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateTrackingQuestId OnUpdateTrackingQuestId;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalQuestData*> WaitingLoadQuestDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UPalQuestData*> OrderedQuestMap_ForServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalOrderedQuestSaveData> PreloadQuestSaveDataMap_ForServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OrderedQuestArray, meta=(AllowPrivateAccess=true))
    FPalQuestReplicationData QuestReplicationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FName> CompletedQuestNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* QuestDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> InitialOrderQuestIdArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalLocalQuestLocationData> LocalLocationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterParameter*> InRangeParameters;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalCommonQuestRewardGiver* CommonRewardGiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalOrderedQuestSaveData> CahcedSaveData_OrderedQuestData;
    
public:
    UPalQuestManager();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TrackingQuest(const FName& QuestName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTracking();
    
    UFUNCTION(BlueprintCallable)
    void OrderQuest_ServerInternal(const FName& QuestName, int32 FirstBlockIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdatedQuest_ServerInternal(UPalQuestData* UpdatedQuest);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_OrderedQuestArray();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRemovedLocation(const FGuid& LocationId, UPalLocationBase* Location);
    
    UFUNCTION(BlueprintCallable)
    void OnReadyQuest_ServerInternal(UPalQuestData* QuestData);
    
    UFUNCTION(BlueprintCallable)
    void OnDisplayCharacterHPGauge(UPalIndividualCharacterParameter* Parameter);
    
    UFUNCTION(BlueprintCallable)
    void OnDeleteCharacterHPGauge(UPalIndividualCharacterParameter* Parameter);
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedQuest_ServerInternal(UPalQuestData* CompletedQuest);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestOrdered(const FName& QuestId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestCompleted(const FName& QuestId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllQuestComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTrackingQuestId() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetQuestIdRowName() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalQuestData* GetQuestData(const FName& QuestId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNearestQuestLocationDistance(const FName& QuestId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPalQuestData*> GetAllOrderedQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetAllCompletedQuestId() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceCompleteQuest_ServerInternal(const FName& QuestName);
    
};

