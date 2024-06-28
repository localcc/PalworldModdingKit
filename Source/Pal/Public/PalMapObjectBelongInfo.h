#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBelongInfo.h"
#include "PalMapObjectBelongInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectBelongInfo : public FPalBelongInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid GroupId;
    
    PAL_API FPalMapObjectBelongInfo();
};

