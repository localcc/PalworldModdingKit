#pragma once
#include "CoreMinimal.h"
#include "PalStageExitParameter.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalStageExitParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ExitActor;
    
    PAL_API FPalStageExitParameter();
};

