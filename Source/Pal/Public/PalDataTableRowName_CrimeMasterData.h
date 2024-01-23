#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_CrimeMasterData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_CrimeMasterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_CrimeMasterData();
};

