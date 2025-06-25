#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalEditorPalBedConfirmNamePlate.generated.h"

UCLASS(Blueprintable)
class PAL_API APalEditorPalBedConfirmNamePlate : public AActor {
    GENERATED_BODY()
public:
    APalEditorPalBedConfirmNamePlate(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(const FName CharacterID);
    
};

