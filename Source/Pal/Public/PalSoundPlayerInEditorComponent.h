#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Chaos/ChaosEngineInterface.h"
#include "PalSoundPlayerInEditorComponent.generated.h"

class UPalSoundSlot;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalSoundPlayerInEditorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPalSoundSlot> PalSoundSlotClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalSoundSlot* PalSoundSlotCache;
    
public:
    UPalSoundPlayerInEditorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPhysicalMaterial(TEnumAsByte<EPhysicalSurface> PhysicalSurface);
    
};

