#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalCoopSkillModuleAssignPassiveSkillNames.generated.h"

USTRUCT(BlueprintType)
struct FPalCoopSkillModuleAssignPassiveSkillNames {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_PassiveSkillData> AssignSkillNames;
    
    PAL_API FPalCoopSkillModuleAssignPassiveSkillNames();
};

