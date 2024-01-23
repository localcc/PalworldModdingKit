#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_RecipeTechnologyData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_RecipeTechnologyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_RecipeTechnologyData();
};

