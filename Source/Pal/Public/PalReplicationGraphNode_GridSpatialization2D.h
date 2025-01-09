#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "PalReplicationGraphNode_GridSpatialization2D.generated.h"

UCLASS(Blueprintable, NonTransient)
class PAL_API UPalReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode_GridSpatialization2D {
    GENERATED_BODY()
public:
    UPalReplicationGraphNode_GridSpatialization2D();

};

