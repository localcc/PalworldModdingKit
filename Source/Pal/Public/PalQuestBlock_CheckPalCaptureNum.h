#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_CheckPalCaptureNum.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_CheckPalCaptureNum : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequireCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PalMonsterData CountPalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NowCaptureCount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CheckTimerHandle;
    
public:
    UPalQuestBlock_CheckPalCaptureNum();
private:
    UFUNCTION(BlueprintCallable)
    void CheckCount();
    
};

