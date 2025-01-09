#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBuildObjectCharacterTeamMissionCharacterLoadProgress.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildObjectCharacterTeamMissionCharacterLoadProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompleteLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SkeletalMeshScale;
    
    PAL_API FPalBuildObjectCharacterTeamMissionCharacterLoadProgress();
};

