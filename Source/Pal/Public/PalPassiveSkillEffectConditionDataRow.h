#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalPassiveSkillEffectConditionDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalPassiveSkillEffectConditionDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHighestOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFixedValue;
    
    PAL_API FPalPassiveSkillEffectConditionDataRow();
};

