#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EPalMapObjectOperationResult.h"
#include "EPalSupplyType.h"
#include "PalDataTableRowName_FieldLotteryNameData.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalMapObjectDropItemData.h"
#include "PalSupplyInfo.h"
#include "Templates/SubclassOf.h"
#include "PalSupplySpawnerData.generated.h"

class AActor;
class APalNPCSpawnerBase;
class APalRandomIncidentSpawnerBase;
class APalSupplyDropActor;

UCLASS(Blueprintable)
class PAL_API UPalSupplySpawnerData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_MapObjectData CapsuleMapObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_FieldLotteryNameData CapsuleLotteryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_MapObjectData MeteorMapObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalMapObjectDropItemData MeteorPieceDropItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalRandomIncidentSpawnerBase> IncidentPalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalRandomIncidentSpawnerBase> IncidentNPCClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SpawnHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MeteorPieceHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MeteorPieceRandomMinRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MeteorPieceRandomMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SafeAreaRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalSupplyType ForceSupplyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDebugDrawSupplyLimitArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid SupplyMapObjectModelInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalRandomIncidentSpawnerBase* PalIncidentSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalRandomIncidentSpawnerBase* NPCIncidentSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalNPCSpawnerBase* PalSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalNPCSpawnerBase* NPCSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    APalSupplyDropActor* DropActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid LevelObjectInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPalSupplySpawnerData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RegisterNPCSpawner(APalNPCSpawnerBase* InSpawner, bool bPalSpawner);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PieceSpawned(FGuid ItemGuid, EPalMapObjectOperationResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedSpawningMapObjectModel(FGuid InstanceId, const EPalMapObjectOperationResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnDestroyedMapObject(AActor* DestroyActor);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastSupplyStart(FPalSupplyInfo Info, FTransform InLocationTransform, float DistanceLimit);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastSupplyEnd(FPalSupplyInfo Info, FTransform InLocationTransform, float DistanceLimit);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastDestroyDropActor(FGuid InSupplyMapObjectId, bool bForceDestroy);
    
};

