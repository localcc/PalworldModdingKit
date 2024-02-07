#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPalAudioState.h"
#include "PalSpotAreaBase.generated.h"

class APalPlayerCharacter;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class PAL_API APalSpotAreaBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalAudioState AudioState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOverlappedLocalPlayer;
    
public:
    APalSpotAreaBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, APalPlayerCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, APalPlayerCharacter* PlayerCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalAudioState GetAudioState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UPrimitiveComponent* GetAreaCollision() const;
    
};

