#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalMapObjectOperationResult.h"
#include "PalBuildObjectData.h"
#include "PalBuildRequestDebugParameter.h"
#include "PalNetArchive.h"
#include "PalStaticItemIdAndNum.h"
#include "PalBuilderComponent.generated.h"

class APalBuildObject;
class APalBuildObjectInstallChecker;
class APalDismantleObjectChecker;
class UCameraComponent;
class UPalBaseCampModel;
class UPalBuilderComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalBuilderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMulticastReturnSelfDelegate, UPalBuilderComponent*, Self);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMulticastReturnSelfDelegate OnUpdatePossessMaterials;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMulticastReturnSelfDelegate OnStartBuildingMode_Local;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMulticastReturnSelfDelegate OnEndBuildingMode_Local;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InstallDistanceNormalFromOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InstallableRange;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCameraComponent* OwnerCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalBuildObjectInstallChecker* InstallChecker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalDismantleObjectChecker* DismantleChecker;
    
public:
    UPalBuilderComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestBuild_ToServer(const FName BuildObjectId, const FVector& Location, const FQuat& Rotation, const TArray<FPalNetArchive>& ExtraParameterArchives, FPalBuildRequestDebugParameter DebugParameter);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveBuildResult_ToRequestClient(const EPalMapObjectOperationResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnExitBaseCamp(UPalBaseCampModel* BaseCampModel);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterBaseCamp(UPalBaseCampModel* BaseCampModel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSnapMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInstallAtReticle() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistsMaterialForBuildObject(const FPalBuildObjectData& BuildObjectData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExecuting() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableDismantle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalMapObjectOperationResult IsEnableBuild() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSelectedBuildObjectId(FName& OutSelectedBuildObjectId) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalBuildObject* GetDismantleTargetObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CollectItemInfoEnableToUseMaterial(TArray<FName> StaticItemIds, TArray<FPalStaticItemIdAndNum>& OutItemInfos) const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalMapObjectOperationResult CanRequestDismantle() const;
    
};

