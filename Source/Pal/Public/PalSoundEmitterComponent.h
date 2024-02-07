#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PalSoundEmitterComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalSoundEmitterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalSoundEmitterComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void EmitSound(FName SoundFName, AActor* EmitterCharacter, FVector EmitLocation, float VolumeRate);
    
};

