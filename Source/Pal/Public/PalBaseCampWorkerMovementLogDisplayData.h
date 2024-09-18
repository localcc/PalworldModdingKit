#pragma once
#include "CoreMinimal.h"
#include "EPalLogContentToneType.h"
#include "EPalLogType.h"
#include "PalInstanceID.h"
#include "PalBaseCampWorkerMovementLogDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampWorkerMovementLogDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalInstanceID WorkerInstanceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalLogType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalLogContentToneType ToneType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetMapObjectMasterDataId;
    
    PAL_API FPalBaseCampWorkerMovementLogDisplayData();
};

