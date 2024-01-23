#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalCharacterStoredParameterId.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterStoredParameterId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    PAL_API FPalCharacterStoredParameterId();
};
FORCEINLINE uint32 GetTypeHash(const FPalCharacterStoredParameterId) { return 0; }

