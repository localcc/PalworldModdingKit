#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "InputCoreTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EHumanBone.h"
#include "EPalActionType.h"
#include "EPalAttackType.h"
#include "EPalBlowVelocityOwner.h"
#include "EPalBodyLocationType.h"
#include "EPalBodyPartsType.h"
#include "EPalDialogType.h"
#include "EPalElementType.h"
#include "EPalLimitVolumeFlag.h"
#include "EPalLocalizeTextCategory.h"
#include "EPalLogFormatType.h"
#include "EPalObjectTypeQuery.h"
#include "EPalPhysicalSurface.h"
#include "EPalPhysicsBoneType.h"
#include "EPalSupportedPlatformType.h"
#include "EPalTraceTypeQuery.h"
#include "EPalTribeID.h"
#include "EPalWazaID.h"
#include "EPalWidgetBlueprintType.h"
#include "EPalWorkSuitability.h"
#include "FixedPoint64.h"
#include "NetworkSpawnActorDelegateDelegate.h"
#include "PalCalcCharacterDamageInfo.h"
#include "PalDamageInfo.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalDebugCharacterStatusRank.h"
#include "PalDialogBoolCallbackDelegate.h"
#include "PalDropCharacterExtraParameter.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalKeyAction.h"
#include "PalMakeDamageInfo.h"
#include "PalOptionGraphicsSettings.h"
#include "PalOptionKeyboardSettings.h"
#include "PalOptionPadSettings.h"
#include "PalOptionWorldSettings.h"
#include "PalPlayerDataCharacterMakeInfo.h"
#include "PalTimerGaugeWidgetCreateInfo.h"
#include "PlayerListItem.h"
#include "Templates/SubclassOf.h"
#include "PalUtility.generated.h"

class AActor;
class ACharacter;
class AController;
class APalAIController;
class APalBullet;
class APalCharacter;
class APalGameMode;
class APalGameState;
class APalGameStateInGame;
class APalMapObject;
class APalNetworkTransmitter;
class APalPlayerCharacter;
class APalPlayerController;
class APalPlayerState;
class APalWeaponBase;
class APawn;
class APlayerController;
class UActorComponent;
class UAnimMontage;
class UAnimNotifyState;
class UCameraShakeBase;
class UDataLayerInstance;
class UImage;
class UObject;
class UPalAnimInstance;
class UPalArenaWorldSubsystem;
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
class UPalCheatManager;
class UPalCoopSkillSearchSystem;
class UPalDamagePopUpManager;
class UPalDatabaseCharacterParameter;
class UPalDeadBodyManager;
class UPalDeathPenaltyManager;
class UPalDebugSetting;
class UPalDialogParameterDialog;
class UPalEventNotifySystem;
class UPalExpDatabase;
class UPalFunnelCharacterManager;
class UPalGameInstance;
class UPalGameSetting;
class UPalGameWorldSettings;
class UPalGroupManager;
class UPalHUDDispatchParameterBase;
class UPalHUDService;
class UPalIncidentSystem;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;
class UPalInvaderManager;
class UPalItemContainerManager;
class UPalItemIDManager;
class UPalLocationManager;
class UPalLogManager;
class UPalMapObjectManager;
class UPalMasterDataTables;
class UPalMoneyData;
class UPalNPCManager;
class UPalObjectCollector;
class UPalOilrigManager;
class UPalOptionSubsystem;
class UPalOtomoHolderComponentBase;
class UPalPartnerSkillParameterComponent;
class UPalPassiveSkillManager;
class UPalPlayerDataPalStorage;
class UPalPlayerDataStorage;
class UPalPlayerInput;
class UPalPlayerInventoryData;
class UPalPlayerManager;
class UPalPlayerRecordData;
class UPalPlayerSkinData;
class UPalRCONSubsystem;
class UPalRESTAPISubsystem;
class UPalRaidBossManager;
class UPalRandomizerManager;
class UPalSaveGameManager;
class UPalShopManager;
class UPalSignificanceManager;
class UPalSkinManager;
class UPalStaticItemDataBase;
class UPalSupplyManager;
class UPalTechnologyData;
class UPalTimeManager;
class UPalTutorialManager;
class UPalVisualEffectDataBase;
class UPalWazaDatabase;
class UPalWorkProgressManager;
class UPalWorldMapUIData;
class UPalWorldObjectRecordWorldSubsystem;
class UPalWorldSecuritySystem;
class UPrimitiveComponent;
class UProjectileMovementComponent;
class USceneComponent;
class USkeletalMeshComponent;
class UTexture2D;

UCLASS(Blueprintable)
class PAL_API UPalUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FLoadIconToImageDelegate, UImage*, ImageWidget, UTexture2D*, Texture);
    
    UPalUtility();

    UFUNCTION(BlueprintCallable)
    static void UpdatePlayerCharacterParameter(const APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateLocalPlayerParameter(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void UnRegisterActorTickFunction(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnlockBaseCampLevelAchievement(const UObject* WorldContextObject, const int32 Level);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnlockAchievement(const UObject* WorldContextObject, const FString& AchievementId, const int32 Progress);
    
    UFUNCTION(BlueprintCallable)
    static bool TryGetHeadWorldPosition(APalCharacter* Character, FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ToPointerAddress(const UObject* Obj);
    
    UFUNCTION(BlueprintCallable)
    static void TeleportToPlayerByIndex(APalPlayerController* Controller, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static void TeleportInitLocation(APalPlayerCharacter* Target);
    
    UFUNCTION(BlueprintCallable)
    static bool TeleportAroundLoccation(APalCharacter* Target, const FVector& Location, const FQuat& Rotation);
    
    UFUNCTION(BlueprintCallable)
    static bool Teleport(APalCharacter* Target, const FVector& Location, const FQuat& Rotation, const bool bNoCheck, const bool bAroundCheck);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SynchronizedGroup(const UObject* WorldContextObject, UPalIndividualCharacterHandle* FromHandle, UPalIndividualCharacterHandle* ToHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString SteamLanguageNameToCultureName(const UObject* WorldContextObject, const FString& SteamLanguageName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SphereOverlapLimitVolume(const UObject* WorldContextObject, EPalLimitVolumeFlag LimitVolumeFlag, const FVector Center, const float Radius);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpectatorOn(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpectatorOff(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static AController* SpawnControllerAndPossess(TSubclassOf<AController> ControllerClass, APawn* ControlActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SpawnActorBroadcast(const UObject* WorldContextObject, UClass* actorClass, AActor* NetworkOwner, AActor* Owner, FName Name, FTransform SpawnTransform, TSubclassOf<AController> Controller, FGuid& SpawnGUID, FNetworkSpawnActorDelegate SpawnDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void SortActorListByLabel(UPARAM(Ref) TArray<AActor*>& ActorList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowUI(const UObject* WorldContextObject, const EPalWidgetBlueprintType WBPType, UPalHUDDispatchParameterBase* Parameter);
    
    UFUNCTION(BlueprintCallable)
    static void SetYawApplyRate(AActor* Actor, float Rate, FName flagName);
    
    UFUNCTION(BlueprintCallable)
    static void SetVoiceID(AActor* TargetActor, int32 VoiceID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetVisibleComponentInDataLayer(const UObject* WorldContextObject, UDataLayerInstance* TargetDataLayer, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetUnRidingCharacterCollision(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static FTransform SetTransformQuat(FTransform TargetTransform, FQuat NewQuat);
    
    UFUNCTION(BlueprintCallable)
    static FTimerHandle SetTimerWithGaugeWidget(UObject* Object, const FPalTimerGaugeWidgetCreateInfo& createInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTelemetry(const UObject* WorldContextObject, const FName& Key, const FString& Value, FName Namespace);
    
    UFUNCTION(BlueprintCallable)
    static void SetStatusPoint(UPalIndividualCharacterHandle* Handle, FName StatusName, int32 Point);
    
    UFUNCTION(BlueprintCallable)
    static void SetSpeedCollisionEnable(AActor* Actor, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetRidingCharacterCollision(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPassword(const UObject* WorldContextObject, const FString& Password);
    
    UFUNCTION(BlueprintCallable)
    static void SetOtomoCollisionProfile(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static void SetOpacityForCharacter(AActor* Character, float opacityIntensity);
    
    UFUNCTION(BlueprintCallable)
    static void SetMoveDisableFlag(AActor* Actor, bool isDisable, FName flagName);
    
    UFUNCTION(BlueprintCallable)
    static void SetHPByRateToHandle(UPalIndividualCharacterHandle* Handle, float Rate);
    
    UFUNCTION(BlueprintCallable)
    static void SetHPByRateToCharacter(APalCharacter* Character, float Rate);
    
    UFUNCTION(BlueprintCallable)
    static void SetFolderPathForBP(AActor* TargetActor, FName FolderName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetEnableSkyCreator(const UObject* WorldContextObject, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableCameraFade(AActor* Character, bool bIsEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetCoopFlag(APalCharacter* Trainer, APalCharacter* Otomo, bool bIsEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterRagdollForNooseTrap(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterRagdollForLiftup(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterRagdoll(APalCharacter* Character, bool IsKeepGravity, bool KeepRootCollision);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterLocationAtMainMeshFoot(APalCharacter* Character, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    static void SetBodyPartsGenerateOverlapEvents(APalCharacter* Character, bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetBodyPartsCollisionProfile(APalCharacter* Character, const FName ProfileName);
    
    UFUNCTION(BlueprintCallable)
    static void SetBodyPartsCollisionEnable(APalCharacter* Character, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorQuat(AActor* TargetActor, FQuat NewQuat);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SendSystemToPlayerChat(const UObject* WorldContextObject, const FString& Message, const FGuid& ReceiverPlayerUId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SendSystemAnnounce(const UObject* WorldContextObject, const FString& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText SelectText(const FText& A, const FText& B, bool bPickA);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float RSign(const float V);
    
    UFUNCTION(BlueprintCallable)
    static bool RideTo(AActor* RiderActor, AActor* RidePal, bool bIsSkipAnimation);
    
    UFUNCTION(BlueprintCallable)
    static void ReturnOtomoPalToHolder(const AController* TargetController);
    
    UFUNCTION(BlueprintCallable)
    static void ResetBodyPartsCollisionProfileToDefault(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static void RequestExecuteComponentTickNextFrame(UActorComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    static void RequestExecuteActorTickNextFrame(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveAroundInfoCollectorComponent(APalCharacter* Target);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshRagdollSkeletalMesh(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshParameterForCharacterAndHoldOtomo(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ProjectWorldToScreenBehindCamera(APlayerController* Player, const FVector& WorldPosition, FVector2D& ScreenPosition, bool& bTargetBehindCamera, bool bPlayerViewportRelative);
    
    UFUNCTION(BlueprintCallable)
    static void ProcessDeadAction(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static void ProcessDamageAndPlayEffectsByDamageInfo(AActor* Attacker, AActor* Defender, const FPalDamageInfo& DamageInfo, bool bIsEnableHitEffect);
    
    UFUNCTION(BlueprintCallable)
    static void ProcessDamageAndPlayEffects(AActor* Attacker, AActor* Defender, const FPalMakeDamageInfo& NewMakeDamageInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PointOvelapLimitVolume(const UObject* WorldContextObject, EPalLimitVolumeFlag LimitVolumeFlag, FVector Location);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayWorldCameraShake(const UObject* WorldContextObject, TSubclassOf<UCameraShakeBase> Shake, FVector Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter);
    
    UFUNCTION(BlueprintCallable)
    static void PlayMontageByMinLength(ACharacter* Character, UAnimMontage* Montange, float MinLength);
    
    UFUNCTION(BlueprintCallable)
    static void PlayMontageByFixLength(ACharacter* Character, UAnimMontage* Montange, float FixLength);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayActionByWazaID(AActor* actionActor, AActor* TargetActor, EPalWazaID WazaID);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayAction(AActor* actionActor, AActor* TargetActor, EPalActionType ActionType);
    
    UFUNCTION(BlueprintCallable)
    static void Play2MontageByFixLength(ACharacter* Character, UAnimMontage* Montange, float FixLength, UAnimMontage* LoopMontange);
    
    UFUNCTION(BlueprintCallable)
    static void PalCaptureSuccess(APalPlayerCharacter* AttackerPlayer, APalCharacter* Monster);
    
    UFUNCTION(BlueprintCallable)
    static bool PalAIMoveToTargetLocation(APalAIController* Controller, FVector Goal);
    
    UFUNCTION(BlueprintCallable)
    static bool PalAIMoveToTargetActor(APalAIController* Controller, AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotContainsAny(const TArray<UObject*> SourceArray, const TArray<UObject*> FindElms);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFixedPoint64 NextPointCalculate(FFixedPoint64 CurrentPoint, FFixedPoint64 CurrentMax, FFixedPoint64 NextMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPalDamageInfo MakeDamageInfoByWazaType(AActor* Attacker, AActor* Defencer, const USceneComponent* AttackerHitComponent, const USceneComponent* DefenderHitComponent, const FVector& HitLocation, TArray<int32> FoliageIndex, EPalWazaID WazaType, EPalBlowVelocityOwner BlowOwner, FVector NativeBlowVelocity, int32 referenceIndex, float DamageRatePerCollision);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPalDamageInfo MakeDamageInfo(const FPalMakeDamageInfo& NewMakeDamageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LotteryInt(const int32 ProbabilityPercentage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LotteryFloat(const float ProbabilityPercentage);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LoadIconToImage(const UObject* WorldContextObject, TSoftObjectPtr<UTexture2D> TexturePath, UImage* TargetImage, UPalUtility::FLoadIconToImageDelegate Callback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LineTraceToTarget_ForAIAttack(AActor* SelfActor, AActor* Target, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static void JudgePalCapture_TryAllPhase(const UPalIndividualCharacterHandle* targetHandle, const UPalIndividualCharacterHandle* throwCharacterHandle, int32 captureItemLevel, TArray<bool>& outJudgeFlagArray, bool Robbery);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool JudgePalCapture(AActor* Pal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsXSX(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsXB1(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsWorldOwner(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsWinGDK(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsWindows(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWildNPC(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidInstanceID(const FPalInstanceID& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid_ThreadSafe(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUnderWorldOceanPlaneZ(const UObject* WorldContextObject, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUGCFilter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUGCBlocked(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSteamDeck(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSneakAttackSuccessByLocation(const FVector& HitLocation, const AActor* Defender);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSleepTimeForWildLife(APalAIController* Controller, float sleepStartHours, float sleepEndHours);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsServerPlayerUID(const UObject* WorldContextObject, FGuid PlayerUId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsServer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsRandomizedPlayerUID(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPointOnBase(const UObject* WorldContextObject, const FVector& Point, const TArray<AActor*>& IgnoreActors, const TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, const float DrawDebugDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPointInDoor(const UObject* WorldContextObject, const FVector& Point, const TArray<AActor*>& IgnoreActors, const TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, const float DrawDebugDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayerControlActor(AActor* CheckActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPIEUsingPlayerStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPalMonster(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPalCharacter(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOtomo(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsOpenListenServer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNearTwoPoint(FVector point1, FVector point2, float Distance, bool ignoreHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNearTwoActorWithRootRadius(const AActor* actor1, const AActor* actor2, float Distance, bool ignoreHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNearTwoActorWithRadius(const AActor* actor1, const AActor* actor2, float Distance, bool ignoreHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNearTwoActor(const AActor* actor1, const AActor* actor2, float Distance, bool ignoreHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsMultiplayRestricted(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsMultiplayer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLocalPlayerCampPal(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLocalControlActorOrPalmi(AActor* CheckActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLocalControlActor(const AActor* CheckActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLive(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInClientConnection(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInArenaByCharacter(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsIgnoreNetworkVersionCheck(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsHairAttachAccessory(const UObject* WorldContextObject, const FName& EquipmentArmorName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsGDK(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFriend(const AActor* ActorA, const AActor* ActorB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsForceQuitOnDisconnect(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsExistsPlayerInRange(const UObject* WorldContextObject, const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsExistsInDoor(AActor* TargetActor, const TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, const float DrawDebugDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnemy(const AActor* ActorA, const AActor* ActorB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEnableRandomizeSpawner(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEnableBotLocationFlag(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsElementWeak(EPalElementType AttackType, EPalElementType defenceType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsElementStrong(EPalElementType AttackType, EPalElementType defenceType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEditorPreviewActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEditorBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDyingPlayer(const APalPlayerCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDevelopmentBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsDestructionByCompleteBuilt(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsDedicatedServer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDead(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCrossplayBlock();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsClientDedicatedServer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsChatBlocked(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCanPlaySinglePlay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCanPlayInviteCode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCanPlayDedicatedServerIP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsCanPlayDedicatedServer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCanOpenExternalWebSite();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsBuildBotBaseCamp(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsBotMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsBotEnterDungeon(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBaseCampPal(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsApplicablePowerOnlyToDamageValue(AActor* Reciever);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsApplicableDamage(UObject* Causer, AActor* Receiver, UPrimitiveComponent* ReceivedComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsAllLevelLoaded(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsAliveOrDyingFriendPlayers_ByUId(const UObject* WorldContextObject, FGuid PlayerUId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAIAttackAbleByPlayerCamera(const AActor* SelfActor, const AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InWazaMaxRange(APalCharacter* Attacker, EPalWazaID Waza, FVector TargetLocation, float TargetRadius);
    
    UFUNCTION(BlueprintCallable)
    static void InitializeHumanBoneInfo(UPalAnimInstance* AnimInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InFrustumAndDitance_PreThreshold_ActorAttackTarget(const FVector& SelfLocation, const FRotator& SelfRotator, const AActor* TargetActor, const float ThresholdElev, const float ThresholdDepr, const float DistanceNear, const float DistanceFar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InFanShapAndDitance(const AActor* SelfActor, const AActor* TargetActor, float Degree, float Distance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InFanShapAimTarget(const AActor* SelfActor, const AActor* TargetActor, float Degree);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InFanShap_TargetLocation(const AActor* SelfActor, const FVector TargetLocation, float Degree);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InFanShap_PlayerCamera(const AActor* SelfActor, const APalPlayerCharacter* Player, float Degree);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InFanShap(const AActor* SelfActor, const AActor* TargetActor, float Degree);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InConeShapAndDitance_PreThreshold_Actor(const AActor* SelfActor, const AActor* TargetActor, float Threshold, float Distance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InConeShapAndDitance_PreThreshold(FVector SelfLocation, FRotator SelfRotator, FVector TargetLocation, float Threshold, float Distance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InConeShapAndDitance_Actor(const AActor* SelfActor, const AActor* TargetActor, float Degree, float Distance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InConeShapAndDitance(FVector SelfLocation, FRotator SelfRotator, FVector TargetLocation, float Degree, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static void HeadBillboardEffectSetTransform(APalCharacter* Character, USceneComponent* Effect, const FVector AddOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasResponseToChannelByPalTraceType(const AActor* Actor, EPalTraceTypeQuery Type, TEnumAsByte<ECollisionResponse> Response);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasResponseToChannelByPalObjectType(APalCharacter* Character, EPalObjectTypeQuery Type, TEnumAsByte<ECollisionResponse> Response);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAliveFriendPlayers(APalCharacter* My);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GiveExpToAroundPlayerCharacter(const UObject* WorldContextObject, const FVector& Center, float Radius, float Exp, bool bCallDelegate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GiveExpToAroundCharacter(const UObject* WorldContextObject, const FVector& Center, float Radius, float Exp, TSubclassOf<APalCharacter> CharacterClass, bool bCallDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void GiftItem_FromOtomoCutMeat(const AActor* Otomo, const AActor* Trainer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalWorldSecuritySystem* GetWorldSecuritySystem(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetWorldOceanPlaneZ(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalWorldObjectRecordWorldSubsystem* GetWorldObjectRecorder(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static float GetWorkSpeed(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalWorkProgressManager* GetWorkProgressManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWeakElementType(EPalElementType type1, EPalElementType type2, TArray<EPalElementType>& OutArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWeakCount_ForUI(EPalElementType AttackElementType, EPalElementType defenceTypeA, EPalElementType defenceTypeB, EPalAttackType AttackType, EPalBodyPartsType BodyPartsType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWeakCount(EPalElementType AttackElementType, EPalElementType defenceTypeA, EPalElementType defenceTypeB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalWazaDatabase* GetWazaDatabase(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalVisualEffectDataBase* GetVisualEffectDatabase(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalTutorialManager* GetTutorialManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetTribeIDNameFromParameter(const UObject* WorldContextObject, UPalIndividualCharacterParameter* IndividualParameter, FName& outTribeIDName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetTribeIDNameFromCharacterID(const UObject* WorldContextObject, const FName& CharacterID, FName& outTribeIDName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EPalTribeID GetTribeIDFromCharacterID(const UObject* WorldContextObject, const FName& CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat GetTransformQuat(const FTransform SourceTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APalPlayerController* GetTrainerPlayerController_ForServer(AActor* Monster);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APalPlayerCharacter* GetTrainerPlayer(const AActor* Monster);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalTimeManager* GetTimeManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalTechnologyData* GetTechnologyDataByPlayerUID(const UObject* WorldContextObject, FGuid PlayerUId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalSupplyManager* GetSupplyManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetStatusPoint(UPalIndividualCharacterHandle* Handle, FName StatusName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetStatUnitResult(const UObject* WorldContextObject, float& FrameTime, float& GameThreadTime, float& RenderThreadTime, float& GPUTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalPartnerSkillParameterComponent* GetSpawnedOtomoPalPartnerSkill(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalSkinManager* GetSkinManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalSignificanceManager* GetSignificanceManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalShopManager* GetShopManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetServerWorldDisplayName(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EPalLogFormatType GetServerLogFormatType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalSaveGameManager* GetSaveGameManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSafeZero(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetRTTJitter(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalRESTAPISubsystem* GetRESTAPISubsystem(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetRelativeTransformFromRoot(USceneComponent* SceneComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalPlayerRecordData* GetRecordDataByPlayerUID(const UObject* WorldContextObject, FGuid PlayerUId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalRCONSubsystem* GetRCONSubsystem(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRangeToGround(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRandomPointList(int32 pointNum, int32 maxLoopCount, float minXPos, float maxXPos, float minYPos, float maxYPos, float SizeX, float SizeY, FRandomStream RandomStream, TArray<FVector2D>& outPointArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalRandomizerManager* GetRandomizerManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalRaidBossManager* GetRaidBossManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPlayerUniqueIdToString(const FUniqueNetIdRepl& UserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FGuid GetPlayerUIdByString(const UObject* WorldContextObject, const FString& PlayerUIdOrSteamId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetPlayerUIDByActor(const AActor* playerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APalPlayerState* GetPlayerStateByUserId(const UObject* WorldContextObject, const FString& UserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APalPlayerState* GetPlayerStateByPlayerUid(const UObject* WorldContextObject, const FGuid& PlayerUId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APalPlayerState* GetPlayerStateByPlayer(const APalPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APalPlayerState* GetPlayerState(const AActor* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalPlayerSkinData* GetPlayerSkinDataFromPlayerUId(const UObject* WorldContextObject, FGuid InPlayerUId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPalPlayerSkinData* GetPlayerSkinDataFromCharacter(APalPlayerCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalPlayerManager* GetPlayerManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FString> GetPlayerListDisplayMessages(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetPlayerListDisplayMessage(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FPlayerListItem> GetPlayerList(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetPlayerEquipmentShield(const UObject* WorldContextObject, FGuid PlayerUId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetPlayerEquipmentPassiveList(const UObject* WorldContextObject, FGuid PlayerUId, TArray<FName>& outPassiveList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetPlayerEquipmentHP(const UObject* WorldContextObject, FGuid PlayerUId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetPlayerEquipmentDefense(const UObject* WorldContextObject, FGuid PlayerUId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalPlayerDataStorage* GetPlayerDataStorage(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APalPlayerController* GetPlayerControllerByPlayerUId(const UObject* WorldContextObject, const FGuid& PlayerUId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APalPlayerController* GetPlayerControllerByPlayerId(const UObject* WorldContextObject, const int32 PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APawn* GetPlayerControlledPawn(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APalCharacter* GetPlayerControlledCharacter(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APalPlayerCharacter* GetPlayerCharacterByPlayerUID(const UObject* WorldContextObject, const FGuid PlayerUId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APalPlayerCharacter* GetPlayerCharacterByPlayerIndex(const UObject* WorldContextObject, const int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ACharacter* GetPlayerCharacterByPlayerId(const UObject* WorldContextObject, const int32 PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APalPlayerCharacter* GetPlayerCharacter(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EPalSupportedPlatformType GetPlatformType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetPhysicsRootBoneName(AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetPhysicsBoneName(AActor* Character, EPalPhysicsBoneType boneType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPhysicsBoneIndex(AActor* Character, EPalPhysicsBoneType boneType);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<EPhysicalSurface> GetPhysicalSurfaceTypeByActor(AActor* SelfActor, FName SocketName, const FVector& OffsetSt, const FVector& OffsetEd, bool& bHit);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TEnumAsByte<EPhysicalSurface> GetPhysicalSurfaceType(const UObject* WorldContextObject, const FVector& RayStart, const FVector& RayEnd, bool& bHit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetPassword(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalPassiveSkillManager* GetPassiveSkillManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalPlayerDataPalStorage* GetPalStorageDataByPlayerUID(const UObject* WorldContextObject, FGuid PlayerUId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalObjectCollector* GetPalObjectCollector(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetPalMonsters(const UObject* WorldContextObject, TArray<APalCharacter*>& OutCharacters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APalPlayerCharacter* GetPalmi(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetPalIconInfoByCharacterID(UObject* WorldContextObject, const FPalDataTableRowName_PalMonsterData& CharacterID, TSoftObjectPtr<UTexture2D>& outIcon, bool& outIsRare, bool& outIsBoss);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPalGameWorldSettings* GetPalGameWorldSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APalGameStateInGame* GetPalGameStateInGame(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APalGameState* GetPalGameState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APalGameMode* GetPalGameMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalGameInstance* GetPalGameInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPalDebugSetting* GetPalDebugSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalCheatManager* GetPalCheatManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetPalCharacters(const UObject* WorldContextObject, TArray<APalCharacter*>& OutCharacters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetOverrideLoginPlayerUId(const UObject* WorldContextObject, FGuid& PlayerUId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetOverlapFoliageIndexByComponent(UPrimitiveComponent* AttackComponent, UPrimitiveComponent* FolageComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetOutPacketLoss(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalOtomoHolderComponentBase* GetOtomoHolderComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPalOtomoHolderComponentBase* GetOtomoHolderByOtomoPal(AActor* OtomoPal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FPalOptionWorldSettings GetOptionWorldSettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalOptionSubsystem* GetOptionSubsystem(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FPalOptionPadSettings GetOptionPadSettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FPalOptionKeyboardSettings GetOptionKeyboardSettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FPalOptionGraphicsSettings GetOptionGraphicsSettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalOilrigManager* GetOilrigManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetOffFromPal(AActor* RiderActor, bool bIsSkipAnimation, bool bNoAnimCancel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetNumPlayers(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalNPCManager* GetNPCManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APalNetworkTransmitter* GetNetworkTransmitterByPlayerId(const UObject* WorldContextObject, const int32 PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APalNetworkTransmitter* GetNetworkTransmitterByPlayerCharacter(APalPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APalNetworkTransmitter* GetNetworkTransmitter(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetNearstPlayerDistance2D(const UObject* WorldContextObject, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    static APalCharacter* GetNearestEnemyByLocation_FrontPlayerCamera(FVector Location, APalCharacter* myCharacter, APalPlayerCharacter* Player, float InDegree, float InDistance, float InHeight);
    
    UFUNCTION(BlueprintCallable)
    static APalCharacter* GetNearestEnemyByLocation(FVector Location, APalCharacter* myCharacter, float& OutMinRange);
    
    UFUNCTION(BlueprintCallable)
    static APalMapObject* GetNearestEnemyBuildObject(AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMontageSectionLengthDefault(UAnimMontage* Montange);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMontageSectionLength(UAnimMontage* Montange, FName SectionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMontageNotifyStates(UAnimMontage* Montange, TArray<UAnimNotifyState*>& outStates, FName SectionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMoneyData* GetMoneyDataByPlayerUID(const UObject* WorldContextObject, FGuid PlayerUId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMasterDataTables* GetMasterDataTables(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMapObjectManager* GetMapObjectManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USkeletalMeshComponent* GetMainMeshByActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalLogManager* GetLogManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalLocationManager* GetLocationManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalWorldMapUIData* GetLocalWorldMapData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalTechnologyData* GetLocalTechnologyData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalPlayerRecordData* GetLocalRecordData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FGuid GetLocalPlayerUID(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APalPlayerState* GetLocalPlayerState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetLocalPlayerID(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerController* GetLocalPlayerController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalPlayerDataPalStorage* GetLocalPalStorageData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalPlayerInput* GetLocalPalPlayerInput(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalMoneyData* GetLocalMoneyData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalPlayerInventoryData* GetLocalInventoryData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPalItemIDManager* GetItemIDManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPalItemContainerManager* GetItemContainerManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalPlayerInventoryData* GetInventoryDataByPlayerUID(const UObject* WorldContextObject, FGuid PlayerUId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalInvaderManager* GetInvaderManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetInPacketLoss(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetInitializedPlayerSaveParemter(const UObject* WorldContextObject, const int32 Level, FPalIndividualCharacterSaveParameter& outParameter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetInitializedCharacterSaveParemter_NPCOtomo(const UObject* WorldContextObject, const FName CharacterID, const FName UniqueNPCID, const int32 Level, const FGuid& OwnerPlayerUId, FPalIndividualCharacterSaveParameter& outParameter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetInitializedCharacterSaveParemter_DebugDefaultParamSetup(const UObject* WorldContextObject, const FName CharacterID, const FName UniqueNPCID, const int32 Level, const FGuid& OwnerPlayerUId, FPalIndividualCharacterSaveParameter& outParameter, bool DisableRandomPassiveSkilll, TArray<EPalWazaID> WazaList, TArray<FName> PassiveSkillList, int32 Rank, TArray<FPalDebugCharacterStatusRank> StatusRank, bool RarePalAble);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetInitializedCharacterSaveParemter(const UObject* WorldContextObject, const FName CharacterID, const FName UniqueNPCID, const int32 Level, const FGuid& OwnerPlayerUId, FPalIndividualCharacterSaveParameter& outParameter, bool DisableRandomPassiveSkill, bool RarePalAble);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPalInstanceID GetIndividualIDByActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPalInstanceID GetIndividualID(const UPalIndividualCharacterHandle* Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalIndividualCharacterParameter* GetIndividualCharacterParameterByIstanceID(const UObject* WorldContextObject, const FPalInstanceID& InstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPalIndividualCharacterParameter* GetIndividualCharacterParameterByActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPalIndividualCharacterHandle* GetIndividualCharacterHandleByActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalIncidentSystem* GetIncidentSystem(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetHumanNPCs(const UObject* WorldContextObject, TArray<APalCharacter*>& OutCharacters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalHUDService* GetHUDService(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FName GetHairAttachAccessorySocketName(const UObject* WorldContextObject, const FName& HairEquipmentName, const FName& BodyTypeName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalGroupManager* GetGroupManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalGameSetting* GetGameSetting(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FName> GetGainStatusItemEffectStatus(const UObject* WorldContextObject, const FName ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalFunnelCharacterManager* GetFunnelCharacterManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetFloorLocationByActor(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFloorHitResultByLocation(AActor* TargetActor, FVector TargetLocation, float SearchDistance, FHitResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetFloorHitLocationByLocation(AActor* TargetActor, FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetFloorHitLocationByActor(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetFirstLine(const FString& SourceString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalExpDatabase* GetExpDatabase(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetExclamationMarkLocation(const APalCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalEventNotifySystem* GetEventNotifySystem(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ECollisionChannel> GetEngineCollisionChannelByPalTraceType(EPalTraceTypeQuery Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ECollisionChannel> GetEngineCollisionChannelByPalObjectType(EPalObjectTypeQuery Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ECollisionChannel> GetEngineCollisionChannel(EPalObjectTypeQuery channnel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<APalCharacter*> GetEnemiesByLocation2D(const UObject* WorldContextObject, FVector Location, APalCharacter* myCharacter, float minDistance, float MaxDistance, float minHeight, float maxHeight);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<APalCharacter*> GetEnemiesByLocation(const UObject* WorldContextObject, FVector Location, APalCharacter* myCharacter, float minDistance, float MaxDistance);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetElementMultiplay(const UObject* WorldContextObject, EPalElementType AttackElementType, EPalElementType defenceTypeA, EPalElementType defenceTypeB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EHumanBone GetEHumanBoneFromBoneName(FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetDisplayVersion(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetDiffVelocity(AActor* A, AActor* B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetDefaultObjectByBlueprint(UObject* bp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetDefaultObject(UClass* ObjectClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetDebugEnemySpawnCountForBot(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetDebugBotBaseCampWorkerCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FName GetDebugBotBaseCampMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalDeathPenaltyManager* GetDeathPenaltyManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalDeadBodyManager* GetDeadBodyManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalDatabaseCharacterParameter* GetDatabaseCharacterParameter(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPalDamagePopUpManager* GetDamagePopUpManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static EPalWorkSuitability GetCurrentWorkSuitability(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalCoopSkillSearchSystem* GetCoopSkillSearchSystem(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AController* GetController(const UObject* WorldContextObject, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool GetClipboard(FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* GetClassFromBlueprintAsset(const FAssetData& Asset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCharacterRadius(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalCharacterParameterStorageSubsystem* GetCharacterParameterStorageSubsystem(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalCharacterManager* GetCharacterManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetCharacterMakeInfoFromLocalPlayer(const UObject* WorldContextObject, FPalPlayerDataCharacterMakeInfo& OutMakeInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalCharacterImportanceManager* GetCharacterImportanceManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetCharacterIDReplacedName(FName originalID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetCharacterIDFromTribeID(const EPalTribeID TribeID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetCharacterIDFromCharacter(const APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalCharacterContainerManager* GetCharacterContainerManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetCharacterApartFromPlayer(const UObject* WorldContextObject, TArray<APalCharacter*>& OutCharacters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetCalculatedCaptureRate(const UObject* WorldContextObject, float baseRate, TArray<float>& outCalculatedRateArray);
    
    UFUNCTION(BlueprintCallable)
    static UProjectileMovementComponent* GetBulletProjectileComponent(const TSubclassOf<APalBullet>& BulletClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalBulletCreator* GetBulletCreator(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalBossBattleManager* GetBossBattleManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetBoneNameFromEHumanBone(EHumanBone humanBone);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPalBodyPartsType GetBodyPartsType(const UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetBodyLocation(AActor* Character, EPalBodyLocationType bodyLocationType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalBattleManager* GetBattleManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalBaseCampManager* GetBaseCampManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalAudioSettingSystem* GetAudioSettingSystem(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetAttackTargetLocation(const AActor* Attacker, const AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAttachInformationByBodyLocation(AActor* Character, EPalBodyLocationType bodyLocationType, USceneComponent*& AttachComponent, FName& attachBoneName, FTransform& attachRelativeTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalAssetStreamableManager* GetAssetStreamableManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetArrivableLocation(UObject* WorldContextObject, const FVector& StartLocation, const FVector& TargetLocation, const float OffsetZUp, const float OffsetZUnder, EPalTraceTypeQuery TraceTypeQuery, const float Range, FVector& OutLocation, float& OutDistance, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalArenaWorldSubsystem* GetArenaWorldSubsystem(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetArenaDamgeRate(const AActor* Attacker, const AActor* Defender);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetAPIBaseURL(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetAllPlayerStates(const UObject* WorldContextObject, TArray<APalPlayerState*>& OutPlayerStates);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetAllPlayerCharacters(const UObject* WorldContextObject, TArray<APalCharacter*>& OutPlayers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetAllControlledCharacters(const UObject* WorldContextObject, TArray<APalCharacter*>& OutCharacters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetAkComponentAttachName(AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetAdminPasswordForCmdline(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetAdEffectBaseURL(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat GetActorQuat(const AActor* SourceActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetActorByGrid(UObject* WorldContextObject, TSubclassOf<AActor> actorClass, FVector2D minPoint, FVector2D maxPoint, int32 gridXMax, int32 gridYMax, int32 gridXNum, int32 gridYNum, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FPalKeyAction> GetActionsByKey(const UObject* WorldContextObject, FKey Key);
    
    UFUNCTION(BlueprintCallable)
    static void GeneralTurnToActor_WithMovementRotationSpeed(AActor* TurnActor, const AActor* GoalDirectionActor, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static void GeneralTurnToActor(AActor* TurnActor, const AActor* TargetActor, float LerpSpeed, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static void GeneralTurnLinearToActor(AActor* TurnActor, const AActor* TargetActor, float LerpSpeed, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static void GeneralTurnLinear(AActor* TurnActor, FVector GoalDirection, float AngleDegreeSpeed, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static void GeneralTurn_WithMovementRotationSpeed(AActor* TurnActor, FVector GoalDirection, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static void GeneralTurn(AActor* TurnActor, FVector GoalDirection, float LerpSpeed, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static APalCharacter* FindRiderByRidingActor(const AActor* RidingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APalCharacter* FindOwnerPalCharacter(const UObject* startObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* FindOwnerActor(const UObject* startObject);
    
    UFUNCTION(BlueprintCallable)
    static AActor* FindHomingTarget_ForPlayer(APalPlayerCharacter* Player, float MinRange, float MaxRange, float InFrontDegree);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText EnumToLocalizedText(const UObject* WorldContextObject, const FString& EnumStr, const EPalLocalizeTextCategory TextCategory, const FString& TextIdPrefix);
    
    UFUNCTION(BlueprintCallable)
    static void EmitSoundForAIListener(FName SoundFName, AActor* EmitterCharacter, FVector EmitLocation, float VolumeRate);
    
    UFUNCTION(BlueprintCallable)
    static void Editor_AddCharacterToImportanceManager(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static void DropItem_FromEnemyDeath(const AActor* EnemyActor, const AActor* LastAttacker);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DropCharactersCircularly_ServerInternal(const UObject* WorldContextObject, const TArray<UPalIndividualCharacterHandle*>& IndividualHandles, const FVector& Location, const FPalDropCharacterExtraParameter ExtraParameter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DropCharacter_ServerInternal(const UObject* WorldContextObject, const FPalInstanceID& IndividualId, FVector DropLocation, const FGuid& RequestPlayerUId, const bool bPickableAnyone, bool CreateLocation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FGuid DialogWithParameter(const UObject* WorldContextObject, UPalDialogParameterDialog* Parameter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FGuid Dialog(const UObject* WorldContextObject, const FText Message, const EPalDialogType DialogType, FPalDialogBoolCallback Callback, const bool bNegativeDefault);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyActorIncludingAttachedActors(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector CutVectorByLength(FVector Vector, float Length);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector CutVectorByAngle(FVector Target, FVector BaseAxis, float maxAngleDegree);
    
    UFUNCTION(BlueprintCallable)
    static void CreateUNKO(APalCharacter* Character, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ETraceTypeQuery> ConvertToTraceTypeQuery(EPalTraceTypeQuery Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EPhysicalSurface> ConvertToPhysicalSurface(EPalPhysicalSurface Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EObjectTypeQuery> ConvertToObjectTypeQuery(EPalObjectTypeQuery Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Convert_PalInstanceIDToString(FPalInstanceID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ContainsOnlyIn(const TArray<UObject*> SourceArray, const TArray<UObject*> TargetElms, UObject* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ContainsAny(const TArray<UObject*> SourceArray, const TArray<UObject*> FindElms);
    
    UFUNCTION(BlueprintCallable)
    static bool ClipboardCopy(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    static void ClearCharacterRagdoll(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeDefaultLandMovementModeForWalking(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanUseTargetRankUp(const UObject* WorldContextObject, UPalIndividualCharacterParameter* IndividualParameter, const UPalStaticItemDataBase* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanUseTargetPalExpItem(const UObject* WorldContextObject, UPalIndividualCharacterParameter* IndividualParameter, const UPalStaticItemDataBase* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanUseTargetMedicine(const UObject* WorldContextObject, UPalIndividualCharacterParameter* IndividualParameter, const UPalStaticItemDataBase* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanSpawnDashEffect(AActor* dashActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanNooseTrap(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool CanAdjustActorToFloor(AActor* TargetActor, float UpOffset, FVector& OutLocation, bool ShortRayLength);
    
    UFUNCTION(BlueprintCallable)
    static bool CalculateLaunchVelocity(FVector StartPoint, FVector EndPoint, float Time, float Gravity, FVector& OutInitialVelocity);
    
    UFUNCTION(BlueprintCallable)
    static void CalcSceneComponentBounds(TArray<USceneComponent*> SceneComps, FBox& OutBounds);
    
    UFUNCTION(BlueprintCallable)
    static FRotator CalcRotationGeneralTurnLinear(const FVector& InForwardDirection, const FVector& InRightDirection, const float CurrentYaw, const FVector& InGoalDirection, float AngleDegreeSpeed, float DeltaTime, const float YawRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CalcRemainBattleTime(FDateTime TimeLimit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CalcNPCWeaponDamage(const APalWeaponBase* Weapon);
    
    UFUNCTION(BlueprintCallable)
    static int32 CalcDamageCharacter(const FPalDamageInfo& DamageInfo, const AActor* Defender, const FPalCalcCharacterDamageInfo& CharacterDamageInfo);
    
    UFUNCTION(BlueprintCallable)
    static int32 CalcDamage(const FPalDamageInfo& DamageInfo, const AActor* Defender);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalcCaptureRateByStatus(const AActor* TargetPal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector CalcBlowVelocity(EPalBlowVelocityOwner VelocityType, const AActor* Attacker, const USceneComponent* HitComponent, FVector HitLocation, const AActor* Defender, FVector NativeVelocity);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxOvelapLimitVolume(const UObject* WorldContextObject, EPalLimitVolumeFlag LimitVolumeFlag, const FVector BoxPos, FVector BoxExtent, const FQuat& Rot);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyGuildColorForCharacter(FLinearColor Color, APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float AngleBetweenVector(FVector A, FVector B, bool IsDegree);
    
    UFUNCTION(BlueprintCallable)
    static float Angle180from360Degree(float Degree);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AlertWithCallback(const UObject* WorldContextObject, const FText Message, FPalDialogBoolCallback Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Alert(const UObject* WorldContextObject, const FText Message);
    
    UFUNCTION(BlueprintCallable)
    static AActor* AdjustActorToFloor(AActor* TargetActor, float UpOffset, bool ShortRayLength);
    
    UFUNCTION(BlueprintCallable)
    static void AddForceWithMassScale(APalCharacter* TargetCharacter, FVector Force, FName BoneName, bool IsImplus);
    
    UFUNCTION(BlueprintCallable)
    static void AddDownForceAllRigidBody(APalCharacter* TargetCharacter, float Rate);
    
};

