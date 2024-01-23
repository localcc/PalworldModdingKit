#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalQuestDataSetRow.generated.h"

class UPalQuestData;

USTRUCT(BlueprintType)
struct FPalQuestDataSetRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPalQuestData> QuestData;
    
    PAL_API FPalQuestDataSetRow();
};

