#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalGuildPalStorage.generated.h"

class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class UPalGuildPalStorage : public UObject {
    GENERATED_BODY()
public:
    UPalGuildPalStorage();
private:
    UFUNCTION(BlueprintCallable)
    void OnNotifiedRemovedCharacterFromPalBoxInServer(UPalIndividualCharacterHandle* Handle);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifiedObtainCharacterInServer(UPalIndividualCharacterHandle* Handle);
    
};

