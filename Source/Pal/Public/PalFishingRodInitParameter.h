#pragma once
#include "CoreMinimal.h"
#include "PalFishingRodInitParameter.generated.h"

class APalCharacter;

USTRUCT(BlueprintType)
struct FPalFishingRodInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CableShootSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CableReturnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CableMaxLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalCharacter* ActionCharacter;
    
    PAL_API FPalFishingRodInitParameter();
};

