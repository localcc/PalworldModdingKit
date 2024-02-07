#pragma once
#include "CoreMinimal.h"
#include "PalMapObject.h"
#include "PalMapObjectPalEgg.generated.h"

class UPalMapObjectPickupItemPalEggParameterComponent;

UCLASS(Blueprintable)
class PAL_API APalMapObjectPalEgg : public APalMapObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalMapObjectPickupItemPalEggParameterComponent* ParameterComponent;
    
public:
    APalMapObjectPalEgg(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCharacterID();
    
};

