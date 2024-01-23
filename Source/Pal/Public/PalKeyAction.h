#pragma once
#include "CoreMinimal.h"
#include "EPalKeyConfigAxisFilterType.h"
#include "PalKeyAction.generated.h"

USTRUCT(BlueprintType)
struct FPalKeyAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalKeyConfigAxisFilterType FilterType;
    
    PAL_API FPalKeyAction();
};

