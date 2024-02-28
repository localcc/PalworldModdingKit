#pragma once
#include "CoreMinimal.h"
#include "EPalContainerOperationRestrictType.h"
#include "PalContainerCreateExtraParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalContainerCreateExtraParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWatchAllPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSyncEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreOnSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalContainerOperationRestrictType OperationRestrictType;
    
    PAL_API FPalContainerCreateExtraParameter();
};

