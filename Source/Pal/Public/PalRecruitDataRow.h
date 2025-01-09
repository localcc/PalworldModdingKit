#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalRecruitDataRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FPalRecruitDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseCampLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PalRecruitMonsterInfo;
    
    PAL_API FPalRecruitDataRow();
};

