#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "FloatCounter.h"
#include "PalItemFlowInSplineInfo.h"
#include "Templates/SubclassOf.h"
#include "PalItemFlowSplineComponent.generated.h"

class AActor;

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
    
};

