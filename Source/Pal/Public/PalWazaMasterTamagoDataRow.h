#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalWazaID.h"
#include "PalWazaMasterTamagoDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalWazaMasterTamagoDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PalID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWazaID WazaID;
    
    PAL_API FPalWazaMasterTamagoDataRow();
};

