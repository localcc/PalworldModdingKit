#pragma once
#include "CoreMinimal.h"
#include "PalPassiveAbilitySkillParameters.h"
#include "PalPassiveAbilitySkills.generated.h"

USTRUCT(BlueprintType)
struct FPalPassiveAbilitySkills {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalPassiveAbilitySkillParameters> AllAbilityPassiveSkills;
    
    PAL_API FPalPassiveAbilitySkills();
};

