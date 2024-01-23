#pragma once
#include "CoreMinimal.h"
#include "PalPassiveSkillAssignInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalPassiveSkillAssignInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDoNotSetSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ForceSetSkillList;
    
    PAL_API FPalPassiveSkillAssignInfo();
};

