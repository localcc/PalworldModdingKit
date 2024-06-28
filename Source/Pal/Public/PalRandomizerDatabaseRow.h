#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalRandomizerDatabaseRow.generated.h"

USTRUCT(BlueprintType)
struct FPalRandomizerDatabaseRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PalID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumMax;
    
    PAL_API FPalRandomizerDatabaseRow();
};

