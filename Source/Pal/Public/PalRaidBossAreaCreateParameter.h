#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalRaidBossAreaCreateParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalRaidBossAreaCreateParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid RequestPlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StaticItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid OwnerBaseCampId;
    
    PAL_API FPalRaidBossAreaCreateParameter();
};

