#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalCoopSkillSearchBase.h"
#include "PalCoopSkillMetalDetector.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalCoopSkillMetalDetector : public UPalCoopSkillSearchBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchRangeEffectOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtendRangePerSecEffectOffset;
    
public:
    UPalCoopSkillMetalDetector();

    UFUNCTION(BlueprintCallable)
    void MetalDetector(const FVector& Origin, float SearchRadius, const FGuid& RequestPlayerUId);
    
};

