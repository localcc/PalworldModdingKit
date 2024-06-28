#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FindSessionsCallbackProxy.h"
#include "JoinSessionResultType.h"
#include "PalOptionWorldSettings.h"
#include "PalPlayerDataCharacterMakeInfo.h"
#include "Templates/SubclassOf.h"
#include "PalGameInstance.generated.h"

class AController;
class APawn;
class IPalGameSystemNeedSync;
class UPalGameSystemNeedSync;
class UPalActionDummyTargetManager;
class UPalAssetStreamableManager;
class UPalAudioSettingSystem;
class UPalBaseCampManager;
class UPalBattleManager;
class UPalBossBattleManager;
class UPalBulletCreator;
class UPalCharacterContainerManager;
class UPalCharacterImportanceManager;
class UPalCharacterManager;
class UPalCharacterParameterStorageSubsystem;
class UPalCoopSkillSearchSystem;
class UPalDamagePopUpManager;
class UPalDataTableRowIdMapper;
class UPalDatabaseCharacterParameter;
class UPalDeadBodyManager;
class UPalDeathPenaltyManager;
class UPalDisplaySafeAreaDebugger;
class UPalEventNotifySystem;
class UPalExpDatabase;
class UPalGameSetting;
class UPalGroupManager;
class UPalHUDService;
class UPalItemContainerManager;
class UPalItemIDManager;
class UPalLocationManager;
class UPalLogManager;
class UPalMapObjectManager;
class UPalMasterDataTables;
class UPalNPCManager;
class UPalObjectCollector;
class UPalOilrigManager;
class UPalPassiveSkillManager;
class UPalPersistentSoundPlayer;
class UPalPlayerDataStorage;
class UPalPlayerManager;
class UPalRaidBossManager;
class UPalSaveGameManager;
class UPalShopManager;
class UPalSkinManager;
class UPalSupplyManager;
class UPalTutorialManager;
class UPalVisualEffectDataBase;
class UPalWazaDatabase;
class UPalWorkProgressManager;
class UPalWorldSecuritySystem;
class UWorld;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class PAL_API UPalGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPawnLocalPlayerControllerChanged, APawn*, Pawn, AController*, Controller);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCompletedCharacterMake);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFxiedCharacterName, const FString&, Name);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFxiedCharacterMakeData, const FPalPlayerDataCharacterMakeInfo&, MakeInfo);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompletedCharacterMake OnCompletedCharacterMakeDelegate;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPawnLocalPlayerControllerChanged OnPawnLocalPlayerControllerChangedDelegates;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNetworkError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InputPassword;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BanList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalGameSetting> GameSettingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalGameSetting* GameSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalMasterDataTables> MasterDataTablesClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMasterDataTables* MasterDataTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalMapObjectManager> MapObjectManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalGroupManager> GroupManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalCharacterManager> CharacterManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalCharacterContainerManager> CharacterContainerManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalCharacterContainerManager* CharacterContainerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalBaseCampManager> BaseCampManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalWorkProgressManager> WorkProgressManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalDamagePopUpManager> DamagePopUpManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalDamagePopUpManager* DamagePopUpManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalItemContainerManager> ItemContainerManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalItemIDManager> ItemIDManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalItemIDManager* ItemIDManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalWazaDatabase> WazaDatabaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalWazaDatabase* WazaDatabase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalBattleManager> BattleManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalBossBattleManager> BossBattleManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalRaidBossManager> RaidBossManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalOilrigManager> OilrigManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalPlayerDataStorage> PlayerDataStorageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalPlayerDataStorage* PlayerDataStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalHUDService> HUDServiceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalHUDService* HUDService;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalExpDatabase> ExpDatabaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalExpDatabase* ExpDatabase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalDatabaseCharacterParameter> DatabaseCharacterParameterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalDatabaseCharacterParameter* DatabaseCharacterParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalAssetStreamableManager> AssetStreamableManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalAssetStreamableManager* AssetStreamableManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalPassiveSkillManager> PassiveSkillManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalPassiveSkillManager* PassiveSkillManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalDataTableRowIdMapper> DataTableRowIdMapperClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalDataTableRowIdMapper* DataTableRowIdMapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalDeadBodyManager> DeadBodyManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalDeadBodyManager* DeadBodyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalBulletCreator> BulletCreatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalBulletCreator* BulletCreator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalPlayerManager> PlayerManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalSaveGameManager> SaveGameManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalSaveGameManager* SaveGameManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalVisualEffectDataBase> VisualEffectDataBaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalVisualEffectDataBase* VisualEffectDataBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalEventNotifySystem> EventNotifySystemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalWorldSecuritySystem> WorldSecuritySystemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalLocationManager> LocationManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalNPCManager> NPCManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalNPCManager* NPCManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalDeathPenaltyManager> DeathPenaltyManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalDeathPenaltyManager* DeathPenaltyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalCoopSkillSearchSystem> CoopSkillSearchSystemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalCoopSkillSearchSystem* CoopSkillSearchSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalCharacterImportanceManager> CharacterImportanceManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalCharacterImportanceManager* CharacterImportanceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalAudioSettingSystem> AudioSettingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalAudioSettingSystem* AudioSettingSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalCharacterParameterStorageSubsystem> CharacterParameterStorageSubsystemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalTutorialManager> TutorialManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalObjectCollector> ObjectCollectorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalActionDummyTargetManager> ActionDummyTargetManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalLogManager> LogManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalSkinManager> SkinManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalSkinManager* SkinManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalSupplyManager> SupplyManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalShopManager> ShopManagerSubsystemClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 revisionNum;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFxiedCharacterMakeData FxiedCharacterMakeDataDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFxiedCharacterName FxiedCharacterNameDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalDisplaySafeAreaDebugger* DisplaySafeAreaDebugger;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IPalGameSystemNeedSync>> NeedWorldSyncSystems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalPersistentSoundPlayer> TitleBGMPlayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalPersistentSoundPlayer* TitleBGMPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString SelectedWorldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString SelectedWorldSaveDirectoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsNewGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalOptionWorldSettings NewGameWorldSetting;
    
public:
    UPalGameInstance();

    UFUNCTION(BlueprintCallable)
    void ShowUIMultiplayRestriction(bool bOverrideChecking);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCharacterMakeScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupGameInit();
    
    UFUNCTION(BlueprintCallable)
    void SetNewWorldName(const FString& WorldName);
    
    UFUNCTION(BlueprintCallable)
    void SetIsNewGame();
    
    UFUNCTION(BlueprintCallable)
    bool SelectWorldSaveDirectoryName(const FString& WorldSaveDirectoryName);
    
    UFUNCTION(BlueprintCallable)
    bool SelectWorld(const FString& WorldName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OverrideLoadMap(const TSoftObjectPtr<UWorld>& World);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInitializeCompleteSystem();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCompletedJoinSession(bool IsSuccess, JoinSessionResultType Type);
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedFindSessions(bool bIsSuccess, const TArray<FBlueprintSessionResult>& Results, const FString& ErrorStr);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadingFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayFromTitle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNewGame() const;
    
    UFUNCTION(BlueprintCallable)
    void GoToDefaultMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSelectedWorldSaveDirectoryName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSelectedWorldName() const;
    
    UFUNCTION(BlueprintCallable)
    void CompleteInitCharacterMakeData();
    
    UFUNCTION(BlueprintCallable)
    void ClearSaveError();
    
    UFUNCTION(BlueprintCallable)
    void ClearNetworkError();
    
    UFUNCTION(BlueprintCallable)
    void CheckInvite();
    
    UFUNCTION(BlueprintCallable)
    void ApplicationHasReactivated();
    
    UFUNCTION(BlueprintCallable)
    void ApplicationHasEnteredForeground();
    
};

