#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalStageInstanceId.generated.h"

USTRUCT(BlueprintType)
struct FPalStageInstanceId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid InternalId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValid;
    
    PAL_API FPalStageInstanceId();
};
FORCEINLINE uint32 GetTypeHash(const FPalStageInstanceId) { return 0; }

