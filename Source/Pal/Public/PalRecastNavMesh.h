#pragma once
#include "CoreMinimal.h"
#include "NavMesh/RecastNavMesh.h"
#include "PalRecastNavMesh.generated.h"

UCLASS(Blueprintable)
class APalRecastNavMesh : public ARecastNavMesh {
    GENERATED_BODY()
public:
    APalRecastNavMesh(const FObjectInitializer& ObjectInitializer);

};

