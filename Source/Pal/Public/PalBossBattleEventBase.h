#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPalBossBattleCombatResult.h"
#include "PalBossBattleEventBase.generated.h"

class APalCharacter;
class UPalBossBattleSequencer;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API APalBossBattleEventBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterHandle*> SpawnCharacterHandles;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_SpawnCharacters, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<APalCharacter>> SpawnCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalBossBattleSequencer* BossBattleSequencerInServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCombatStarted;
    
public:
    APalBossBattleEventBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Terminate();
    
    UFUNCTION(BlueprintCallable)
    void SetBossBattleSequencer_ServerInternal(UPalBossBattleSequencer* BossBattleSequencer);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTerminate();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawnCharacter(UPalIndividualCharacterHandle* SpawnHandle);
    
private:
    UFUNCTION()
    void OnRep_SpawnCharacters(const TArray<TWeakObjectPtr<APalCharacter>>& OldSpawnCharacters);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCombatStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCombatEnd(EPalBossBattleCombatResult Result);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNearLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBossBattleSequencer* GetBossBattleSequencer() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void CombatStart();
    
    UFUNCTION(BlueprintCallable)
    void CombatEnd(EPalBossBattleCombatResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalcSpawnLocation(FVector Origin, FVector Dir, float Distance) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ActivateCharacterList(const TArray<UPalIndividualCharacterHandle*>& IndividualHandleList, const TArray<FVector>& OffsetList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateCharacter(UPalIndividualCharacterHandle* IndividualHandle, const FVector Offset);
    
};

