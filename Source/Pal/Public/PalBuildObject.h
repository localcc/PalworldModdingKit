#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EPalBuildObjectInstallStrategy.h"
#include "EPalBuildObjectState.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalBuildObjectMeshDefaultSetting.h"
#include "PalDamageInfo.h"
#include "PalMapObject.h"
#include "Templates/SubclassOf.h"
#include "PalBuildObject.generated.h"

class AActor;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UAkAudioEvent;
class UBoxComponent;
class UMeshComponent;
class UPalBuildObjectInstallStrategyBase;
class UPalBuildObjectOverlapChecker;
class UPalBuildObjectVisualControlComponent;
class UPalBuildProcess;
class UPalMapObjectModel;
class UPalWorkProgress;
class UPrimitiveComponent;
class UShapeComponent;

UCLASS(Blueprintable)
class PAL_API APalBuildObject : public APalMapObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeStateDelegate, EPalBuildObjectState, State);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeStateDelegate OnChangeState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBuildObjectInstallStrategy InstallStrategy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalBuildObjectInstallStrategyBase> InstallStrategyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InstallCapacitySlopeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InstallCapacitySinkRateByHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InstallLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPalBuildObjectVisualControlComponent* VisualCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName BuildObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UShapeComponent* OverlapCheckCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference OverlapCheckCollisionRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBoxComponent* SnapCheckBoxCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBox LocalBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalBuildObjectOverlapChecker* OverlapChecker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> AllMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> VirtualMeshCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* MainMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference MainMeshRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MainMeshCenterOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    EPalBuildObjectState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid WorldHUDId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid buildProgressWorldHUDId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector WorldHUDDisplayOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WorldHUDDisplayRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector buildProgressHUDDisplayOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D buildProgressHUDDisplayOffsetScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float buildProgressHUDDisplayRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BuildCompleteSEOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BuildProgressVisualRate, meta=(AllowPrivateAccess=true))
    float BuildProgressVisualRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDismantleTargetInLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, FPalBuildObjectMeshDefaultSetting> DefaultMeshSettingMap;
    
public:
    APalBuildObject(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayBuildCompleteFX_ToALL();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateHp(UPalMapObjectModel* DamagedModel);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateBuildWorkAmount(UPalWorkProgress* WorkProgress);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteractBuilding(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void OnTickRepairCompleteAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnTickBuildCompleteAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnStartTriggerInteractBuilding(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuildProgressVisualRate();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotAvailable_BlueprintImpl();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishBuildWork_ServerInternal(UPalBuildProcess* BuildProcess);
    
    UFUNCTION(BlueprintCallable)
    void OnEndTriggerInteractBuilding(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(UPalMapObjectModel* DamagedModel, const FPalDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginInteractBuilding(AActor* OtherActor, TScriptInterface<IPalInteractiveObjectComponentInterface> InteractiveObject);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAvailable_BlueprintImpl();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UShapeComponent* GetBuildWorkableBoundsShape() const;
    
};

