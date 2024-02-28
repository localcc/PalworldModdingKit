#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EPalBaseCampWorkerEventType.h"
#include "PalBaseCampSignificanceInfo.h"
#include "PalBuildObjectSpawnValidationCheckInterface.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalSystemInitializeInterface.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalBaseCampManager.generated.h"

class AController;
class UDataTable;
class UPalAIActionBaseCampDefenseBase;
class UPalBaseCampModel;
class UPalBaseCampWorkerEventBase;
class UPalMapObjectModel;
class UPalWorkBase;

UCLASS(Blueprintable, Config=Game)
class UPalBaseCampManager : public UPalWorldSubsystem, public IPalBuildObjectSpawnValidationCheckInterface, public IPalGameWorldDataSaveInterface, public IPalSystemInitializeInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WorkerEventClassDirectoryPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AController> BaseCampAIControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WorkerCapacityNumDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WorkableBoundShapeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayCapacityNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle WarningSanityValueTextId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalBaseCampWorkerEventType, UPalBaseCampWorkerEventBase*> WorkerEventMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WorkerEventMasterDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WorkerSickMasterDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WorkerEventTriggerTickMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UPalAIActionBaseCampDefenseBase>> DefenseAIActionArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalBaseCampSignificanceInfo> BaseCampSignificanceInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateIntervalSquaredDistanceFromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestoreIgnoredWorkDistanceFromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClearUnreachableDistanceFromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform SpawnPointInBaseCampPointSubLocalTransform;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseCampTickInvokeMaxNumInOneTick;
    
public:
    UPalBaseCampManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetModel(const FGuid& BaseCampId, UPalBaseCampModel*& OutModel) const;
    
    UFUNCTION(BlueprintCallable)
    void RequestDismantalDistanceBaseCamp(const FGuid& InstanceId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateLocationWork_ServerInternal(UPalWorkBase* Work);
    
    UFUNCTION(BlueprintCallable)
    void OnUnregisteredWork_ServerInternal(UPalWorkBase* Work);
    
    UFUNCTION(BlueprintCallable)
    void OnRegisteredNewWork_ServerInternal(UPalWorkBase* Work);
    
    UFUNCTION(BlueprintCallable)
    void OnCreateMapObjectModelInServer(UPalMapObjectModel* CreatedModel, const FVector& Location);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBaseCampModel* GetNearestBaseCamp(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBaseCampModel* GetInRangedBaseCamp(const FVector& Location, const float Margin) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBaseCampIds(TArray<FGuid>& OutIds) const;
    

    // Fix for true pure virtual functions not being implemented
};

