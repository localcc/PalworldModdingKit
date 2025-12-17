#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalPassivePartnerSkillActiveSkillParameters.h"
#include "PalPassivePartnerSkillIdAndParameters.h"
#include "PalPartnerSkillParameterDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalPartnerSkillParameterDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_ItemData> RestrictionItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPassivePartnerSkillActiveSkillParameters ActiveSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalPassivePartnerSkillIdAndParameters> PassiveSkills;
    
    PAL_API FPalPartnerSkillParameterDataRow();
};

