#pragma once
#include "CoreMinimal.h"
#include "PalTechnologyDataSet.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FPalTechnologyDataSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* recipeUnlockDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* technologyNameTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* technologyDescTable;
    
    PAL_API FPalTechnologyDataSet();
};

