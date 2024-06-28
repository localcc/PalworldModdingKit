#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BuildingSurfaceMaterialSet.h"
#include "EPalMapObjectChangeMeshFXType.h"
#include "EPalMapObjectDestroyFXType.h"
#include "EPalMapObjectTreasureGradeType.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalMapObjectDamageInfo.h"
#include "PalMapObjectInfoTickInBackground.h"
#include "PalMapObjectModelStaticData.h"
#include "PalMapObjectSignificanceInfo.h"
#include "PalMapObjectStaticData.h"
#include "PalMapObjectVisualEffectAssets.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectManager.generated.h"

class APalFoliageModelChunk;
class APalMapObject;
class APalMapObjectSpawnerBase;
class APalSnapModeFX;
class APalTestMapObjectRegistrationToManager;
class IPalBuildObjectSpawnValidationCheckInterface;
class UPalBuildObjectSpawnValidationCheckInterface;
class IPalMapObjectModelInterface;
class UPalMapObjectModelInterface;
class UAkAudioEvent;
class UDataTable;
class UNiagaraSystem;
class UObject;
class UPalBuildOperator;
class UPalDialogParameterBase;
class UPalFoliagePresetDataSet;
class UPalHitEffectSlot;
class UPalMapObjectConcreteModelBase;
class UPalMapObjectFoliage;
class UPalMapObjectModel;
class UPalMapObjectModelInitializeExtraParameterSpawnedBy;
class UPalMapObjectSpawnRequestHandler;
class UPalMapObjectWorldDisposer;

UCLASS(Blueprintable, Config=Game)
class UPalMapObjectManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMapObjectModelWithVectorDelegate, UPalMapObjectModel*, MapObjectModel, const FVector&, Vector);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMapObjectModelSpawnedByDelegate, UPalMapObjectModel*, MapObjectModel, UPalMapObjectModelInitializeExtraParameterSpawnedBy*, SpawnedBy);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapObjectModelInterfaceDelegate, TScriptInterface<IPalMapObjectModelInterface>, MapObjectModel);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapObjectModelDynamicDelegate, UPalMapObjectModel*, MapObjectModel);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapObjectModelWithVectorDelegate OnCreateMapObjectModelInServerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapObjectModelDynamicDelegate OnRepMapObjectModelDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapObjectModelSpawnedByDelegate OnSpawnedMapObjectModelByInServerDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IPalBuildObjectSpawnValidationCheckInterface>> BuildSpawnValidationCheckers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BuildObjectDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BuildObjectNameTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BuildObjectDescTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MapObjectAssignTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingSurfaceMaterialSet BuildingSurfaceMaterialSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalFoliagePresetDataSet* FoliagePresetDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalFoliageModelChunk> FoliageModelChunkClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FoliageGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMapObjectFoliage* Foliage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalBuildOperator* BuildOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMapObjectWorldDisposer* WorldDisposerForServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalMapObjectModel*> MapObjectModelMapForServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalMapObjectConcreteModelBase*> MapObjectConcreteModelMapForServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalMapObjectModelStaticData> MapObjectModelStaticDataCacheMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectStaticData StaticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DropItemMapObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BuildObjectId_PalStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> SearchObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectSignificanceInfo> SignificanceInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalMapObjectDestroyFXType, UNiagaraSystem*> DestroyEffectMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapObjectDestroyFXUserParamName_BoxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapObjectDestroyFXUserParamName_BoxSurfaceArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* BuildStartEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* BuildCompleteEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BuildFXUserParamName_BoxCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BuildFXUserParamName_BoxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BuildFXUserParamName_BoxSurfaceArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BuildCompleteSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* RepairEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* DamageEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DamageFXUserParamName_Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DamageFXUserParamName_Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DamageFXUserParamName_Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DamageFXUserParamName_RadiusScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DamageFXUserParamName_AddRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DamageFXUserParamName_EndAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageParam_MaxRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageParam_MaxAddRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageParam_MaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageParam_MaxRadiusScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageParam_RadiusScaleMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageFX_StartHPRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageFX_DefaultBoundsSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DamageFX_SpanwLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageFX_EndFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropItemSpawnLocationFromActorBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropItemSpawnDirectionZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FoliageDropItemSpawnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DropItemReleaseDirectionRelative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FoliageDestroyFXExtentsDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalHitEffectSlot> HitEffectSlotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalMapObjectChangeMeshFXType, UNiagaraSystem*> ChangeMeshEffectMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectVisualEffectAssets VisualEffectAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalMapObjectTreasureGradeType, FPalDataTableRowName_ItemData> TreasureBoxOpenRequiredItemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalSnapModeFX> SnapModeFXClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalMapObjectModel*> MapObjectModelHandlingMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APalMapObject*> LevelMapObjectsToRegister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalTestMapObjectRegistrationToManager* Registrator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalMapObjectSpawnRequestHandler*> SpawnRequestHandlerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 InDoorCheckProcessIndex_AnyThread;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InDoorCheckMaxNumPerFrame_AnyThread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalMapObjectSpawnerBase*> SpawnedSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalMapObjectInfoTickInBackground> MapObjectInfoMapTickInBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectDamageInfo> MapObjectDamageInfoStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalSnapModeFX* SnapModeFX;
    
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UObject>> SkeletalLODComponentArrayExec;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UObject>> SkeletalLODComponentArrayWait;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UObject>> PointLightComponents;
    
    UPalMapObjectManager();

    UFUNCTION(BlueprintCallable)
    void UpdateSkeletalMeshComponentForLOD(int32 InExecuteCount);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePointLightComponentForCulling();
    
    UFUNCTION(BlueprintCallable)
    void UnResisterSkeletalMeshComponentForLOD(UObject* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void UnResisterPointLightComponent(UObject* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void ResisterSkeletalMeshComponentForLOD(UObject* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void ResisterPointLightComponent(UObject* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void RequestDismantleObject_OnResponseDialog(const bool bResult, UPalDialogParameterBase* DialogParameter);
    
    UFUNCTION(BlueprintCallable)
    void RecalcPointLightOverlap();
    
    UFUNCTION(BlueprintCallable)
    void PlayMapObjectDestroyFX(const FVector& Location, const FBoxSphereBounds& Bounds, const EPalMapObjectDestroyFXType Type);
    
    UFUNCTION(BlueprintCallable)
    UPalMapObjectFoliage* GetFoliage() const;
    
    UFUNCTION(BlueprintCallable)
    UPalBuildOperator* GetBuildOperator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalMapObjectModel* FindModel(const FGuid& InstanceId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalMapObjectConcreteModelBase* FindConcreteModel(const FGuid& InstanceId) const;
    

    // Fix for true pure virtual functions not being implemented
};

