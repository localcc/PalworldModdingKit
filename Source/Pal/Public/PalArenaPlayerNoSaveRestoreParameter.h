#pragma once
#include "CoreMinimal.h"
#include "EPalOtomoPalOrderType.h"
#include "PalArenaPlayerNoSaveRestoreParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaPlayerNoSaveRestoreParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalOtomoPalOrderType OrderType;
    
    PAL_API FPalArenaPlayerNoSaveRestoreParameter();
};

