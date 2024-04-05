#pragma once
#include "CoreMinimal.h"
#include "EPalWorkerRadialMenuResult.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_WorkerRadialMenu.generated.h"

class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_WorkerRadialMenu : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterHandle* IndividualHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWorkerRadialMenuResult resultType;
    
    UPalHUDDispatchParameter_WorkerRadialMenu();

};

