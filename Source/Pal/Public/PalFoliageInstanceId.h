#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalFoliageInstanceId.generated.h"

USTRUCT(BlueprintType)
struct FPalFoliageInstanceId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    PAL_API FPalFoliageInstanceId();
};
FORCEINLINE uint32 GetTypeHash(const FPalFoliageInstanceId) { return 0; }

