#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.generated.h"

USTRUCT(BlueprintType)
struct FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> RawData;
    
    PAL_API FPalBinaryMemory();
};

