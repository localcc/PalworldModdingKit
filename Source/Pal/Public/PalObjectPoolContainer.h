#pragma once
#include "CoreMinimal.h"
#include "PalObjectPoolContainer.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct PAL_API FPalObjectPoolContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Actors;
    
    FPalObjectPoolContainer();
};

