#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RiderActionInfo.generated.h"

class UPalActionBase;

USTRUCT(BlueprintType)
struct FRiderActionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalActionBase> RideAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalActionBase> GetOffAction;
    
    PAL_API FRiderActionInfo();
};

