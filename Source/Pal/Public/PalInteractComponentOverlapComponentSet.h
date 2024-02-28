#pragma once
#include "CoreMinimal.h"
#include "PalInteractComponentOverlapComponentSet.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FPalInteractComponentOverlapComponentSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UPrimitiveComponent*> Components;
    
    PAL_API FPalInteractComponentOverlapComponentSet();
};

