#pragma once
#include "CoreMinimal.h"
#include "PalIncidentDynamicParameter.h"
#include "PalIncidentDynamicParameterRandom.generated.h"

UCLASS(Blueprintable)
class UPalIncidentDynamicParameterRandom : public UPalIncidentDynamicParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SettingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerId;
    
    UPalIncidentDynamicParameterRandom();
};

