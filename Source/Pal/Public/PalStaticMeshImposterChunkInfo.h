#pragma once
#include "CoreMinimal.h"
#include "PalStaticMeshImposterChunkInfo.generated.h"

class APalStaticMeshImposterChunk;

USTRUCT(BlueprintType)
struct FPalStaticMeshImposterChunkInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalStaticMeshImposterChunk* Chunk;
    
    PAL_API FPalStaticMeshImposterChunkInfo();
};

