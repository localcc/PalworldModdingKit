#pragma once
#include "CoreMinimal.h"
#include "PalGameSystemInitSequenceSet.generated.h"

class UPalGameSystemInitSequenceBase;

USTRUCT(BlueprintType)
struct FPalGameSystemInitSequenceSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalGameSystemInitSequenceBase*> InitSequences;
    
    PAL_API FPalGameSystemInitSequenceSet();
};

