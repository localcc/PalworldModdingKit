#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalCaptureBonusExpRaw.generated.h"

USTRUCT(BlueprintType)
struct FPalCaptureBonusExpRaw : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 BonusExp;
    
    PAL_API FPalCaptureBonusExpRaw();
};

