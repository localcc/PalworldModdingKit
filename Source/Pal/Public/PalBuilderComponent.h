#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPalBuilderMode.h"
#include "EPalMapObjectOperationResult.h"
#include "PalBuildObjectData.h"
#include "PalDeadInfo.h"
#include "PalDyingEndInfo.h"
#include "PalStaticItemIdAndNum.h"
#include "PalBuilderComponent.generated.h"

class APalBuildObject;
class APalBuildObjectInstallChecker;
class APalDismantleObjectChecker;
class APalPlayerCharacter;
class UCameraComponent;
class UPalBaseCampModel;
class UPalBuilderComponent;
class UPalUIPaintModel;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalBuilderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPaintTargetChangedDelegate, UPalBuilderComponent*, Self, APalBuildObject*, NewTarget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMulticastReturnSelfDelegate, UPalBuilderComponent*, Self);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMulticastReturnSelfDelegate OnUpdatePossessMaterials;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMulticastReturnSelfDelegate OnStartBuildingMode_Local;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMulticastReturnSelfDelegate OnEndBuildingMode_Local;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMulticastReturnSelfDelegate OnStartDismantlingMode_Local;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMulticastReturnSelfDelegate OnEndDismantlingMode_Local;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMulticastReturnSelfDelegate OnStartPaintingMode_Local;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMulticastReturnSelfDelegate OnEndPaintingMode_Local;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPaintTargetChangedDelegate OnPaintTargetChanged_Local;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InstallDistanceNormalFromOwner;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCameraComponent* OwnerCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalBuildObjectInstallChecker* InstallChecker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalDismantleObjectChecker* DismantleChecker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalUIPaintModel* PaintModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalBuildObject> CurrentPaintTarget;
    
public:
    UPalBuilderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterInModeCametaOffset();
    
    UFUNCTION(BlueprintCallable)
    void RegisterInModeCameraOffset();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnExitBaseCamp(UPalBaseCampModel* BaseCampModel);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterBaseCamp(UPalBaseCampModel* BaseCampModel);
    
    UFUNCTION(BlueprintCallable)
    void OnDyingDeadEndOwner(APalPlayerCharacter* PlayerCharacter, const FPalDyingEndInfo& DyingEndInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnDeadOwner(FPalDeadInfo DeadInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSnapMode() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInstallAtReticle() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInPaintingMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInBuildingMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistsMaterialForBuildObject(const FPalBuildObjectData& BuildObjectData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExecuting() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnablePaint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableDismantle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalMapObjectOperationResult IsEnableBuild() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDismantling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangedMode() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSelectedBuildObjectId(FName& OutSelectedBuildObjectId) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalBuildObject* GetPaintTargetObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalUIPaintModel* GetPaintModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxBuildingLimitNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalBuildObject* GetDismantleTargetObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalBuilderMode GetCurrentMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBuildingNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CollectItemInfoEnableToUseMaterial(TArray<FName> StaticItemIds, TArray<FPalStaticItemIdAndNum>& OutItemInfos) const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeMode(EPalBuilderMode NewMode);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalMapObjectOperationResult CanRequestPaint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalMapObjectOperationResult CanRequestDismantle() const;
    
};

