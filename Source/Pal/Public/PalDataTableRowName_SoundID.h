#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_SoundID.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_SoundID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_SoundID();
};
FORCEINLINE uint32 GetTypeHash(const FPalDataTableRowName_SoundID) { return 0; }

