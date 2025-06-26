#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EPalArenaPlayerIndex.h"
#include "EPalArenaSequenceType.h"
#include "EPalArenaSequencerOwnerType.h"
#include "GameDateTime.h"
#include "OnPalSelectedDelegateDelegate.h"
#include "PalArenaBattleResultInfo.h"
#include "PalArenaPlayerInfo.h"
#include "PalArenaPlayerParty.h"
#include "PalArenaSequencerInitializeParameter.h"
#include "Templates/SubclassOf.h"
#include "PalArenaSequencer.generated.h"

class APalCharacter;
class APalPlayerCharacter;
class UPalArenaCharacterRefresher;
class UPalArenaInstanceModel;
class UPalArenaSequenceBase;
class UPalArenaSequencer;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;

UCLASS(Blueprintable)
class PAL_API UPalArenaSequencer : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSequenceChangedDelegate, UPalArenaSequencer*, Self, EPalArenaSequenceType, PrevType, EPalArenaSequenceType, AfterType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerInfoInitializedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPartyUpdatedDelegate, EPalArenaPlayerIndex, PlayerIndex, FPalArenaPlayerParty, NewParty);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeleteDelegate, UPalArenaSequencer*, Self);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterDeadDelegate, APalCharacter*, DeadCharacter);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterDeadDelegate OnCharacterDeadDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSequenceChangedDelegate OnSequenceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeleteDelegate OnDeleteDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyUpdatedDelegate OnPartyUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerInfoInitializedDelegate OnPlayerInfoInitialized;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalArenaBattleResultInfo BattleResultInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBattlePlayerRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerInfoInitialized;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameDateTime ServerSequenceBeginTime_Client;
    
public:
    UPalArenaSequencer();

    UFUNCTION(BlueprintCallable)
    void StartSequencer(const FPalArenaSequencerInitializeParameter& InitParameter);
    
    UFUNCTION(BlueprintCallable)
    void SetupStatusCharacter(UPalIndividualCharacterParameter* IndividualParameter);
    
    UFUNCTION(BlueprintCallable)
    void SetupBattleTimer();
    
    UFUNCTION(BlueprintCallable)
    void SetMutekiAllPlayer(bool bIsMuteki);
    
    UFUNCTION(BlueprintCallable)
    void SetEnablePlayerTemperatureComponent(EPalArenaPlayerIndex PlayerIndex, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableNotSelectedOtomo(EPalArenaPlayerIndex PlayerIndex, bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableGliderPal(EPalArenaPlayerIndex PlayerIndex, bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void RestoreStatusCharacter(UPalIndividualCharacterParameter* IndividualParameter);
    
    UFUNCTION(BlueprintCallable)
    void ResetHateAll();
    
    UFUNCTION(BlueprintCallable)
    void RequestExitSoloMode();
    
    UFUNCTION(BlueprintCallable)
    FGuid OpenPalSelectUI(FOnPalSelectedDelegate PalSelectedDelegate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnArenaSequenceEnd(UPalArenaSequenceBase* SequenceBase);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSoloMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStartDelaySeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APalPlayerCharacter*> GetSequencePlayers_ForServer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalArenaPlayerIndex GetPlayerIndex(const APalPlayerCharacter* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalArenaSequencerOwnerType GetOwnerType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalArenaPlayerIndex GetLocalPlayerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APalCharacter*> GetInBattleCharacterAll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPalIndividualCharacterHandle*> GetInArenaPlayerHandles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalArenaSequenceBase* GetCurrentSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APalCharacter*> GetCharacterAll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EPalArenaPlayerIndex, FPalArenaPlayerInfo> GetArenaPlayerInfoMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalArenaInstanceModel* GetArenaInstanceModel() const;
    
};

