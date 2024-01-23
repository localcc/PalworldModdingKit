#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectModelInitializeExtraParameters.generated.h"

class UPalMapObjectModelInitializeExtraParameterBase;

USTRUCT(BlueprintType)
struct FPalMapObjectModelInitializeExtraParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalMapObjectModelInitializeExtraParameterBase*> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoredSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid LevelObjectInstanceId;
    
    PAL_API FPalMapObjectModelInitializeExtraParameters();
};

