#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalQuestBlock.generated.h"

class UPalQuestBlock;

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatedBlockDelegate, UPalQuestBlock*, UpdatedQuestBlock);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompletedBlockDelegate, UPalQuestBlock*, CompletedQuestBlock);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdatedBlockDelegate OnUpdatedBlockDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompletedBlockDelegate OnCompletedBlockDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAutoComplete;
    
public:
    UPalQuestBlock();

    UFUNCTION(BlueprintCallable)
    void Setup();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCanComplete(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup_ForBP();
    
    UFUNCTION(BlueprintCallable)
    void OnSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnComplete_ForBP();
    
    UFUNCTION(BlueprintCallable)
    void OnComplete();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetProgressText(FText& OutText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetDescriptionText(FText& OutText);
    
    UFUNCTION(BlueprintCallable)
    void Complete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanComplete();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CallUpdateBlockDelegate_ForBP();
    
};

