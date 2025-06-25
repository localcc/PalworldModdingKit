#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_DetectCapturePal.generated.h"

class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_DetectCapturePal : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequireCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PalMonsterData DetectPalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=NotifyUpdateQuest_Client, meta=(AllowPrivateAccess=true))
    int32 NowCaptureCount;
    
public:
    UPalQuestBlock_DetectCapturePal();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnCapturedPal(UPalIndividualCharacterHandle* Handle);
    
};

