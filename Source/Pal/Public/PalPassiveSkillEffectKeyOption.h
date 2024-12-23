#pragma once
#include "CoreMinimal.h"
#include "EPalPassiveSkillEffectTargetItemType.h"
#include "EPalWorkSuitability.h"
#include "PalPassiveSkillEffectKeyOption.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalPassiveSkillEffectKeyOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalWorkSuitability WorkSuitability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalPassiveSkillEffectTargetItemType ItemType;
    
    FPalPassiveSkillEffectKeyOption();
};

