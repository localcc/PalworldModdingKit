#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalIncidentDynamicParameter.generated.h"

class AActor;

UCLASS(Blueprintable)
class UPalIncidentDynamicParameter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Other;
    
    UPalIncidentDynamicParameter();
};

