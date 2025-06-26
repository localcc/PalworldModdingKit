#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalOperatingTablePassiveSkillData.generated.h"

USTRUCT(BlueprintType)
struct FPalOperatingTablePassiveSkillData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PassiveSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequireItemId;
    
    PAL_API FPalOperatingTablePassiveSkillData();
};

