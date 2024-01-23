#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalRespawnPointData.generated.h"

USTRUCT(BlueprintType)
struct FPalRespawnPointData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnPointID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResourcesAbundant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PalAbundant;
    
    PAL_API FPalRespawnPointData();
};

