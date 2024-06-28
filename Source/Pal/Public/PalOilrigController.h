#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPalOilrigType.h"
#include "PalOilrigController.generated.h"

class APalCharacter;
class APalPlayerCharacter;
class IPalOilrigHandledActorInterface;
class UPalOilrigHandledActorInterface;

UCLASS(Blueprintable)
class PAL_API APalOilrigController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalOilrigType OilrigName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> GoalTreasureBoxSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatEndDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentShootingTower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IPalOilrigHandledActorInterface>> HandledActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ResetTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsCombat, meta=(AllowPrivateAccess=true))
    bool IsCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalPlayerCharacter*> FoundPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> DestroyedObjectIDs;
    
public:
    APalOilrigController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ResetAllSaveData_ToAll();
    
    UFUNCTION(BlueprintCallable)
    void RemoveShootingTower(AActor* Tower);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartCombatToAll_BP();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnStartCombatToAll();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartCombatMode_BP(APalPlayerCharacter* FoundPlayer);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsCombat();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndCombatMode_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShootingAnyTower();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCombatMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResetTimer() const;
    
    UFUNCTION(BlueprintCallable)
    APalPlayerCharacter* GetNearestFoundPlayer(APalCharacter* NPC);
    
    UFUNCTION(BlueprintCallable)
    void AddShootingTower(AActor* Tower);
    
};

