#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalGuildEnterRequestLogInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalGuildEnterRequestLogInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDateTime> RequestAtArray;
    
    PAL_API FPalGuildEnterRequestLogInfo();
};

