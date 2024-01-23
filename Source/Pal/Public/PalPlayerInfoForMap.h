#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalPlayerInfoForMap.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerInfoForMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    PAL_API FPalPlayerInfoForMap();
};

