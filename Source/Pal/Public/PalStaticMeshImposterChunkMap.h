#pragma once
#include "CoreMinimal.h"
#include "PalCellCoord.h"
#include "PalStaticMeshImposterChunkInfo.h"
#include "PalStaticMeshImposterChunkMap.generated.h"

USTRUCT(BlueprintType)
struct FPalStaticMeshImposterChunkMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalCellCoord, FPalStaticMeshImposterChunkInfo> ChunkMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalCellCoord> PlayerNearCellCoords;
    
    PAL_API FPalStaticMeshImposterChunkMap();
};

