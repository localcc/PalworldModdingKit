#pragma once
#include "CoreMinimal.h"
#include "PalItemId.h"
#include "PalLoadoutSynchronalizedData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalLoadoutSynchronalizedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> actorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemId ItemId;
    
    PAL_API FPalLoadoutSynchronalizedData();
};

