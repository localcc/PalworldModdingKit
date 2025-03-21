#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalNPCAppearDatabaseRow.generated.h"

USTRUCT(BlueprintType)
struct FPalNPCAppearDatabaseRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DummyValue;
    
    PAL_API FPalNPCAppearDatabaseRow();
};

