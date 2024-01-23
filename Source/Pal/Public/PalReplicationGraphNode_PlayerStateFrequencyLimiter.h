#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "PalReplicationGraphNode_PlayerStateFrequencyLimiter.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPalReplicationGraphNode_PlayerStateFrequencyLimiter : public UReplicationGraphNode {
    GENERATED_BODY()
public:
    UPalReplicationGraphNode_PlayerStateFrequencyLimiter();
};

