#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalWazaID.h"
#include "PalWazaMasterLevelDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalWazaMasterLevelDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PalID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWazaID WazaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    PAL_API FPalWazaMasterLevelDataRow();
};

