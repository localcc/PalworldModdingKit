#pragma once
#include "CoreMinimal.h"
#include "EPalItemTypeB.h"
#include "PalPassiveSkillEffectItemTypeInfo.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalPassiveSkillEffectItemTypeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalItemTypeB> ItemTypeB;
    
    FPalPassiveSkillEffectItemTypeInfo();
};

