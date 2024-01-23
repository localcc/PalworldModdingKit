#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_GameProgressPreset.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_GameProgressPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_GameProgressPreset();
};

