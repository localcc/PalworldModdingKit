#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalPersistentSoundPlayer.generated.h"

class AActor;
class UAkAudioEvent;

UCLASS(Blueprintable)
class UPalPersistentSoundPlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FadeDuration;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> PlayActor;
    
public:
    UPalPersistentSoundPlayer();

};

