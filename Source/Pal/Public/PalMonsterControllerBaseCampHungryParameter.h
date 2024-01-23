#pragma once
#include "CoreMinimal.h"
#include "PalMonsterControllerBaseCampHungryParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalMonsterControllerBaseCampHungryParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RecoverSatietyTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RecoverSanityTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 EatMaxNum;
    
    PAL_API FPalMonsterControllerBaseCampHungryParameter();
};

