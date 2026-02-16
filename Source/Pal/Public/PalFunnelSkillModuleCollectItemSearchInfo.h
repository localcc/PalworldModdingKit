#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalFunnelSkillModuleCollectItemSearchInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalFunnelSkillModuleCollectItemSearchInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPendingPathRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextRequestTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 RequestNonce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastQueryTargetLocation;
    
    PAL_API FPalFunnelSkillModuleCollectItemSearchInfo();
};

