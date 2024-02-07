#include "PalFoliageModelChunk.h"
#include "Net/UnrealNetwork.h"

APalFoliageModelChunk::APalFoliageModelChunk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->ChunkGridSize = 0;
    this->InstanceNum = 0;
}

void APalFoliageModelChunk::OnRep_ChunkGridSize() {
}


void APalFoliageModelChunk::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalFoliageModelChunk, RepInfoArray);
    DOREPLIFETIME(APalFoliageModelChunk, ChunkGridSize);
    DOREPLIFETIME(APalFoliageModelChunk, InstanceNum);
}


