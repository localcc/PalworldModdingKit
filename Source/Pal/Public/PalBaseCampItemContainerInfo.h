#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalBaseCampItemContainerType.h"
#include "PalContainerId.h"
#include "PalBaseCampItemContainerInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampItemContainerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalContainerId ContainerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerMapObjectConcreteModelInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBaseCampItemContainerType Type;
    
    PAL_API FPalBaseCampItemContainerInfo();
};

