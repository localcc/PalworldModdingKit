#pragma once
#include "CoreMinimal.h"
#include "SequentialProcessSequenceSet.generated.h"

class USequentialProcessSequenceBase;

USTRUCT(BlueprintType)
struct FSequentialProcessSequenceSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USequentialProcessSequenceBase*> Sequences;
    
    PAL_API FSequentialProcessSequenceSet();
};

