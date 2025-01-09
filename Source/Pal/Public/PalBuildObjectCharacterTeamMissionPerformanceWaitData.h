#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBuildObjectCharacterTeamMissionPerformanceWaitData.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildObjectCharacterTeamMissionPerformanceWaitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SkeletalMeshScale;
    
    PAL_API FPalBuildObjectCharacterTeamMissionPerformanceWaitData();
};

