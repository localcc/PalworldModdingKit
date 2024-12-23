#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectCharacterTeamMissionPerformanceInProgressData.generated.h"

class UPalCharacterVisualSkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FPalBuildObjectCharacterTeamMissionPerformanceInProgressData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalCharacterVisualSkeletalMeshComponent* CharacterVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressTime;
    
    PAL_API FPalBuildObjectCharacterTeamMissionPerformanceInProgressData();
};

