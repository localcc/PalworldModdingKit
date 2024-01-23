#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Chaos/ChaosEngineInterface.h"
#include "PalDataTableRowName_SoundID.h"
#include "PalSoundOptions.h"
#include "PalSoundUtility.generated.h"

class AActor;
class APalSoundDebugModel;
class UAkAudioEvent;
class UObject;
class UPalSoundSlot;

UCLASS(Blueprintable)
class PAL_API UPalSoundUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FPalSoundUtilityBoolCallbackFunction, bool, IsPlaying);
    
    UPalSoundUtility();
    UFUNCTION(BlueprintCallable)
    static void StopSoundByActorWithSoundId(AActor* Actor, const FPalDataTableRowName_SoundID& ID);
    
    UFUNCTION(BlueprintCallable)
    static void StopSoundByActor_Editor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void StopSoundByActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static APalSoundDebugModel* SpawnSoundDebugModel(UAkAudioEvent* AudioEvent, const FVector& Location, const FRotator& Rotation, UObject* WorldObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetSwitchByActor(AActor* Actor, const FString& SwitchGroup, const FString& SwitchState);
    
    UFUNCTION(BlueprintCallable)
    static void SetRTPCValueByActor(AActor* Actor, const FName Name, float Value, float interpolSec);
    
    UFUNCTION(BlueprintCallable)
    static void SetPhysicalMaterial(AActor* Actor, TEnumAsByte<EPhysicalSurface> PhysicalSurface);
    
    UFUNCTION(BlueprintCallable)
    static void PlaySoundByActor_Editor(AActor* Actor, const FPalDataTableRowName_SoundID& ID, const FPalSoundOptions& Option, TSoftClassPtr<UPalSoundSlot> SoundSlotClass, TEnumAsByte<EPhysicalSurface> PhysicalSurface);
    
    UFUNCTION(BlueprintCallable)
    static void PlaySoundByActor(AActor* Actor, const FPalDataTableRowName_SoundID& ID, const FPalSoundOptions& Option);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayAkEventSoundByActor(AActor* Actor, UAkAudioEvent* AkEvent);
    
    UFUNCTION(BlueprintCallable)
    static void IsSoundPlayingByActor(AActor* Actor, const FPalDataTableRowName_SoundID& ID, UPalSoundUtility::FPalSoundUtilityBoolCallbackFunction cb);
    
};

