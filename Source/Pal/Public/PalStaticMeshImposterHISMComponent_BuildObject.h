#pragma once
#include "CoreMinimal.h"
#include "PalStaticMeshImposterHISMComponent.h"
#include "PalStaticMeshImposterHISMComponent_BuildObject.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalStaticMeshImposterHISMComponent_BuildObject : public UPalStaticMeshImposterHISMComponent {
    GENERATED_BODY()
public:
    UPalStaticMeshImposterHISMComponent_BuildObject(const FObjectInitializer& ObjectInitializer);

};

