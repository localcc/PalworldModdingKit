#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalIncidentDynamicParameter.h"
#include "PalIncidentDynamicParameterInvader.generated.h"

UCLASS(Blueprintable)
class UPalIncidentDynamicParameterInvader : public UPalIncidentDynamicParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid TargetBaseCampID;
    
    UPalIncidentDynamicParameterInvader();

};

