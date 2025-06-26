#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalMapObjectSpawnerBlueprintData.generated.h"

class APalMapObjectSpawnerBase;

USTRUCT(BlueprintType)
struct FPalMapObjectSpawnerBlueprintData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlueprintClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalMapObjectSpawnerBase> BlueprintClassSoft;
    
    PAL_API FPalMapObjectSpawnerBlueprintData();
};

