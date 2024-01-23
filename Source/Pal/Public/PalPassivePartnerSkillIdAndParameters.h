#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalPassivePartnerSkillParameters.h"
#include "PalPassivePartnerSkillIdAndParameters.generated.h"

USTRUCT(BlueprintType)
struct FPalPassivePartnerSkillIdAndParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalDataTableRowName_PassiveSkillData, FPalPassivePartnerSkillParameters> SkillAndParameters;
    
    PAL_API FPalPassivePartnerSkillIdAndParameters();
};

