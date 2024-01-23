#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalLocalizedTextData.generated.h"

USTRUCT(BlueprintType)
struct FPalLocalizedTextData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextData;
    
    PAL_API FPalLocalizedTextData();
};

