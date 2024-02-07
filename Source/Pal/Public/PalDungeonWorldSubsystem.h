#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalDungeonDataLayerAssetSet.h"
#include "PalDungeonInfoParameter.h"
#include "PalDungeonMarkerPointData.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalStageInstanceId.h"
#include "PalWorldSubsystem.h"
#include "PalDungeonWorldSubsystem.generated.h"

class APalDungeonPointMarker;
class UPalDungeonInstanceModel;

UCLASS(Blueprintable)
class PAL_API UPalDungeonWorldSubsystem : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalDungeonMarkerPointData> MarkerPointDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalDungeonInstanceModel*> InstanceModelMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DungeonMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalDungeonDataLayerAssetSet> DataLayerAssetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APalDungeonPointMarker*> PointMarkersWaitSystemInitializeInServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitializedWithSaveData;
    
public:
    UPalDungeonWorldSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetDungeonInfo(const FPalStageInstanceId& StageInstanceId, FPalDungeonInfoParameter& OutInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid Debug_GetDungeonInstanceIdByIndex(const int32 Index) const;
    

    // Fix for true pure virtual functions not being implemented
};

