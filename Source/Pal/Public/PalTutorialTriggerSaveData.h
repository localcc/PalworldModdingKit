#pragma once
#include "CoreMinimal.h"
#include "PalTutorialTriggerSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalTutorialTriggerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TutorialMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Checked;
    
    PAL_API FPalTutorialTriggerSaveData();
};

