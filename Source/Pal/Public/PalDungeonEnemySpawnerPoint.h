#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPalDungeonEnemySpawnerRankType.h"
#include "PalDungeonEnemySpawnerPoint.generated.h"

class UPalDungeonInstanceModel;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API APalDungeonEnemySpawnerPoint : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnIndividualHandleDelegate, UPalIndividualCharacterHandle*, IndividualHandle);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalDungeonEnemySpawnerRankType RankType;
    
public:
    APalDungeonEnemySpawnerPoint(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnEnterCharacterToGroup(UPalIndividualCharacterHandle* IndividualHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnCreatedGroup();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeBossState_ServerInternal(UPalDungeonInstanceModel* InstanceModel);
    
    UFUNCTION(BlueprintCallable)
    void CheckLevelStreamingCompleted();
    
};

