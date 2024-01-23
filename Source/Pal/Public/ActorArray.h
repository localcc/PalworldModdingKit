#pragma once
#include "CoreMinimal.h"
#include "ActorArray.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Actors;
    
    PAL_API FActorArray();
};

