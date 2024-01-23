#pragma once
#include "CoreMinimal.h"
#include "EPalPassiveSkillEffectType.h"
#include "PalPassiveSkillEffect.generated.h"

USTRUCT(BlueprintType)
struct FPalPassiveSkillEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalPassiveSkillEffectType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Flags;
    
    PAL_API FPalPassiveSkillEffect();
};

