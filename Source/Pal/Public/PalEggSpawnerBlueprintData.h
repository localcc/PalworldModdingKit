#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalEggSpawnerBlueprintData.generated.h"

class APalMapObjectSpawnerPalEgg;

USTRUCT(BlueprintType)
struct FPalEggSpawnerBlueprintData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlueprintClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalMapObjectSpawnerPalEgg> BlueprintClassSoft;
    
    PAL_API FPalEggSpawnerBlueprintData();
};

