#pragma once
#include "CoreMinimal.h"
#include "PalIndividualCharacterHandleReference.h"
#include "PalIndividualCharacterHandleDimensionLocker.generated.h"

class UPalIndividualCharacterParameter;

UCLASS(Blueprintable)
class UPalIndividualCharacterHandleDimensionLocker : public UPalIndividualCharacterHandleReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterParameter* MyParameter;
    
public:
    UPalIndividualCharacterHandleDimensionLocker();

};

