#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalQuestTrackingLocationSettingData.h"
#include "PalQuestBlock.generated.h"

class UPalQuestBlock;

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatedBlockDelegate, UPalQuestBlock*, UpdatedQuestBlock);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestReturnBlock, UPalQuestBlock*, CompletedQuestBlock);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompletedBlockDelegate, UPalQuestBlock*, CompletedQuestBlock);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdatedBlockDelegate OnUpdatedBlockInServerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompletedBlockDelegate OnCompletedBlockInServerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestReturnBlock OnRequestReturnBlock;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAutoComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CanCompleteFlag, meta=(AllowPrivateAccess=true))
    bool CanCompleteFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalQuestTrackingLocationSettingData LocationSettingData;
    
public:
    UPalQuestBlock();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCanComplete(bool flag);
    
public:
    UFUNCTION(BlueprintCallable)
    void ReturnBlock_ServerInternal();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup_ServerInternal_ForBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup_Client_ForBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReturn_ServerInternal_ForBP();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CanCompleteFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnComplete_ServerInternal_ForBP();
    
    UFUNCTION(BlueprintCallable)
    void NotifyUpdateQuest_Client();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetProgressText(FText& OutText);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetOwnerPlayerUId() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetDescriptionText(FText& OutText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanComplete() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CallUpdateBlockDelegate_ForBP();
    
};

