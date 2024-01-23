#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalContainerId.generated.h"

USTRUCT(BlueprintType)
struct FPalContainerId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    PAL_API FPalContainerId();
};
FORCEINLINE uint32 GetTypeHash(const FPalContainerId) { return 0; }

