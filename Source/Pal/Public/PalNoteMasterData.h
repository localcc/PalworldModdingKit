#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalNoteMasterData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalNoteMasterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextId_Description;
    
    FPalNoteMasterData();
};

