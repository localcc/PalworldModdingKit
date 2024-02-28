#pragma once
#include "CoreMinimal.h"
#include "PalContainerId.h"
#include "PalDynamicItemId.h"
#include "PalInstanceID.h"
#include "PalFixupParameterForSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalFixupParameterForSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FPalInstanceID> UsedInstanceIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FPalContainerId> UsedContainerIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FPalDynamicItemId> UsedDynamicItemIDs;
    
    PAL_API FPalFixupParameterForSaveData();
};

