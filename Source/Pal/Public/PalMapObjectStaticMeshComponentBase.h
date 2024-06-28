#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "PalMapObjectStaticMeshComponentBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectStaticMeshComponentBase : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPalMapObjectStaticMeshComponentBase(const FObjectInitializer& ObjectInitializer);

};

