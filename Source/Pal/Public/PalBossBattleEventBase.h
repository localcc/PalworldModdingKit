#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EPalBossBattleCombatResult.h"
#include "PalBossBattleEventBase.generated.h"

class UPalBossBattleSequencer;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API UPalBossBattleEventBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterHandle*> SpawnCharacterHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCombatStarted;
    
public:
    UPalBossBattleEventBase();

    UFUNCTION(BlueprintCallable)
    void Terminate();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTerminate();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawnCharacter(UPalIndividualCharacterHandle* SpawnHandle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCombatStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCombatEnd(EPalBossBattleCombatResult Result);
    
public:
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
    
protected:
    UFUNCTION(BlueprintCallable)
    void ActivateCharacterList(const TArray<UPalIndividualCharacterHandle*>& IndividualHandleList, const TArray<FVector>& OffsetList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateCharacter(UPalIndividualCharacterHandle* IndividualHandle, const FVector Offset);
    
};

