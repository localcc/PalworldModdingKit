#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "PalHeatSourceSphereComponent.generated.h"

class UPalHeatSourceModule;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalHeatSourceSphereComponent : public USphereComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DefaultActive;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalHeatSourceModule* HeatSourceModule;
    
public:
    UPalHeatSourceSphereComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetActiveHeatSource(bool NextIsActive);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalHeatSourceModule* GetModule();
    
};

