#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalUICommonWarningType.h"
#include "PalUICommonWarningDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FPalUICommonWarningDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalUICommonWarningType DisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PreserveID;
    
    PAL_API FPalUICommonWarningDisplayData();
};

