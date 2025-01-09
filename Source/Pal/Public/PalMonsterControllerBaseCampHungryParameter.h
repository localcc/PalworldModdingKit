#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampRecoverStatusType.h"
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalBaseCampRecoverStatusType RecoverStatusType;
    
    PAL_API FPalMonsterControllerBaseCampHungryParameter();
};

