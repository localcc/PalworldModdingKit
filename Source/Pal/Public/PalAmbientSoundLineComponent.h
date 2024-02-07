#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "PalAmbientSoundLineComponent.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UPalAmbientSoundLineObject;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalAmbientSoundLineComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AmbientEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableAmbientSound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalAmbientSoundLineObject* AmbinetSoundLineObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
public:
    UPalAmbientSoundLineComponent(const FObjectInitializer& ObjectInitializer);

};

