#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBaseCampModuleResourceCollectWorkInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampModuleResourceCollectWorkInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid WorkId;
    
    PAL_API FPalBaseCampModuleResourceCollectWorkInfo();
};

