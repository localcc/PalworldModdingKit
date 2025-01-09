#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "EPalPassiveSkillEffectType.h"
#include "PalPassiveSkillEffectKeyOption.h"
#include "PalLabResearchEffectRepInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalLabResearchEffectRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalPassiveSkillEffectType EffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalPassiveSkillEffectKeyOption EffectOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EffectValue;
    
    PAL_API FPalLabResearchEffectRepInfo();
};

