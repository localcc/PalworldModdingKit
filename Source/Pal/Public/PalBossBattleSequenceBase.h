#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalBossBattleSequenceType.h"
#include "PalBossBattleStaticInfo.h"
#include "PalBossBattleSequenceBase.generated.h"

class AActor;
class ALevelInstance;
class ALevelSequenceActor;
class APalPlayerCharacter;
class ULevelSequence;
class UPalBossBattleSequencer;

UCLASS(Blueprintable)
class UPalBossBattleSequenceBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSequenceFinishDelegate, bool, IsSuccess);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSequenceFinishDelegate OnSequenceFinishDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBossBattleSequenceType NextSequenceType;
    
public:
    UPalBossBattleSequenceBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickSequence(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupLevelSequenceActor(ALevelSequenceActor* LevelSequenceActor, ULevelSequence* LevelSequence, ALevelInstance* LevelInstance);
    
    UFUNCTION(BlueprintCallable)
    void SelfFinish_ForBP();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginSequence();
    
protected:
    UFUNCTION(BlueprintCallable)
    void NoticeSequenceEnd_ToServer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsServer();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBossBattleSequencer* GetOuterSequencer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalPlayerCharacter* GetJoinedLocalControlPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetBossRoomSequenceRootActor(ALevelInstance* LevelInstance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalBossBattleStaticInfo GetBossBattleStaticInfo();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishSequence(bool IsSuccess);
    
};

