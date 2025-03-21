#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "PalLimitVolumeInterface.h"
#include "PalFoliageRemoveVolumeBoxComponent.generated.h"

class UPalFoliageGridModel;
class UPalFoliageInstance;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalFoliageRemoveVolumeBoxComponent : public UBoxComponent, public IPalLimitVolumeInterface {
    GENERATED_BODY()
public:
    UPalFoliageRemoveVolumeBoxComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnPreRegisterFoliageInstance(const UPalFoliageGridModel* GridModel, const FName ModelId, UPalFoliageInstance* Instance);
    

    // Fix for true pure virtual functions not being implemented
};

