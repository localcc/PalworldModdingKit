#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalBaseCampLevelMasterData.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampLevelMasterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WorkerMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseCampMaxNumInGuild;
    
    PAL_API FPalBaseCampLevelMasterData();
};

