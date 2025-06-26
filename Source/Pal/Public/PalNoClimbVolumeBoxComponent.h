#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "PalNoClimbVolumeInterface.h"
#include "PalNoClimbVolumeBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNoClimbVolumeBoxComponent : public UBoxComponent, public IPalNoClimbVolumeInterface {
    GENERATED_BODY()
public:
    UPalNoClimbVolumeBoxComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

