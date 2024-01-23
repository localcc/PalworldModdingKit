#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorArray.h"
#include "EPalPlayerBattleFinishType.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalBattleManager.generated.h"

class AActor;
class APalCharacter;
class APalNPCSpawnerBase;

UCLASS(Blueprintable)
class PAL_API UPalBattleManager : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestionMarkDelegate, APalCharacter*, TargetCharacter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FExclamationMarkDelegate, APalCharacter*, TargetCharacter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEmitSoundOnlyPalmiDelegate, int32, SoundLevel);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEmitSoundDelegate, int32, SoundRadius, FVector, EmitLocation, AActor*, Emitter);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FActorArray> EnemyListPerPlayer;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalNPCSpawnerBase> DebugSpawnerClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExclamationMarkDelegate OnFExclamationMarkDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestionMarkDelegate OnFQuestionMarkDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmitSoundDelegate OnFEmitSoundDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmitSoundOnlyPalmiDelegate OnFEmitSoundOnlyPalmiDelegate;
    
    UPalBattleManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TargetIsPlayerOrPlayersOtomoPal(AActor* TargetCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SoundReactionStart(APalCharacter* SelfCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetUpPlayerMap(AActor* Player);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayerMap(AActor* Player);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEnemyActor_AllPlayer(AActor* Enemy, EPalPlayerBattleFinishType FinishType);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEnemyActor(AActor* Player, AActor* Enemy, EPalPlayerBattleFinishType FinishType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleModeAnyPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetRandomActor(TArray<AActor*> targetList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetNearestActor(TArray<AActor*> targetList, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetConflictEnemies(AActor* Player, TArray<AActor*>& OutEnemyes, bool IgnoreOtomoStopByBall);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllPlayerAndOtomo_ForEnemySelf(TArray<AActor*> TargetPlayers, TArray<AActor*>& OutCharacters);
    
    UFUNCTION(BlueprintCallable)
    void EnemyNearPlayerListUpdate(AActor* Enemy, float Distance);
    
    UFUNCTION(BlueprintCallable)
    void EmitSound(FName SoundRowName, AActor* Emitter, FVector EmitLocation, float VolumeRate);
    
    UFUNCTION(BlueprintCallable)
    void AddEnemyActor_PlayerOrOtomo(AActor* PlayerOrOtomo, AActor* Enemy);
    
    UFUNCTION(BlueprintCallable)
    void ActionMenaceStart(APalCharacter* SelfCharacter);
    
};

