#pragma once
#include "CoreMinimal.h"
#include "PalOrderedQuestSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalOrderedQuestSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlockIndex;
    
    PAL_API FPalOrderedQuestSaveData();
};

