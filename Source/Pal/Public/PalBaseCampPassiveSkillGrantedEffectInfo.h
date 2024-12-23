#pragma once
#include "CoreMinimal.h"
#include "PalPassiveSkillEffect.h"
#include "PalBaseCampPassiveSkillGrantedEffectInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampPassiveSkillGrantedEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalPassiveSkillEffect> Effects;
    
    PAL_API FPalBaseCampPassiveSkillGrantedEffectInfo();
};

