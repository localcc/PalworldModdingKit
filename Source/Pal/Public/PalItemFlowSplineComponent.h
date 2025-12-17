#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SplineComponent.h"
#include "FloatCounter.h"
#include "PalItemFlowInSplineInfo.h"
#include "Templates/SubclassOf.h"
#include "PalItemFlowSplineComponent.generated.h"

class AActor;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UMeshComponent;
class UPalMapObjectConcreteModelBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalItemFlowSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemSpawnInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FlowSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFloatCounter FlowingItemSpawnTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ItemVisualBlueprintClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalItemFlowInSplineInfo> FlowingItemInfos;
    
public:
    UPalItemFlowSplineComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateTargetItem(const FName InStaticItemId);
    
    UFUNCTION(BlueprintCallable)
    void UpdateIsFlowing(const bool bOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateBuildObjectVisual(const UPalMapObjectConcreteModelBase* MapObjectConcreteModel);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetMaterialInstanceVectorParameterValue(UMaterialInstance* MaterialInstance, const FName ParameterName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstance* GetBuildObjectMaterialInstanceNormal(UMeshComponent* MeshComponent, const int32 MaterialIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetBuildObjectMaterialInstanceDynamic(UMeshComponent* MeshComponent, const int32 MaterialIndex) const;
    
};

