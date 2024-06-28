#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPalHUDDisplayType.h"
#include "EPalMapObjectChangeMeshFXType.h"
#include "EPalMapObjectDamagableType.h"
#include "EPalMapObjectDestroyFXType.h"
#include "EPalMapObjectGetModelOutPinType.h"
#include "PalDamageInfo.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalMapObjectComponentInfo.h"
#include "PalMapObjectConcreteModelDelegateDelegate.h"
#include "PalMapObjectConcreteModelMulticastDelegateDelegate.h"
#include "PalMapObjectDisposeOptions.h"
#include "PalMapObjectMeshVisibleData.h"
#include "PalReticleTargetableInterface.h"
#include "Templates/SubclassOf.h"
#include "PalMapObject.generated.h"

class APalMapObject;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UPalHUDDispatchParameterBase;
class UPalMapObjectConcreteModelBase;
class UPalMapObjectDamageReactionComponent;
class UPalMapObjectModel;
class UPalMapObjectVisualEffectComponent;
class UPalUserWidgetWorldHUD;

UCLASS(Blueprintable)
class PAL_API APalMapObject : public AActor, public IPalInteractiveObjectIndicatorInterface, public IPalReticleTargetableInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FToggleBuildProgressHUD, EPalHUDDisplayType, DisplayType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReturnSelf, APalMapObject*, Self, EPalHUDDisplayType, DisplayType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalMapObjectModelDelegate, APalMapObject*, MapObject);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelf OnNotifiedShowStatusHUDDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FToggleBuildProgressHUD OnNotifiedShowBuildProgressHUDDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectConcreteModelMulticastDelegate OnSetConcreteModelDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectModelDelegate OnSetModelDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnLocationOffset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalMapObjectConcreteModelBase> ConcreteModelClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IPalInteractiveObjectComponentInterface>> InteractComps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalMapObjectDamageReactionComponent* DamageReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalMapObjectVisualEffectComponent* VisualEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnableIfOverlapped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLevelSpawnObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AllowOverlapCollisionPresetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AllowOverlapActorTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnSlipAboveIfAnyOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShakeOnDamaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalMapObjectDestroyFXType DestroyFXType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayDestroyFXPlayerRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowOutlineInTargettingReticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowOutlineNearPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDestroyByOverlapSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInDoorObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBaseObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid HPHUDId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalMapObjectDamagableType DamagableType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGuid ModelInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MapObjectModel, meta=(AllowPrivateAccess=true))
    UPalMapObjectModel* MapObjectModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnmanagedInLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetWorldHUD> IndicatorWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectMeshVisibleData> MeshVisibleDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalMapObjectChangeMeshFXType ChangeMeshFXType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid OpenWidgetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWorkLocationGroupRaycastStartOffsetOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPlayDestroyFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectComponentInfo> TickableComponentInfos;
    
public:
    APalMapObject(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TryGetConcreteModel(EPalMapObjectGetModelOutPinType& OutputPin, UPalMapObjectConcreteModelBase*& ConcreteModel);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreSave_ServerInternal(const bool bIgnore);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdatedEnableTickByModel(UPalMapObjectModel* Model);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MapObjectModel();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInteractEnd(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractBegin(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
    UFUNCTION(BlueprintCallable)
    void OnDisposeModel_ServerInternal(UPalMapObjectModel* DisposeModel, const FPalMapObjectDisposeOptions& Options);
    
    UFUNCTION(BlueprintCallable)
    void OnDamaged(UPalMapObjectModel* TargetModel, const FPalDamageInfo& DamageInfo);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCloseParameter(UPalHUDDispatchParameterBase* Parameter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalMapObjectModel* GetModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetGroupIdBelongTo() const;
    
    UFUNCTION(BlueprintCallable)
    void DisposeSelf_ServerInternal();
    
    UFUNCTION(BlueprintCallable)
    void CallOrRegisterOnSetConcreteModel(FPalMapObjectConcreteModelDelegate Delegate);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastShouldPlayDestroyFX();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_OnSetConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel);
    

    // Fix for true pure virtual functions not being implemented
};

