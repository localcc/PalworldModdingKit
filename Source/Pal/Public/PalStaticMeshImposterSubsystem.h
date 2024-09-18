#pragma once
#include "CoreMinimal.h"
#include "PalStaticMeshImposterChunkMap.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalStaticMeshImposterSubsystem.generated.h"

class APalStaticMeshImposterChunk;

UCLASS(Blueprintable)
class PAL_API UPalStaticMeshImposterSubsystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalStaticMeshImposterChunk> ChunkClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChunkGridSize;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FPalStaticMeshImposterChunkMap> ChunkMapByClass;
    
public:
    UPalStaticMeshImposterSubsystem();

};

