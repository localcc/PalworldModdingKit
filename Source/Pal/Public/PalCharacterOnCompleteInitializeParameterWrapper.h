#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalCharacter.h"
#include "PalCharacterOnCompleteInitializeParameterWrapper.generated.h"

class APalCharacter;

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class UDEPRECATED_PalCharacterOnCompleteInitializeParameterWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalCharacter::FOnCompleteInitializeParameter OnCompleteInitializeParameterDelegate;
    
    UDEPRECATED_PalCharacterOnCompleteInitializeParameterWrapper();

    UFUNCTION(BlueprintCallable)
    void Broadcast(APalCharacter* Character) const;
    
};

