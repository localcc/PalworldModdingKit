#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "PalRandomIncidentSpawnLocationData.generated.h"

USTRUCT(BlueprintType)
struct FPalRandomIncidentSpawnLocationData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Location;
    
    PAL_API FPalRandomIncidentSpawnLocationData();
};

