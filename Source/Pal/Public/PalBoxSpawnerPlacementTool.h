#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PalBoxSpawnerPlacementTool.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class PAL_API APalBoxSpawnerPlacementTool : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComp;
    
public:
    APalBoxSpawnerPlacementTool(const FObjectInitializer& ObjectInitializer);

};

