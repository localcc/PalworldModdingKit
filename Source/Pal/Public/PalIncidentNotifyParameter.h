#pragma once
#include "CoreMinimal.h"
#include "PalIncidentNotifyParameter.generated.h"

class UObject;
class UPalIncidentBase;

USTRUCT(BlueprintType)
struct FPalIncidentNotifyParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IncidentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IncidentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* OccuredObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* OwnerObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalIncidentBase* IncidentObject;
    
    PAL_API FPalIncidentNotifyParameter();
};

