#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBaseCampWorkerSlotModifyInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampWorkerSlotModifyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ByMapObjectInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ByRequestPlayerUId;
    
    PAL_API FPalBaseCampWorkerSlotModifyInfo();
};

