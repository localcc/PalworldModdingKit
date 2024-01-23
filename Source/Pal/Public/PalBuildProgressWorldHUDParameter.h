#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalBuildProgressWorldHUDParameter.generated.h"

class APalBuildObject;
class UPalBuildProcess;

UCLASS(Blueprintable)
class UPalBuildProgressWorldHUDParameter : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalBuildProcess* BuildProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalBuildObject* BuildObject;
    
    UPalBuildProgressWorldHUDParameter();
};

