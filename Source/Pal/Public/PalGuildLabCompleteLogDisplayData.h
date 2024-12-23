#pragma once
#include "CoreMinimal.h"
#include "EPalLogContentToneType.h"
#include "EPalLogType.h"
#include "PalGuildLabCompleteLogDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FPalGuildLabCompleteLogDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CompletedResearchId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalLogType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalLogContentToneType ToneType;
    
    PAL_API FPalGuildLabCompleteLogDisplayData();
};

