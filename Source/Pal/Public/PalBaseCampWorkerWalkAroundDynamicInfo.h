#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalBaseCampWorkerWalkAroundState.h"
#include "FloatCounter.h"
#include "PalBaseCampWorkerWalkAroundDynamicInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampWorkerWalkAroundDynamicInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalBaseCampWorkerWalkAroundState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector WalkAroundDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFloatCounter WalkAroundTimeCounter;
    
    PAL_API FPalBaseCampWorkerWalkAroundDynamicInfo();
};

