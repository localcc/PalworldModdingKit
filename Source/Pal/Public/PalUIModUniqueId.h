#pragma once
#include "CoreMinimal.h"
#include "PalUIModUniqueId.generated.h"

USTRUCT(BlueprintType)
struct FPalUIModUniqueId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PackageName;
    
    PAL_API FPalUIModUniqueId();
};
FORCEINLINE uint32 GetTypeHash(const FPalUIModUniqueId) { return 0; }

