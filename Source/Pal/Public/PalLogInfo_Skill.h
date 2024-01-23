#pragma once
#include "CoreMinimal.h"
#include "PalLogInfo_Skill.generated.h"

USTRUCT(BlueprintType)
struct FPalLogInfo_Skill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SkillName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Value;
    
    PAL_API FPalLogInfo_Skill();
};

