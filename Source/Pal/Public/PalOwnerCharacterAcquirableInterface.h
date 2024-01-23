#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PalOwnerCharacterAcquirableInterface.generated.h"

class APalCharacter;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UPalOwnerCharacterAcquirableInterface : public UInterface {
    GENERATED_BODY()
};

class IPalOwnerCharacterAcquirableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual APalCharacter* GetOwnerCharacter() PURE_VIRTUAL(GetOwnerCharacter, return NULL;);
    
};

