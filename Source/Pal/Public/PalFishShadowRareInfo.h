#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalFishShadowRareInfo.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FPalFishShadowRareInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PassiveSkillData PassiveSkillId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* RareEffect;
    
    PAL_API FPalFishShadowRareInfo();
};

