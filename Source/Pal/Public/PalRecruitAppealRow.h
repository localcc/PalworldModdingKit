#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalRecruitAppealRow.generated.h"

USTRUCT(BlueprintType)
struct FPalRecruitAppealRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PassiveSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextId;
    
    PAL_API FPalRecruitAppealRow();
};

