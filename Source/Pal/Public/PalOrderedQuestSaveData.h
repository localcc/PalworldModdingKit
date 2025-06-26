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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> IntegerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> StringMap;
    
    PAL_API FPalOrderedQuestSaveData();
};

