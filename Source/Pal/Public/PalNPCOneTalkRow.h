#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalNPCOneTalkRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FPalNPCOneTalkRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OneTalkData;
    
    PAL_API FPalNPCOneTalkRow();
};

