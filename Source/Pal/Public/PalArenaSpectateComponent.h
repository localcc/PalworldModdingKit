#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalArenaPlayerIndex.h"
#include "EPalArenaSpectateState.h"
#include "PalArenaSpectateSpringArmParameter.h"
#include "PalArenaSpectateComponent.generated.h"

class AActor;
class APalCharacter;
class APalPlayerCharacter;
class APalPlayerController;
class APalSpectatorPawn;
class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalArenaSpectateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSimpleDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleDelegate OnBeginSpectateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleDelegate OnEndSpectateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleDelegate OnCancelSpectateDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalArenaSpectateSpringArmParameter SpectatedPlayerSpringArmParameter;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalPlayerController* CachedOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalSpectatorPawn* SpectatorPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalArenaSpectateState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalPlayerCharacter* SpectatedPlayer;
    
public:
    UPalArenaSpectateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpectateTopDown(const FVector& FromLocation);
    
    UFUNCTION(BlueprintCallable)
    APalCharacter* SpectateNextPlayer(EPalArenaPlayerIndex& PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SpectateFreely();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetViewTarget(APawn* Pawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpectating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void EventOnSpectatedPlayerRide(AActor* RideActor);
    
    UFUNCTION(BlueprintCallable)
    void EventOnSpectatedPlayerGetOff(AActor* RideActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndSpectate();
    
    UFUNCTION(BlueprintCallable)
    void BeginSpectate();
    
};

