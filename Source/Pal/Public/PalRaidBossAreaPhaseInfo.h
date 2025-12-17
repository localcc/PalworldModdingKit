#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalRaidBossAreaPhase.h"
#include "PalRaidBossAreaPhaseInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalRaidBossAreaPhaseInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalRaidBossAreaPhase CurrentPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime PhaseStartedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PhaseTimeLimitSeconds;
    
    PAL_API FPalRaidBossAreaPhaseInfo();
};

