#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_MapObjectData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_MapObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_MapObjectData();
};

