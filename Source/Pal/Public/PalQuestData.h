#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalCommonQuestRewardData.h"
#include "PalQuestData.generated.h"

class UPalQuestBlock;
class UPalQuestData;
class UPalQuestRewardGiver;

UCLASS(Blueprintable)
class PAL_API UPalQuestData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatedQuestDelegate, UPalQuestData*, UpdatedQuest);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompleteQuestDelegate, UPalQuestData*, CompletedQuest);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdatedQuestDelegate OnUpdatedQuestDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompleteQuestDelegate OnCompletedQuestDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalQuestBlock* NowQuestBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UPalQuestBlock>> QuestBlockList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalCommonQuestRewardData CommonRewardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPalQuestRewardGiver> CustomQuestRewardGiverClass;
    
public:
    UPalQuestData();

protected:
    UFUNCTION(BlueprintCallable)
    void ProgressInternal();
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedQuestBlock(UPalQuestBlock* UpdatedBlock);
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedQuestBlock(UPalQuestBlock* CompletedBlock);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeWithoutLoadQuestBlock(int32 BlockIndex, const FName& InQuestName);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(int32 BlockIndex, const FName& InQuestName);
    
    UFUNCTION(BlueprintCallable)
    void GetQuestDataName(FName& outName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetQuestBlock(UPalQuestBlock*& OutBlock);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNowQuestBlockIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void GetCustomRewardGiverClass(TSoftClassPtr<UPalQuestRewardGiver>& OutClass);
    
    UFUNCTION(BlueprintCallable)
    void GetCommonRewardData(FPalCommonQuestRewardData& OutData);
    
    UFUNCTION(BlueprintCallable)
    bool CompleteNowBlock();
    
};

