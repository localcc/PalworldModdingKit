#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalWorldSecurityWantedStateInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalWorldSecurityWantedStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime ExpiredDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> CrimeInstanceIdArray;
    
    PAL_API FPalWorldSecurityWantedStateInfo();
};

