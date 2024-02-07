#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalAmbientSoundAreaData.h"
#include "PalAmbientSoundAreaBase.generated.h"

class APalPlayerCharacter;
class UAkAudioEvent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class PAL_API APalAmbientSoundAreaBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmbientPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> DayAmbientEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> NightAmbientEvents;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOverlappedLocalPlayer;
    
public:
    APalAmbientSoundAreaBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, APalPlayerCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, APalPlayerCharacter* PlayerCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UPrimitiveComponent* GetAreaCollision() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalAmbientSoundAreaData GetAmbientSoundAreaData() const;
    
};

