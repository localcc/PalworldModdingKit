#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalCharacter.h"
#include "PalCharacterOnCompleteInitializeParameterWrapper.generated.h"

class APalCharacter;

UCLASS(Blueprintable)
class UPalCharacterOnCompleteInitializeParameterWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalCharacter::FOnCompleteInitializeParameter OnCompleteInitializeParameterDelegate;
    
    UPalCharacterOnCompleteInitializeParameterWrapper();
    UFUNCTION(BlueprintCallable)
    void Broadcast(APalCharacter* Character) const;
    
};

