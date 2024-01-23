#pragma once
#include "CoreMinimal.h"
#include "PalPassiveSkillAssignInfo.h"
#include "PalItemCreateParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalItemCreateParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPassiveSkillAssignInfo PassiveSkillAssignInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterID;
    
    PAL_API FPalItemCreateParameter();
};

