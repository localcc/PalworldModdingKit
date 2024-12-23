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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerMapObjectConcreteModelInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBaseCampItemContainerType Type;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalContainerId ContainerIdCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShouldUseContainerIdCache;
    
public:
    PAL_API FPalBaseCampItemContainerInfo();
};

