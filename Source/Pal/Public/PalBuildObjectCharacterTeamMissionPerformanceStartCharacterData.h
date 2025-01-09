#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalTribeID.h"
#include "PalBuildObjectCharacterTeamMissionPerformanceStartCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildObjectCharacterTeamMissionPerformanceStartCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalTribeID TribeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SkeletalMeshScale;
    
    PAL_API FPalBuildObjectCharacterTeamMissionPerformanceStartCharacterData();
};

