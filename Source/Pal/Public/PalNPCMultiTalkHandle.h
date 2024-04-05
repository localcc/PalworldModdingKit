#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalNPCMultiTalkHandle.generated.h"

class UDataTable;
class UPalPlayerDataStorage;
class UPalPlayerLocalRecordData;

UCLASS(Blueprintable)
class PAL_API UPalNPCMultiTalkHandle : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkId;
    
public:
    UPalNPCMultiTalkHandle();

    UFUNCTION(BlueprintCallable)
    void SetIsTransientTalkCount(bool IsTransient);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishOneTalk();
    
protected:
    UFUNCTION(BlueprintCallable)
    void IncrementTalkCountRecord();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTalkId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UDataTable* GetTalkData(const FName& inTalkID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalPlayerDataStorage* GetPlayerDataStorage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalPlayerLocalRecordData* GetLocalRecordData() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentTalkCount() const;
    
};

