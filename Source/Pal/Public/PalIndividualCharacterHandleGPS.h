#pragma once
#include "CoreMinimal.h"
#include "PalIndividualCharacterHandleReference.h"
#include "PalIndividualCharacterHandleGPS.generated.h"

class UPalIndividualCharacterParameter;

UCLASS(Blueprintable)
class UPalIndividualCharacterHandleGPS : public UPalIndividualCharacterHandleReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterParameter* MyParameter;
    
public:
    UPalIndividualCharacterHandleGPS();

};

