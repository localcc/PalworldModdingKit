#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalRaidBossAreaInstanceLoadedSaveData.h"
#include "PalStageInstanceId.h"
#include "PalWorldSubsystem.h"
#include "PalRaidBossAreaWorldSubsystem.generated.h"

class APalPlayerState;
class UDataLayerAsset;
class UPalRaidBossAreaInstanceModel;

UCLASS(Blueprintable)
class PAL_API UPalRaidBossAreaWorldSubsystem : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnInstanceModelDelegate, UPalRaidBossAreaInstanceModel*, InstanceModel);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnInstanceModelDelegate OnNotifiedReadyInstanceModelMovedIntoInClientDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnInstanceModelDelegate OnNotifiedMovedOutOfRaidBossAreaInClientDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataLayerAsset*> RaidBossAreaDataLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalRaidBossAreaInstanceLoadedSaveData> LoadedSaveDataMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalRaidBossAreaInstanceModel*> InstanceModelMap;
    
public:
    UPalRaidBossAreaWorldSubsystem();

    UFUNCTION(BlueprintCallable)
    void RequestSurrenderRaidBossArea();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSetupLocalPlayer(APalPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifiedMovedOutOfStageInClient(APalPlayerState* PlayerState, const FPalStageInstanceId& StageInstanceId);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifiedMovedIntoStageInClient(APalPlayerState* PlayerState, const FPalStageInstanceId& StageInstanceId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalRaidBossAreaInstanceModel* GetInstanceModel(const FGuid& RaidBossInstanceId);
    

    // Fix for true pure virtual functions not being implemented
};

