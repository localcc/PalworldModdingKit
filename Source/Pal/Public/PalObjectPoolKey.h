#pragma once
#include "CoreMinimal.h"
#include "PalObjectPoolKey.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalObjectPoolKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PoolKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* TargetClass;
    
    FPalObjectPoolKey();
};
FORCEINLINE uint32 GetTypeHash(const FPalObjectPoolKey) { return 0; }

