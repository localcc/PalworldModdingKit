#pragma once
#include "CoreMinimal.h"
#include "PalCompletedQuestSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalCompletedQuestSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestName;
    
    PAL_API FPalCompletedQuestSaveData();
};

