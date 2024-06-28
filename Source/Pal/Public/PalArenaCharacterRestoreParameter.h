#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampWorkerSickType.h"
#include "FixedPoint64.h"
#include "PalArenaCharacterRestoreParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaCharacterRestoreParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFixedPoint64 HP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FullStomach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SanityValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBaseCampWorkerSickType WorkerSick;
    
    PAL_API FPalArenaCharacterRestoreParameter();
};

