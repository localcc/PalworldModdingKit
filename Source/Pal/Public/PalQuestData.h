#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalCommonQuestRewardData.h"
#include "PalOrderedQuestSaveData.h"
#include "PalQuestData.generated.h"

class UPalQuestBlock;
class UPalQuestData;

UCLASS(Blueprintable)
class PAL_API UPalQuestData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatedQuestDelegate, UPalQuestData*, UpdatedQuest);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReadyQuestData, UPalQuestData*, SelfQuest);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompleteQuestDelegate, UPalQuestData*, CompletedQuest);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdatedQuestDelegate OnUpdatedQuestInServerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompleteQuestDelegate OnCompletedQuestInServerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReadyQuestData OnReadyQuestData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentBlock, meta=(AllowPrivateAccess=true))
    UPalQuestBlock* NowQuestBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_QuestId, meta=(AllowPrivateAccess=true))
    FName QuestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UPalQuestBlock>> QuestBlockList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestTitleMsgId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestDescriptionMsgId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AutoOrderQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalCommonQuestRewardData CommonRewardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalOrderedQuestSaveData CachedSaveData;
    
public:
    UPalQuestData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdatedQuestBlock_ServerInternal(UPalQuestBlock* UpdatedBlock);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestReturnBlock_ServerInternal(UPalQuestBlock* UpdatedBlock);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_QuestId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentBlock();
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedQuestBlock_ServerInternal(UPalQuestBlock* CompletedBlock);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadQuestBlockForUI(const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InitializeForUI(const FGuid& InOwnerPlayerUId, const FName& InQuestName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetQuestNameText(FText& OutText) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetQuestNameMsgIdRowNames() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetQuestIdRowNames() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetQuestId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetQuestDescriptionText(FText& OutText) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetQuestDescriptionMsgIdRowNames() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetQuestBlock(UPalQuestBlock*& OutBlock) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCommonRewardData(FPalCommonQuestRewardData& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FormatQuestTitleText(const FText& InOriginalText, FText& OutText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FormatQuestDescriptionText(const FText& InOriginalText, FText& OutText) const;
    
};

