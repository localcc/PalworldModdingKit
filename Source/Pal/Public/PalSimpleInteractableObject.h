#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalSimpleInteractableObject.generated.h"

UCLASS(Blueprintable)
class PAL_API APalSimpleInteractableObject : public AActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
    APalSimpleInteractableObject(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EPalInteractiveObjectIndicatorType GetIndicatorType() const;
    

    // Fix for true pure virtual functions not being implemented
};

