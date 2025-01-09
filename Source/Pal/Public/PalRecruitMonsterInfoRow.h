#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalRecruitMonsterInfoRow.generated.h"

USTRUCT(BlueprintType)
struct FPalRecruitMonsterInfoRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PalMonsterData PalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelMax;
    
    PAL_API FPalRecruitMonsterInfoRow();
};

