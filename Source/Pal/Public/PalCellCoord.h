#pragma once
#include "CoreMinimal.h"
#include "PalCellCoord.generated.h"

USTRUCT(BlueprintType)
struct FPalCellCoord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 X;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Y;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Z;
    
    PAL_API FPalCellCoord();
};
FORCEINLINE uint32 GetTypeHash(const FPalCellCoord) { return 0; }

