#pragma once
#include "CoreMinimal.h"
#include "PalLabResearchMasterData.h"
#include "PalUIGuildLabResearchInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalUIGuildLabResearchInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ResearchId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalLabResearchMasterData MasterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredWorkSuitabilityRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompleted;
    
    PAL_API FPalUIGuildLabResearchInfo();
};

