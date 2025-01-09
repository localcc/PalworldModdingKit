#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalStageRoomExit.generated.h"

UCLASS(Blueprintable)
class PAL_API APalStageRoomExit : public AActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
    APalStageRoomExit(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnResponseDialogExit(const bool bResponse);
    

    // Fix for true pure virtual functions not being implemented
};

