#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalDynamicItemId.generated.h"

USTRUCT(BlueprintType)
struct FPalDynamicItemId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid CreatedWorldId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid LocalIdInCreatedWorld;
    
    PAL_API FPalDynamicItemId();
};
FORCEINLINE uint32 GetTypeHash(const FPalDynamicItemId) { return 0; }

