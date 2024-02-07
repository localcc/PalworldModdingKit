#pragma once
#include "CoreMinimal.h"
#include "ProceduralFoliageComponent.h"
#include "PalProceduralFoliageComponent.generated.h"

class UShapeComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalProceduralFoliageComponent : public UProceduralFoliageComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* SpawningShape;
    
public:
    UPalProceduralFoliageComponent(const FObjectInitializer& ObjectInitializer);

};

