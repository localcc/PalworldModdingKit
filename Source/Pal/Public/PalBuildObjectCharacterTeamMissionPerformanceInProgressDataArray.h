#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectCharacterTeamMissionPerformanceInProgressData.h"
#include "PalBuildObjectCharacterTeamMissionPerformanceInProgressDataArray.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildObjectCharacterTeamMissionPerformanceInProgressDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CannotAddRemainTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalBuildObjectCharacterTeamMissionPerformanceInProgressData> Array;
    
    PAL_API FPalBuildObjectCharacterTeamMissionPerformanceInProgressDataArray();
};

