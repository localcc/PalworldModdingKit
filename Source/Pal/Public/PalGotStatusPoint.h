#pragma once
#include "CoreMinimal.h"
#include "PalGotStatusPoint.generated.h"

USTRUCT(BlueprintType)
struct FPalGotStatusPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatusName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StatusPoint;
    
    PAL_API FPalGotStatusPoint();
};

