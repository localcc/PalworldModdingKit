#pragma once
#include "CoreMinimal.h"
#include "EPalPassiveSkillEffectTargetType.h"
#include "EPalPassiveSkillEffectType.h"
#include "PalPassiveSkillConditionInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalPassiveSkillConditionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkillName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalPassiveSkillEffectType> DisablePassiveTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalPassiveSkillEffectTargetType TargetType;
    
    PAL_API FPalPassiveSkillConditionInfo();
};

