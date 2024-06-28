#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EPalArenaBattleResult.h"
#include "EPalArenaPlayerIndex.h"
#include "EPalArenaSequenceType.h"
#include "OnPalSelectedDelegateDelegate.h"
#include "PalArenaPlayerInfo.h"
#include "PalArenaPlayerParty.h"
#include "Templates/SubclassOf.h"
#include "PalArenaSequencer.generated.h"

class APalCharacter;
class APalPlayerCharacter;
class UPalArenaCharacterRefresher;
class UPalArenaInstanceModel;
class UPalArenaSequenceBase;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;

UCLASS(Blueprintable)
class PAL_API UPalArenaSequencer : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSequenceIndexChangedDelegate, int32, CurrentIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPartyUpdatedDelegate, EPalArenaPlayerIndex, PlayerIndex, FPalArenaPlayerParty, NewParty);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterDeadDelegate, APalCharacter*, DeadCharacter);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterDeadDelegate OnCharacterDeadDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSequenceIndexChangedDelegate OnSequenceIndexChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyUpdatedDelegate OnPartyUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalArenaBattleResult BattleResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBattlePlayerRemoved;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalArenaPlayerIndex, FPalArenaPlayerInfo> ArenaPlayerInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalArenaSequenceType, TSubclassOf<UPalArenaSequenceBase>> SequenceClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalArenaSequenceBase*> SequenceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalArenaInstanceModel* ArenaInstanceModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalArenaSequenceBase* CurrentSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterHandle*> InArenaPlayerHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalArenaCharacterRefresher* CharacterRefresher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> SequenceEndPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsClientOnly;
    
public:
    UPalArenaSequencer();

    UFUNCTION(BlueprintCallable)
    void SetupStatusCharacter(UPalIndividualCharacterParameter* IndividualParameter);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableNotSelectedOtomo(EPalArenaPlayerIndex PlayerIndex, bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableGliderPal(EPalArenaPlayerIndex PlayerIndex, bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void RestoreStatusCharacter(UPalIndividualCharacterParameter* IndividualParameter);
    
    UFUNCTION(BlueprintCallable)
    FGuid OpenPalSelectUI(FOnPalSelectedDelegate PalSelectedDelegate);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnArenaSequenceEnd(UPalArenaSequenceBase* SequenceBase);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClientOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APalPlayerCharacter*> GetSequencePlayers_ForServer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalArenaPlayerIndex GetPlayerIndex(const APalPlayerCharacter* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalArenaPlayerIndex GetLocalPlayerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APalCharacter*> GetInBattleCharacterAll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPalIndividualCharacterHandle*> GetInArenaPlayerHandles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalArenaSequenceBase* GetCurrentSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EPalArenaPlayerIndex, FPalArenaPlayerInfo> GetArenaPlayerInfoMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalArenaInstanceModel* GetArenaInstanceModel() const;
    
};

