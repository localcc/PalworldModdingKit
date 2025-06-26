#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalDungeonGimmickTriggerTargetInterface.h"
#include "PalDungeonLevelGimmickBase.h"
#include "PalDungeonGimmick_BulletLauncher.generated.h"

class APalStationaryLauncherBase;

UCLASS(Blueprintable)
class PAL_API APalDungeonGimmick_BulletLauncher : public APalDungeonLevelGimmickBase, public IPalDungeonGimmickTriggerTargetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoTriggerOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid TriggerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLaunchInfinitely;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LaunchCount;
    
public:
    APalDungeonGimmick_BulletLauncher(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    APalStationaryLauncherBase* GetLauncher() const;
    

    // Fix for true pure virtual functions not being implemented
};

