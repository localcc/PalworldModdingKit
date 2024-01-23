#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalInstanceID.generated.h"

USTRUCT(BlueprintType)
struct FPalInstanceID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid InstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugName;
    
    PAL_API FPalInstanceID();
};
FORCEINLINE uint32 GetTypeHash(const FPalInstanceID) { return 0; }

