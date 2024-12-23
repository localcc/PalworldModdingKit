#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterReplace.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectModelInitializeExtraParameterReplace : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ReplaceTargetInstanceId;
    
    UPalMapObjectModelInitializeExtraParameterReplace();

};

