#pragma once
#include "CoreMinimal.h"
#include "PalTechnologyDataTableRowBase.h"
#include "PalTechnologyRecipeUnlockDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FPalTechnologyRecipeUnlockDataTableRow : public FPalTechnologyDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> UnlockBuildObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> UnlockItemRecipes;
    
    PAL_API FPalTechnologyRecipeUnlockDataTableRow();
};

