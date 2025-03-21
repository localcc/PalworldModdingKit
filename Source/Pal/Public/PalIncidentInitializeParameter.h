#pragma once
#include "CoreMinimal.h"
#include "PalIncidentInitializeParameter.generated.h"

class UObject;
class UPalIncidentBase;
class UPalIncidentDynamicParameter;

USTRUCT(BlueprintType)
struct FPalIncidentInitializeParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IncidentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Option;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* OccuredObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* OwnerObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalIncidentDynamicParameter* DynamicParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalIncidentBase* ParentObject;
    
    PAL_API FPalIncidentInitializeParameter();
};

