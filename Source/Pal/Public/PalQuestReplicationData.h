#pragma once
#include "CoreMinimal.h"
#include "PalQuestReplicationData.generated.h"

class UPalQuestData;

USTRUCT(BlueprintType)
struct FPalQuestReplicationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalQuestData*> OrderedQuestArray;
    
    PAL_API FPalQuestReplicationData();
};

