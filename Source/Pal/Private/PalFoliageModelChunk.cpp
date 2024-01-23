#include "PalFoliageModelChunk.h"
#include "Net/UnrealNetwork.h"

void APalFoliageModelChunk::OnRep_ChunkGridSize() {
}


void APalFoliageModelChunk::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalFoliageModelChunk, RepInfoArray);
    DOREPLIFETIME(APalFoliageModelChunk, ChunkGridSize);
    DOREPLIFETIME(APalFoliageModelChunk, InstanceNum);
}

APalFoliageModelChunk::APalFoliageModelChunk() {
    this->ChunkGridSize = 0;
    this->InstanceNum = 0;
}

