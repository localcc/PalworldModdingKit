#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalCrimeMasterData.generated.h"

USTRUCT(BlueprintType)
struct FPalCrimeMasterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CrimeNameTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseReward;
    
    PAL_API FPalCrimeMasterData();
};

