#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalMapObjectCharacterTeamMissionState.h"
#include "PalBuildObject.h"
#include "PalBuildObjectCharacterTeamMissionCharacterLoadProgress.h"
#include "PalBuildObjectCharacterTeamMissionPerformanceInProgressDataArray.h"
#include "PalBuildObjectCharacterTeamMissionPerformanceStartCharacterData.h"
#include "PalBuildObjectCharacterTeamMissionPerformanceWaitData.h"
#include "PalBuildObjectCharacterTeamMission.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class PAL_API APalBuildObjectCharacterTeamMission : public APalBuildObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterMoveSpeedMax;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval HeadRunnerInSplineIntervalRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalBuildObjectCharacterTeamMissionPerformanceWaitData> WaitPerformanceDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USplineComponent*, FPalBuildObjectCharacterTeamMissionPerformanceInProgressDataArray> InProgressPerformanceDataArrayBySplineMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressTimeInPerformance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalBuildObjectCharacterTeamMissionCharacterLoadProgress> CharacterLoadProgressMap;
    
public:
    APalBuildObjectCharacterTeamMission(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnChangedState_ServerInternal(const EPalMapObjectCharacterTeamMissionState LastMissionState, const EPalMapObjectCharacterTeamMissionState CurrentMissionState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastStopMissionPerformance_Multicast();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastStartMissionPerformance_Multicast(const TArray<FPalBuildObjectCharacterTeamMissionPerformanceStartCharacterData>& StartCharacterDataList);
    
};

