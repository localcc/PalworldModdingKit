#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPalArenaPlayer.h"
#include "EPalAudioStateGroup.h"
#include "PalArenaTestParameter.h"
#include "PalDebugOtomoPalInfo.h"
#include "PalArenaTestManager.generated.h"

class APalPlayerState;
class APlayerState;
class UPalOtomoHolderComponentBase;

UCLASS(Blueprintable)
class PAL_API APalArenaTestManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalArenaTestParameter TestParameter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APalPlayerState*> PlayerStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalPlayerState* Player1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalPlayerState* Player2;
    
public:
    APalArenaTestManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleRandomPartyMode();
    
private:
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void SendClientStart();
    
    UFUNCTION(BlueprintCallable)
    void SendClientSetup();
    
    UFUNCTION(BlueprintCallable)
    void RidePlayer(APalPlayerState* PlayerState, int32 RideIndex);
    
    UFUNCTION(BlueprintCallable)
    void PlayBGM(EPalAudioStateGroup StateGroup);
    
    UFUNCTION(BlueprintCallable)
    void OtomoInitializeTimer_Server();
    
    UFUNCTION(BlueprintCallable)
    void OtomoInitializeTimer_Client();
    
    UFUNCTION(BlueprintCallable)
    void LoadWaza_Client();
    
    UFUNCTION(BlueprintCallable)
    bool IsOtomoActorInitialized(const APlayerState* PlayerState) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InactivatePlayerOtomoPal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTransform> GetPalSpawnTransform(EPalArenaPlayer ArenaPlayer) const;
    
private:
    UFUNCTION(BlueprintCallable)
    UPalOtomoHolderComponentBase* GetOtomoHolder(const APlayerState* TargetPlayerState) const;
    
    UFUNCTION(BlueprintCallable)
    void GetOffAllPlayer();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnemyCombatMode();
    
private:
    UFUNCTION(BlueprintCallable)
    void DelayRidePlayer();
    
    UFUNCTION(BlueprintCallable)
    TArray<FPalDebugOtomoPalInfo> CreateRandomParty() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivatePlayerOtomoPal();
    
};

