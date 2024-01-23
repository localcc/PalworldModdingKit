#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterCompleteDelegatePriority.h"
#include "PalOnCharacterCompleteInitializeParameterDelegate.h"
#include "PalCharacterCompleteDelegateParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterCompleteDelegateParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalCharacterCompleteDelegatePriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOnCharacterCompleteInitializeParameter CompleteDelegate;
    
    PAL_API FPalCharacterCompleteDelegateParameter();
};

