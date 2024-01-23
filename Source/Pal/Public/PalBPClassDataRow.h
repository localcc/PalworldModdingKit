#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalBPClassDataRow.generated.h"

class APalCharacter;

USTRUCT(BlueprintType)
struct FPalBPClassDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalCharacter> BPClass;
    
    PAL_API FPalBPClassDataRow();
};

