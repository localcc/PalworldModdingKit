#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PalStaticMeshImposterSpawnChunkParameter.generated.h"

class UPalStaticMeshImposterHISMComponent;

USTRUCT(BlueprintType)
struct FPalStaticMeshImposterSpawnChunkParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalStaticMeshImposterHISMComponent> HISMComponentClassOverride;
    
    PAL_API FPalStaticMeshImposterSpawnChunkParameter();
};

