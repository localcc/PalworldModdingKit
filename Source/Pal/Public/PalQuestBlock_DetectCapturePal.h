#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalQuestBlock.h"
#include "PalUIPalCaptureInfo.h"
#include "PalQuestBlock_DetectCapturePal.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_DetectCapturePal : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequireCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PalMonsterData DetectPalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NowCaptureCount;
    
public:
    UPalQuestBlock_DetectCapturePal();
private:
    UFUNCTION(BlueprintCallable)
    void OnCapturedPal(const FPalUIPalCaptureInfo& CaptureInfo);
    
};

