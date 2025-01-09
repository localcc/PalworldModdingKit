#pragma once
#include "CoreMinimal.h"
#include "EPalLabCategorySubType.h"
#include "EPalPassiveSkillEffectType.h"
#include "EPalWorkSuitability.h"
#include "PalPassiveSkillEffectKeyOption.h"
#include "PalUIGuildLabPassiveEffectInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalUIGuildLabPassiveEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalPassiveSkillEffectType EffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalPassiveSkillEffectKeyOption EffectOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EffectValueSum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName EffectDescriptionTextIdOverwrite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalWorkSuitability CategoryWorkSuitability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalLabCategorySubType CategorySubType;
    
    PAL_API FPalUIGuildLabPassiveEffectInfo();
};

