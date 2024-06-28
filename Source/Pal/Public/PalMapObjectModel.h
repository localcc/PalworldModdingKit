#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "EPalMapObjectDamagableType.h"
#include "EPalMapObjectInteractRestrictType.h"
#include "FlagContainer.h"
#include "GameDateTime.h"
#include "MapObjectModelDelegateDelegate.h"
#include "MapObjectModelDisposeDelegateDelegate.h"
#include "PalBoundsTransform.h"
#include "PalInstanceID.h"
#include "PalMapObjectDamageDelegateDelegate.h"
#include "PalMapObjectDamageWithLastDelegateDelegate.h"
#include "PalMapObjectModelInterface.h"
#include "PalMapObjectStatusValue.h"
#include "PalStageInstanceId.h"
#include "PalMapObjectModel.generated.h"

class AActor;
class UPalBuildProcess;
class UPalMapObjectConcreteModelBase;
class UPalMapObjectModelConnectorBase;
class UPalMapObjectModelEffect;
class UPalWorkAssign;
class UPalWorkBase;

UCLASS(Blueprintable)
class UPalMapObjectModel : public UObject, public IPalMapObjectModelInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectDamageWithLastDelegate OnDamageInServerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectDamageDelegate OnDamageDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapObjectModelDelegate OnUpdateHp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapObjectModelDelegate OnDestroyDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapObjectModelDisposeDelegate OnDisposeDelegateInServer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapObjectModelDelegate OnUpdatedEnableTickDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapObjectModelDelegate OnUpdateBaseCampIdBelongToInServerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapObjectModelDelegate OnUpdateGroupIdBelongToInServerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapObjectModelDelegate OnRepBuildPlayerUIdDelegate_Client;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid InstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName MapObjectMasterDataId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalBoundsTransform WorkableBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBox MeshBoxBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid ConcreteModelInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ConcreteModel, meta=(AllowPrivateAccess=true))
    UPalMapObjectConcreteModelBase* ConcreteModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid BaseCampIdBelongTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid GroupIdBelongTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName BuildObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UPalBuildProcess* BuildProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalMapObjectDamagableType DamagableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalMapObjectStatusValue HP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FTransform InitialTransformCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UPalMapObjectModelConnectorBase* Connector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Effect, meta=(AllowPrivateAccess=true))
    UPalMapObjectModelEffect* Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid RepairWorkId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerSpawnerLevelObjectInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BuildPlayerUId, meta=(AllowPrivateAccess=true))
    FGuid BuildPlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalMapObjectInteractRestrictType InteractRestrictType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameDateTime CreatedAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SignificanceValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DeteriorationDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DeteriorationTotalDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIgnoredSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid DungeonInstanceIdBelongTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalStageInstanceId StageInstanceIdBelongTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer TickFlagContainer;
    
public:
    UPalMapObjectModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RequestRepairByPlayer_ToServer_ServerInternal(const FGuid& RequestPlayerUId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateBuildProcess_ServerInternal(UPalBuildProcess* TargetBuildProcess);
    
    UFUNCTION(BlueprintCallable)
    void OnUnassignWorkRepairBuildObject(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggeringInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnStartTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Effect();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ConcreteModel();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuildPlayerUId();
    
    UFUNCTION(BlueprintCallable)
    void OnEndTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void OnAssignWorkRepairBuildObject(UPalWorkBase* Work, UPalWorkAssign* WorkAssign);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamaged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalMapObjectStatusValue GetHP() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    FGuid GetModelId() const override PURE_VIRTUAL(GetModelId, return FGuid{};);
    
};

