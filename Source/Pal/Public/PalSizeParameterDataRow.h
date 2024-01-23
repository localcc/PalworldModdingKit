#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalSizeType.h"
#include "PalSizeParameterDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalSizeParameterDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalSizeType Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpEffectOffsetZ;
    
    PAL_API FPalSizeParameterDataRow();
};

