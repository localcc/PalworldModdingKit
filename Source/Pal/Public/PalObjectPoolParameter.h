#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PalObjectPoolParameter.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct PAL_API FPalObjectPoolParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PoolKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoolSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> TargetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValid;
    
    FPalObjectPoolParameter();
};

