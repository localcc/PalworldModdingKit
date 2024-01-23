#pragma once
#include "CoreMinimal.h"
#include "PalInteractiveObjectActionBy.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalInteractiveObjectActionBy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InteractingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InteractId;
    
    PAL_API FPalInteractiveObjectActionBy();
};

