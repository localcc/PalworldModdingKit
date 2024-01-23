#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalCoopSkillAssaultrifleModeCandidateLocation.generated.h"

USTRUCT(BlueprintType)
struct FPalCoopSkillAssaultrifleModeCandidateLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    PAL_API FPalCoopSkillAssaultrifleModeCandidateLocation();
};

