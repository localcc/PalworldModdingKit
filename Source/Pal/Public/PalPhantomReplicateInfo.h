#pragma once
#include "CoreMinimal.h"
#include "PalPhantomReplicateInfo.generated.h"

class APalCharacter;

USTRUCT(BlueprintType)
struct FPalPhantomReplicateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalCharacter* Character;
    
    PAL_API FPalPhantomReplicateInfo();
};

