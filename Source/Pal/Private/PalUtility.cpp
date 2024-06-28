#include "PalUtility.h"
#include "Templates/SubclassOf.h"

UPalUtility::UPalUtility() {
}

void UPalUtility::UpdatePlayerCharacterParameter(const APalCharacter* Character) {
}

void UPalUtility::UpdateLocalPlayerParameter(const UObject* WorldContextObject) {
}

void UPalUtility::UnRegisterActorTickFunction(AActor* Actor) {
}

void UPalUtility::UnlockBaseCampLevelAchievement(const UObject* WorldContextObject, const int32 Level) {
}

void UPalUtility::UnlockAchievement(const UObject* WorldContextObject, const FString& AchievementId, const int32 Progress) {
}

bool UPalUtility::TryGetHeadWorldPosition(APalCharacter* Character, FVector& OutLocation) {
    return false;
}

FString UPalUtility::ToPointerAddress(const UObject* Obj) {
    return TEXT("");
}

void UPalUtility::TeleportToPlayerByIndex(APalPlayerController* Controller, int32 PlayerIndex) {
}

void UPalUtility::TeleportInitLocation(APalPlayerCharacter* Target) {
}

bool UPalUtility::TeleportAroundLoccation(APalCharacter* Target, const FVector& Location, const FQuat& Rotation) {
    return false;
}

bool UPalUtility::Teleport(APalCharacter* Target, const FVector& Location, const FQuat& Rotation, const bool bNoCheck, const bool bAroundCheck) {
    return false;
}

bool UPalUtility::SynchronizedGroup(const UObject* WorldContextObject, UPalIndividualCharacterHandle* FromHandle, UPalIndividualCharacterHandle* ToHandle) {
    return false;
}

FString UPalUtility::SteamLanguageNameToCultureName(const UObject* WorldContextObject, const FString& SteamLanguageName) {
    return TEXT("");
}

bool UPalUtility::SphereOverlapLimitVolume(const UObject* WorldContextObject, EPalLimitVolumeFlag LimitVolumeFlag, const FVector Center, const float Radius) {
    return false;
}

void UPalUtility::SpectatorOn(const UObject* WorldContextObject) {
}

void UPalUtility::SpectatorOff(const UObject* WorldContextObject) {
}

AController* UPalUtility::SpawnControllerAndPossess(TSubclassOf<AController> ControllerClass, APawn* ControlActor) {
    return NULL;
}

bool UPalUtility::SpawnActorBroadcast(const UObject* WorldContextObject, UClass* actorClass, AActor* NetworkOwner, AActor* Owner, FName Name, FTransform SpawnTransform, TSubclassOf<AController> Controller, FGuid& SpawnGUID, FNetworkSpawnActorDelegate SpawnDelegate) {
    return false;
}

void UPalUtility::SortActorListByLabel(TArray<AActor*>& ActorList) {
}

void UPalUtility::ShowUI(const UObject* WorldContextObject, const EPalWidgetBlueprintType WBPType, UPalHUDDispatchParameterBase* Parameter) {
}

void UPalUtility::SetYawApplyRate(AActor* Actor, float Rate, FName flagName) {
}

void UPalUtility::SetVoiceID(AActor* TargetActor, int32 VoiceID) {
}

void UPalUtility::SetVisibleComponentInDataLayer(const UObject* WorldContextObject, UDataLayerInstance* TargetDataLayer, bool bEnable) {
}

void UPalUtility::SetUnRidingCharacterCollision(APalCharacter* Character) {
}

FTransform UPalUtility::SetTransformQuat(FTransform TargetTransform, FQuat NewQuat) {
    return FTransform{};
}

FTimerHandle UPalUtility::SetTimerWithGaugeWidget(UObject* Object, const FPalTimerGaugeWidgetCreateInfo& createInfo) {
    return FTimerHandle{};
}

void UPalUtility::SetTelemetry(const UObject* WorldContextObject, const FName& Key, const FString& Value, FName Namespace) {
}

void UPalUtility::SetStatusPoint(UPalIndividualCharacterHandle* Handle, FName StatusName, int32 Point) {
}

void UPalUtility::SetSpeedCollisionEnable(AActor* Actor, bool bEnable) {
}

void UPalUtility::SetRidingCharacterCollision(APalCharacter* Character) {
}

void UPalUtility::SetPassword(const UObject* WorldContextObject, const FString& Password) {
}

void UPalUtility::SetOtomoCollisionProfile(APalCharacter* Character) {
}

void UPalUtility::SetOpacityForCharacter(AActor* Character, float opacityIntensity) {
}

void UPalUtility::SetMoveDisableFlag(AActor* Actor, bool isDisable, FName flagName) {
}

void UPalUtility::SetHPByRateToHandle(UPalIndividualCharacterHandle* Handle, float Rate) {
}

void UPalUtility::SetHPByRateToCharacter(APalCharacter* Character, float Rate) {
}

void UPalUtility::SetFolderPathForBP(AActor* TargetActor, FName FolderName) {
}

void UPalUtility::SetEnableSkyCreator(const UObject* WorldContextObject, bool bEnable) {
}

void UPalUtility::SetEnableCameraFade(AActor* Character, bool bIsEnable) {
}

void UPalUtility::SetCoopFlag(APalCharacter* Trainer, APalCharacter* Otomo, bool bIsEnable) {
}

void UPalUtility::SetCharacterRagdollForNooseTrap(APalCharacter* Character) {
}

void UPalUtility::SetCharacterRagdollForLiftup(APalCharacter* Character) {
}

void UPalUtility::SetCharacterRagdoll(APalCharacter* Character, bool IsKeepGravity, bool KeepRootCollision) {
}

void UPalUtility::SetCharacterLocationAtMainMeshFoot(APalCharacter* Character, const FVector& Location) {
}

void UPalUtility::SetBodyPartsGenerateOverlapEvents(APalCharacter* Character, bool IsEnable) {
}

void UPalUtility::SetBodyPartsCollisionProfile(APalCharacter* Character, const FName ProfileName) {
}

void UPalUtility::SetBodyPartsCollisionEnable(APalCharacter* Character, bool bEnable) {
}

void UPalUtility::SetActorQuat(AActor* TargetActor, FQuat NewQuat) {
}

void UPalUtility::SendSystemToPlayerChat(const UObject* WorldContextObject, const FString& Message, const FGuid& ReceiverPlayerUId) {
}

void UPalUtility::SendSystemAnnounce(const UObject* WorldContextObject, const FString& Message) {
}

FText UPalUtility::SelectText(const FText& A, const FText& B, bool bPickA) {
    return FText::GetEmpty();
}

float UPalUtility::RSign(const float V) {
    return 0.0f;
}

bool UPalUtility::RideTo(AActor* RiderActor, AActor* RidePal, bool bIsSkipAnimation) {
    return false;
}

void UPalUtility::ReturnOtomoPalToHolder(const AController* TargetController) {
}

void UPalUtility::ResetBodyPartsCollisionProfileToDefault(APalCharacter* Character) {
}

void UPalUtility::RequestExecuteComponentTickNextFrame(UActorComponent* InComponent) {
}

void UPalUtility::RequestExecuteActorTickNextFrame(AActor* InActor) {
}

void UPalUtility::RemoveAroundInfoCollectorComponent(APalCharacter* Target) {
}

void UPalUtility::RefreshRagdollSkeletalMesh(APalCharacter* Character) {
}

void UPalUtility::RefreshParameterForCharacterAndHoldOtomo(APalCharacter* Character) {
}

bool UPalUtility::ProjectWorldToScreenBehindCamera(APlayerController* Player, const FVector& WorldPosition, FVector2D& ScreenPosition, bool& bTargetBehindCamera, bool bPlayerViewportRelative) {
    return false;
}

void UPalUtility::ProcessDeadAction(APalCharacter* Character) {
}

void UPalUtility::ProcessDamageAndPlayEffectsByDamageInfo(AActor* Attacker, AActor* Defender, const FPalDamageInfo& DamageInfo, bool bIsEnableHitEffect) {
}

void UPalUtility::ProcessDamageAndPlayEffects(AActor* Attacker, AActor* Defender, const FPalMakeDamageInfo& NewMakeDamageInfo) {
}

bool UPalUtility::PointOvelapLimitVolume(const UObject* WorldContextObject, EPalLimitVolumeFlag LimitVolumeFlag, FVector Location) {
    return false;
}

void UPalUtility::PlayWorldCameraShake(const UObject* WorldContextObject, TSubclassOf<UCameraShakeBase> Shake, FVector Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter) {
}

void UPalUtility::PlayMontageByMinLength(ACharacter* Character, UAnimMontage* Montange, float MinLength) {
}

void UPalUtility::PlayMontageByFixLength(ACharacter* Character, UAnimMontage* Montange, float FixLength) {
}

bool UPalUtility::PlayActionByWazaID(AActor* actionActor, AActor* TargetActor, EPalWazaID WazaID) {
    return false;
}

bool UPalUtility::PlayAction(AActor* actionActor, AActor* TargetActor, EPalActionType ActionType) {
    return false;
}

void UPalUtility::Play2MontageByFixLength(ACharacter* Character, UAnimMontage* Montange, float FixLength, UAnimMontage* LoopMontange) {
}

void UPalUtility::PalCaptureSuccess(APalPlayerCharacter* AttackerPlayer, APalCharacter* Monster) {
}

bool UPalUtility::PalAIMoveToTargetLocation(APalAIController* Controller, FVector Goal) {
    return false;
}

bool UPalUtility::PalAIMoveToTargetActor(APalAIController* Controller, AActor* Target) {
    return false;
}

bool UPalUtility::NotContainsAny(const TArray<UObject*> SourceArray, const TArray<UObject*> FindElms) {
    return false;
}

FFixedPoint64 UPalUtility::NextPointCalculate(FFixedPoint64 CurrentPoint, FFixedPoint64 CurrentMax, FFixedPoint64 NextMax) {
    return FFixedPoint64{};
}

FPalDamageInfo UPalUtility::MakeDamageInfoByWazaType(AActor* Attacker, AActor* Defencer, const USceneComponent* AttackerHitComponent, const USceneComponent* DefenderHitComponent, const FVector& HitLocation, TArray<int32> FoliageIndex, EPalWazaID WazaType, EPalBlowVelocityOwner BlowOwner, FVector NativeBlowVelocity, int32 referenceIndex, float DamageRatePerCollision) {
    return FPalDamageInfo{};
}

FPalDamageInfo UPalUtility::MakeDamageInfo(const FPalMakeDamageInfo& NewMakeDamageInfo) {
    return FPalDamageInfo{};
}

bool UPalUtility::LotteryInt(const int32 ProbabilityPercentage) {
    return false;
}

bool UPalUtility::LotteryFloat(const float ProbabilityPercentage) {
    return false;
}

void UPalUtility::LoadIconToImage(const UObject* WorldContextObject, TSoftObjectPtr<UTexture2D> TexturePath, UImage* TargetImage, UPalUtility::FLoadIconToImageDelegate Callback) {
}

bool UPalUtility::LineTraceToTarget_ForAIAttack(AActor* SelfActor, AActor* Target, float Radius) {
    return false;
}

void UPalUtility::JudgePalCapture_TryAllPhase(const UPalIndividualCharacterHandle* targetHandle, const UPalIndividualCharacterHandle* throwCharacterHandle, int32 captureItemLevel, TArray<bool>& outJudgeFlagArray, bool Robbery) {
}

bool UPalUtility::JudgePalCapture(AActor* Pal) {
    return false;
}

bool UPalUtility::IsXSX(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsXB1(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsWorldOwner(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsWinGDK(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsWindows(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsWildNPC(const AActor* Actor) {
    return false;
}

bool UPalUtility::IsValidInstanceID(const FPalInstanceID& ID) {
    return false;
}

bool UPalUtility::IsValid_ThreadSafe(UObject* Object) {
    return false;
}

bool UPalUtility::IsUnderWorldOceanPlaneZ(const UObject* WorldContextObject, const FVector& Location) {
    return false;
}

bool UPalUtility::IsUGCFilter() {
    return false;
}

bool UPalUtility::IsUGCBlocked(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsSteamDeck(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsSneakAttackSuccessByLocation(const FVector& HitLocation, const AActor* Defender) {
    return false;
}

bool UPalUtility::IsSleepTimeForWildLife(APalAIController* Controller, float sleepStartHours, float sleepEndHours) {
    return false;
}

bool UPalUtility::IsServerPlayerUID(const UObject* WorldContextObject, FGuid PlayerUId) {
    return false;
}

bool UPalUtility::IsServer(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsRandomizedPlayerUID(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsPointOnBase(const UObject* WorldContextObject, const FVector& Point, const TArray<AActor*>& IgnoreActors, const TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, const float DrawDebugDuration) {
    return false;
}

bool UPalUtility::IsPointInDoor(const UObject* WorldContextObject, const FVector& Point, const TArray<AActor*>& IgnoreActors, const TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, const float DrawDebugDuration) {
    return false;
}

bool UPalUtility::IsPlayerControlActor(AActor* CheckActor) {
    return false;
}

bool UPalUtility::IsPIEUsingPlayerStart() {
    return false;
}

bool UPalUtility::IsPalMonster(const AActor* Actor) {
    return false;
}

bool UPalUtility::IsPalCharacter(AActor* Actor) {
    return false;
}

bool UPalUtility::IsOtomo(const AActor* Actor) {
    return false;
}

bool UPalUtility::IsOpenListenServer(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsNearTwoPoint(FVector point1, FVector point2, float Distance, bool ignoreHeight) {
    return false;
}

bool UPalUtility::IsNearTwoActorWithRootRadius(const AActor* actor1, const AActor* actor2, float Distance, bool ignoreHeight) {
    return false;
}

bool UPalUtility::IsNearTwoActorWithRadius(const AActor* actor1, const AActor* actor2, float Distance, bool ignoreHeight) {
    return false;
}

bool UPalUtility::IsNearTwoActor(const AActor* actor1, const AActor* actor2, float Distance, bool ignoreHeight) {
    return false;
}

bool UPalUtility::IsMultiplayRestricted(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsMultiplayer(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsLocalPlayerCampPal(const AActor* Actor) {
    return false;
}

bool UPalUtility::IsLocalControlActorOrPalmi(AActor* CheckActor) {
    return false;
}

bool UPalUtility::IsLocalControlActor(const AActor* CheckActor) {
    return false;
}

bool UPalUtility::IsLive(AActor* Actor) {
    return false;
}

bool UPalUtility::IsInClientConnection(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsInArenaByCharacter(APalCharacter* Character) {
    return false;
}

bool UPalUtility::IsIgnoreNetworkVersionCheck(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsHairAttachAccessory(const UObject* WorldContextObject, const FName& EquipmentArmorName) {
    return false;
}

bool UPalUtility::IsGDK(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsFriend(const AActor* ActorA, const AActor* ActorB) {
    return false;
}

bool UPalUtility::IsForceQuitOnDisconnect(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsExistsPlayerInRange(const UObject* WorldContextObject, const FVector& Location, float Radius) {
    return false;
}

bool UPalUtility::IsExistsInDoor(AActor* TargetActor, const TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, const float DrawDebugDuration) {
    return false;
}

bool UPalUtility::IsEnemy(const AActor* ActorA, const AActor* ActorB) {
    return false;
}

bool UPalUtility::IsEnableRandomizeSpawner(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsEnableBotLocationFlag(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsElementWeak(EPalElementType AttackType, EPalElementType defenceType) {
    return false;
}

bool UPalUtility::IsElementStrong(EPalElementType AttackType, EPalElementType defenceType) {
    return false;
}

bool UPalUtility::IsEditorPreviewActor(AActor* Actor) {
    return false;
}

bool UPalUtility::IsEditorBuild() {
    return false;
}

bool UPalUtility::IsDyingPlayer(const APalPlayerCharacter* PlayerCharacter) {
    return false;
}

bool UPalUtility::IsDevelopmentBuild() {
    return false;
}

bool UPalUtility::IsDestructionByCompleteBuilt(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsDedicatedServer(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsDead(AActor* Actor) {
    return false;
}

bool UPalUtility::IsCrossplayBlock() {
    return false;
}

bool UPalUtility::IsClientDedicatedServer(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsChatBlocked(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsCanPlaySinglePlay() {
    return false;
}

bool UPalUtility::IsCanPlayInviteCode() {
    return false;
}

bool UPalUtility::IsCanPlayDedicatedServerIP() {
    return false;
}

bool UPalUtility::IsCanPlayDedicatedServer(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsCanOpenExternalWebSite() {
    return false;
}

bool UPalUtility::IsBuildBotBaseCamp(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsBotMode(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsBotEnterDungeon(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsBaseCampPal(const AActor* Actor) {
    return false;
}

bool UPalUtility::IsApplicablePowerOnlyToDamageValue(AActor* Reciever) {
    return false;
}

bool UPalUtility::IsApplicableDamage(UObject* Causer, AActor* Receiver, UPrimitiveComponent* ReceivedComponent) {
    return false;
}

bool UPalUtility::IsAllLevelLoaded(const UObject* WorldContextObject) {
    return false;
}

bool UPalUtility::IsAliveOrDyingFriendPlayers_ByUId(const UObject* WorldContextObject, FGuid PlayerUId) {
    return false;
}

bool UPalUtility::IsAIAttackAbleByPlayerCamera(const AActor* SelfActor, const AActor* TargetActor) {
    return false;
}

bool UPalUtility::InWazaMaxRange(APalCharacter* Attacker, EPalWazaID Waza, FVector TargetLocation, float TargetRadius) {
    return false;
}

void UPalUtility::InitializeHumanBoneInfo(UPalAnimInstance* AnimInstance) {
}

bool UPalUtility::InFrustumAndDitance_PreThreshold_ActorAttackTarget(const FVector& SelfLocation, const FRotator& SelfRotator, const AActor* TargetActor, const float ThresholdElev, const float ThresholdDepr, const float DistanceNear, const float DistanceFar) {
    return false;
}

bool UPalUtility::InFanShapAndDitance(const AActor* SelfActor, const AActor* TargetActor, float Degree, float Distance) {
    return false;
}

bool UPalUtility::InFanShapAimTarget(const AActor* SelfActor, const AActor* TargetActor, float Degree) {
    return false;
}

bool UPalUtility::InFanShap_TargetLocation(const AActor* SelfActor, const FVector TargetLocation, float Degree) {
    return false;
}

bool UPalUtility::InFanShap_PlayerCamera(const AActor* SelfActor, const APalPlayerCharacter* Player, float Degree) {
    return false;
}

bool UPalUtility::InFanShap(const AActor* SelfActor, const AActor* TargetActor, float Degree) {
    return false;
}

bool UPalUtility::InConeShapAndDitance_PreThreshold_Actor(const AActor* SelfActor, const AActor* TargetActor, float Threshold, float Distance) {
    return false;
}

bool UPalUtility::InConeShapAndDitance_PreThreshold(FVector SelfLocation, FRotator SelfRotator, FVector TargetLocation, float Threshold, float Distance) {
    return false;
}

bool UPalUtility::InConeShapAndDitance_Actor(const AActor* SelfActor, const AActor* TargetActor, float Degree, float Distance) {
    return false;
}

bool UPalUtility::InConeShapAndDitance(FVector SelfLocation, FRotator SelfRotator, FVector TargetLocation, float Degree, float Distance) {
    return false;
}

void UPalUtility::HeadBillboardEffectSetTransform(APalCharacter* Character, USceneComponent* Effect, const FVector AddOffset) {
}

bool UPalUtility::HasResponseToChannelByPalTraceType(const AActor* Actor, EPalTraceTypeQuery Type, TEnumAsByte<ECollisionResponse> Response) {
    return false;
}

bool UPalUtility::HasResponseToChannelByPalObjectType(APalCharacter* Character, EPalObjectTypeQuery Type, TEnumAsByte<ECollisionResponse> Response) {
    return false;
}

bool UPalUtility::HasAliveFriendPlayers(APalCharacter* My) {
    return false;
}

void UPalUtility::GiveExpToAroundPlayerCharacter(const UObject* WorldContextObject, const FVector& Center, float Radius, float Exp, bool bCallDelegate) {
}

void UPalUtility::GiveExpToAroundCharacter(const UObject* WorldContextObject, const FVector& Center, float Radius, float Exp, TSubclassOf<APalCharacter> CharacterClass, bool bCallDelegate) {
}

void UPalUtility::GiftItem_FromOtomoCutMeat(const AActor* Otomo, const AActor* Trainer) {
}

UPalWorldSecuritySystem* UPalUtility::GetWorldSecuritySystem(const UObject* WorldContextObject) {
    return NULL;
}

float UPalUtility::GetWorldOceanPlaneZ(const UObject* WorldContextObject) {
    return 0.0f;
}

UPalWorldObjectRecordWorldSubsystem* UPalUtility::GetWorldObjectRecorder(const UObject* WorldContextObject) {
    return NULL;
}

float UPalUtility::GetWorkSpeed(APalCharacter* Character) {
    return 0.0f;
}

UPalWorkProgressManager* UPalUtility::GetWorkProgressManager(const UObject* WorldContextObject) {
    return NULL;
}

void UPalUtility::GetWeakElementType(EPalElementType type1, EPalElementType type2, TArray<EPalElementType>& OutArray) {
}

int32 UPalUtility::GetWeakCount_ForUI(EPalElementType AttackElementType, EPalElementType defenceTypeA, EPalElementType defenceTypeB, EPalAttackType AttackType, EPalBodyPartsType BodyPartsType) {
    return 0;
}

int32 UPalUtility::GetWeakCount(EPalElementType AttackElementType, EPalElementType defenceTypeA, EPalElementType defenceTypeB) {
    return 0;
}

UPalWazaDatabase* UPalUtility::GetWazaDatabase(const UObject* WorldContextObject) {
    return NULL;
}

UPalVisualEffectDataBase* UPalUtility::GetVisualEffectDatabase(const UObject* WorldContextObject) {
    return NULL;
}

UPalTutorialManager* UPalUtility::GetTutorialManager(const UObject* WorldContextObject) {
    return NULL;
}

void UPalUtility::GetTribeIDNameFromParameter(const UObject* WorldContextObject, UPalIndividualCharacterParameter* IndividualParameter, FName& outTribeIDName) {
}

void UPalUtility::GetTribeIDNameFromCharacterID(const UObject* WorldContextObject, const FName& CharacterID, FName& outTribeIDName) {
}

EPalTribeID UPalUtility::GetTribeIDFromCharacterID(const UObject* WorldContextObject, const FName& CharacterID) {
    return EPalTribeID::None;
}

FQuat UPalUtility::GetTransformQuat(const FTransform SourceTransform) {
    return FQuat{};
}

APalPlayerController* UPalUtility::GetTrainerPlayerController_ForServer(AActor* Monster) {
    return NULL;
}

APalPlayerCharacter* UPalUtility::GetTrainerPlayer(const AActor* Monster) {
    return NULL;
}

UPalTimeManager* UPalUtility::GetTimeManager(const UObject* WorldContextObject) {
    return NULL;
}

UPalTechnologyData* UPalUtility::GetTechnologyDataByPlayerUID(const UObject* WorldContextObject, FGuid PlayerUId) {
    return NULL;
}

UPalSupplyManager* UPalUtility::GetSupplyManager(const UObject* WorldContextObject) {
    return NULL;
}

int32 UPalUtility::GetStatusPoint(UPalIndividualCharacterHandle* Handle, FName StatusName) {
    return 0;
}

void UPalUtility::GetStatUnitResult(const UObject* WorldContextObject, float& FrameTime, float& GameThreadTime, float& RenderThreadTime, float& GPUTime) {
}

UPalPartnerSkillParameterComponent* UPalUtility::GetSpawnedOtomoPalPartnerSkill(const UObject* WorldContextObject) {
    return NULL;
}

UPalSkinManager* UPalUtility::GetSkinManager(const UObject* WorldContextObject) {
    return NULL;
}

UPalSignificanceManager* UPalUtility::GetSignificanceManager(const UObject* WorldContextObject) {
    return NULL;
}

UPalShopManager* UPalUtility::GetShopManager(const UObject* WorldContextObject) {
    return NULL;
}

FString UPalUtility::GetServerWorldDisplayName(const UObject* WorldContextObject) {
    return TEXT("");
}

EPalLogFormatType UPalUtility::GetServerLogFormatType(const UObject* WorldContextObject) {
    return EPalLogFormatType::Text;
}

UPalSaveGameManager* UPalUtility::GetSaveGameManager(const UObject* WorldContextObject) {
    return NULL;
}

float UPalUtility::GetSafeZero(float Value) {
    return 0.0f;
}

float UPalUtility::GetRTTJitter(const UObject* WorldContextObject) {
    return 0.0f;
}

UPalRESTAPISubsystem* UPalUtility::GetRESTAPISubsystem(const UObject* WorldContextObject) {
    return NULL;
}

FTransform UPalUtility::GetRelativeTransformFromRoot(USceneComponent* SceneComponent) {
    return FTransform{};
}

UPalPlayerRecordData* UPalUtility::GetRecordDataByPlayerUID(const UObject* WorldContextObject, FGuid PlayerUId) {
    return NULL;
}

UPalRCONSubsystem* UPalUtility::GetRCONSubsystem(const UObject* WorldContextObject) {
    return NULL;
}

float UPalUtility::GetRangeToGround(AActor* Actor) {
    return 0.0f;
}

void UPalUtility::GetRandomPointList(int32 pointNum, int32 maxLoopCount, float minXPos, float maxXPos, float minYPos, float maxYPos, float SizeX, float SizeY, FRandomStream RandomStream, TArray<FVector2D>& outPointArray) {
}

UPalRandomizerManager* UPalUtility::GetRandomizerManager(const UObject* WorldContextObject) {
    return NULL;
}

UPalRaidBossManager* UPalUtility::GetRaidBossManager(const UObject* WorldContextObject) {
    return NULL;
}

FString UPalUtility::GetPlayerUniqueIdToString(const FUniqueNetIdRepl& UserId) {
    return TEXT("");
}

FGuid UPalUtility::GetPlayerUIdByString(const UObject* WorldContextObject, const FString& PlayerUIdOrSteamId) {
    return FGuid{};
}

FGuid UPalUtility::GetPlayerUIDByActor(const AActor* playerActor) {
    return FGuid{};
}

APalPlayerState* UPalUtility::GetPlayerStateByUserId(const UObject* WorldContextObject, const FString& UserId) {
    return NULL;
}

APalPlayerState* UPalUtility::GetPlayerStateByPlayerUid(const UObject* WorldContextObject, const FGuid& PlayerUId) {
    return NULL;
}

APalPlayerState* UPalUtility::GetPlayerStateByPlayer(const APalPlayerCharacter* Player) {
    return NULL;
}

APalPlayerState* UPalUtility::GetPlayerState(const AActor* Player) {
    return NULL;
}

UPalPlayerSkinData* UPalUtility::GetPlayerSkinDataFromPlayerUId(const UObject* WorldContextObject, FGuid InPlayerUId) {
    return NULL;
}

UPalPlayerSkinData* UPalUtility::GetPlayerSkinDataFromCharacter(APalPlayerCharacter* InCharacter) {
    return NULL;
}

UPalPlayerManager* UPalUtility::GetPlayerManager(const UObject* WorldContextObject) {
    return NULL;
}

TArray<FString> UPalUtility::GetPlayerListDisplayMessages(const UObject* WorldContextObject) {
    return TArray<FString>();
}

FString UPalUtility::GetPlayerListDisplayMessage(const UObject* WorldContextObject) {
    return TEXT("");
}

TArray<FPlayerListItem> UPalUtility::GetPlayerList(const UObject* WorldContextObject) {
    return TArray<FPlayerListItem>();
}

int32 UPalUtility::GetPlayerEquipmentShield(const UObject* WorldContextObject, FGuid PlayerUId) {
    return 0;
}

void UPalUtility::GetPlayerEquipmentPassiveList(const UObject* WorldContextObject, FGuid PlayerUId, TArray<FName>& outPassiveList) {
}

int32 UPalUtility::GetPlayerEquipmentHP(const UObject* WorldContextObject, FGuid PlayerUId) {
    return 0;
}

int32 UPalUtility::GetPlayerEquipmentDefense(const UObject* WorldContextObject, FGuid PlayerUId) {
    return 0;
}

UPalPlayerDataStorage* UPalUtility::GetPlayerDataStorage(const UObject* WorldContextObject) {
    return NULL;
}

APalPlayerController* UPalUtility::GetPlayerControllerByPlayerUId(const UObject* WorldContextObject, const FGuid& PlayerUId) {
    return NULL;
}

APalPlayerController* UPalUtility::GetPlayerControllerByPlayerId(const UObject* WorldContextObject, const int32 PlayerId) {
    return NULL;
}

APawn* UPalUtility::GetPlayerControlledPawn(const UObject* WorldContextObject) {
    return NULL;
}

APalCharacter* UPalUtility::GetPlayerControlledCharacter(const UObject* WorldContextObject) {
    return NULL;
}

APalPlayerCharacter* UPalUtility::GetPlayerCharacterByPlayerUID(const UObject* WorldContextObject, const FGuid PlayerUId) {
    return NULL;
}

APalPlayerCharacter* UPalUtility::GetPlayerCharacterByPlayerIndex(const UObject* WorldContextObject, const int32 PlayerIndex) {
    return NULL;
}

ACharacter* UPalUtility::GetPlayerCharacterByPlayerId(const UObject* WorldContextObject, const int32 PlayerId) {
    return NULL;
}

APalPlayerCharacter* UPalUtility::GetPlayerCharacter(const UObject* WorldContextObject) {
    return NULL;
}

EPalSupportedPlatformType UPalUtility::GetPlatformType(const UObject* WorldContextObject) {
    return EPalSupportedPlatformType::Unknown;
}

FName UPalUtility::GetPhysicsRootBoneName(AActor* Character) {
    return NAME_None;
}

FName UPalUtility::GetPhysicsBoneName(AActor* Character, EPalPhysicsBoneType boneType) {
    return NAME_None;
}

int32 UPalUtility::GetPhysicsBoneIndex(AActor* Character, EPalPhysicsBoneType boneType) {
    return 0;
}

TEnumAsByte<EPhysicalSurface> UPalUtility::GetPhysicalSurfaceTypeByActor(AActor* SelfActor, FName SocketName, const FVector& OffsetSt, const FVector& OffsetEd, bool& bHit) {
    return SurfaceType_Default;
}

TEnumAsByte<EPhysicalSurface> UPalUtility::GetPhysicalSurfaceType(const UObject* WorldContextObject, const FVector& RayStart, const FVector& RayEnd, bool& bHit) {
    return SurfaceType_Default;
}

FString UPalUtility::GetPassword(const UObject* WorldContextObject) {
    return TEXT("");
}

UPalPassiveSkillManager* UPalUtility::GetPassiveSkillManager(const UObject* WorldContextObject) {
    return NULL;
}

UPalPlayerDataPalStorage* UPalUtility::GetPalStorageDataByPlayerUID(const UObject* WorldContextObject, FGuid PlayerUId) {
    return NULL;
}

UPalObjectCollector* UPalUtility::GetPalObjectCollector(const UObject* WorldContextObject) {
    return NULL;
}

void UPalUtility::GetPalMonsters(const UObject* WorldContextObject, TArray<APalCharacter*>& OutCharacters) {
}

APalPlayerCharacter* UPalUtility::GetPalmi(const UObject* WorldContextObject) {
    return NULL;
}

void UPalUtility::GetPalIconInfoByCharacterID(UObject* WorldContextObject, const FPalDataTableRowName_PalMonsterData& CharacterID, TSoftObjectPtr<UTexture2D>& outIcon, bool& outIsRare, bool& outIsBoss) {
}

UPalGameWorldSettings* UPalUtility::GetPalGameWorldSettings() {
    return NULL;
}

APalGameStateInGame* UPalUtility::GetPalGameStateInGame(const UObject* WorldContextObject) {
    return NULL;
}

APalGameState* UPalUtility::GetPalGameState(const UObject* WorldContextObject) {
    return NULL;
}

APalGameMode* UPalUtility::GetPalGameMode(const UObject* WorldContextObject) {
    return NULL;
}

UPalGameInstance* UPalUtility::GetPalGameInstance(const UObject* WorldContextObject) {
    return NULL;
}

UPalDebugSetting* UPalUtility::GetPalDebugSetting() {
    return NULL;
}

UPalCheatManager* UPalUtility::GetPalCheatManager(const UObject* WorldContextObject) {
    return NULL;
}

void UPalUtility::GetPalCharacters(const UObject* WorldContextObject, TArray<APalCharacter*>& OutCharacters) {
}

void UPalUtility::GetOverrideLoginPlayerUId(const UObject* WorldContextObject, FGuid& PlayerUId) {
}

TArray<int32> UPalUtility::GetOverlapFoliageIndexByComponent(UPrimitiveComponent* AttackComponent, UPrimitiveComponent* FolageComponent) {
    return TArray<int32>();
}

float UPalUtility::GetOutPacketLoss(const UObject* WorldContextObject) {
    return 0.0f;
}

UPalOtomoHolderComponentBase* UPalUtility::GetOtomoHolderComponent(const UObject* WorldContextObject) {
    return NULL;
}

UPalOtomoHolderComponentBase* UPalUtility::GetOtomoHolderByOtomoPal(AActor* OtomoPal) {
    return NULL;
}

FPalOptionWorldSettings UPalUtility::GetOptionWorldSettings(const UObject* WorldContextObject) {
    return FPalOptionWorldSettings{};
}

UPalOptionSubsystem* UPalUtility::GetOptionSubsystem(const UObject* WorldContextObject) {
    return NULL;
}

FPalOptionPadSettings UPalUtility::GetOptionPadSettings(const UObject* WorldContextObject) {
    return FPalOptionPadSettings{};
}

FPalOptionKeyboardSettings UPalUtility::GetOptionKeyboardSettings(const UObject* WorldContextObject) {
    return FPalOptionKeyboardSettings{};
}

FPalOptionGraphicsSettings UPalUtility::GetOptionGraphicsSettings(const UObject* WorldContextObject) {
    return FPalOptionGraphicsSettings{};
}

UPalOilrigManager* UPalUtility::GetOilrigManager(const UObject* WorldContextObject) {
    return NULL;
}

bool UPalUtility::GetOffFromPal(AActor* RiderActor, bool bIsSkipAnimation, bool bNoAnimCancel) {
    return false;
}

int32 UPalUtility::GetNumPlayers(const UObject* WorldContextObject) {
    return 0;
}

UPalNPCManager* UPalUtility::GetNPCManager(const UObject* WorldContextObject) {
    return NULL;
}

APalNetworkTransmitter* UPalUtility::GetNetworkTransmitterByPlayerId(const UObject* WorldContextObject, const int32 PlayerId) {
    return NULL;
}

APalNetworkTransmitter* UPalUtility::GetNetworkTransmitterByPlayerCharacter(APalPlayerCharacter* Player) {
    return NULL;
}

APalNetworkTransmitter* UPalUtility::GetNetworkTransmitter(const UObject* WorldContextObject) {
    return NULL;
}

float UPalUtility::GetNearstPlayerDistance2D(const UObject* WorldContextObject, FVector Location) {
    return 0.0f;
}

APalCharacter* UPalUtility::GetNearestEnemyByLocation_FrontPlayerCamera(FVector Location, APalCharacter* myCharacter, APalPlayerCharacter* Player, float InDegree, float InDistance, float InHeight) {
    return NULL;
}

APalCharacter* UPalUtility::GetNearestEnemyByLocation(FVector Location, APalCharacter* myCharacter, float& OutMinRange) {
    return NULL;
}

APalMapObject* UPalUtility::GetNearestEnemyBuildObject(AActor* Character) {
    return NULL;
}

float UPalUtility::GetMontageSectionLengthDefault(UAnimMontage* Montange) {
    return 0.0f;
}

float UPalUtility::GetMontageSectionLength(UAnimMontage* Montange, FName SectionName) {
    return 0.0f;
}

void UPalUtility::GetMontageNotifyStates(UAnimMontage* Montange, TArray<UAnimNotifyState*>& outStates, FName SectionName) {
}

UPalMoneyData* UPalUtility::GetMoneyDataByPlayerUID(const UObject* WorldContextObject, FGuid PlayerUId) {
    return NULL;
}

UPalMasterDataTables* UPalUtility::GetMasterDataTables(const UObject* WorldContextObject) {
    return NULL;
}

UPalMapObjectManager* UPalUtility::GetMapObjectManager(const UObject* WorldContextObject) {
    return NULL;
}

USkeletalMeshComponent* UPalUtility::GetMainMeshByActor(AActor* Actor) {
    return NULL;
}

UPalLogManager* UPalUtility::GetLogManager(const UObject* WorldContextObject) {
    return NULL;
}

UPalLocationManager* UPalUtility::GetLocationManager(const UObject* WorldContextObject) {
    return NULL;
}

UPalWorldMapUIData* UPalUtility::GetLocalWorldMapData(const UObject* WorldContextObject) {
    return NULL;
}

UPalTechnologyData* UPalUtility::GetLocalTechnologyData(const UObject* WorldContextObject) {
    return NULL;
}

UPalPlayerRecordData* UPalUtility::GetLocalRecordData(const UObject* WorldContextObject) {
    return NULL;
}

FGuid UPalUtility::GetLocalPlayerUID(const UObject* WorldContextObject) {
    return FGuid{};
}

APalPlayerState* UPalUtility::GetLocalPlayerState(const UObject* WorldContextObject) {
    return NULL;
}

int32 UPalUtility::GetLocalPlayerID(const UObject* WorldContextObject) {
    return 0;
}

APlayerController* UPalUtility::GetLocalPlayerController(const UObject* WorldContextObject) {
    return NULL;
}

UPalPlayerDataPalStorage* UPalUtility::GetLocalPalStorageData(const UObject* WorldContextObject) {
    return NULL;
}

UPalPlayerInput* UPalUtility::GetLocalPalPlayerInput(const UObject* WorldContextObject) {
    return NULL;
}

UPalMoneyData* UPalUtility::GetLocalMoneyData(const UObject* WorldContextObject) {
    return NULL;
}

UPalPlayerInventoryData* UPalUtility::GetLocalInventoryData(const UObject* WorldContextObject) {
    return NULL;
}

UPalItemIDManager* UPalUtility::GetItemIDManager(const UObject* WorldContextObject) {
    return NULL;
}

UPalItemContainerManager* UPalUtility::GetItemContainerManager(const UObject* WorldContextObject) {
    return NULL;
}

UPalPlayerInventoryData* UPalUtility::GetInventoryDataByPlayerUID(const UObject* WorldContextObject, FGuid PlayerUId) {
    return NULL;
}

UPalInvaderManager* UPalUtility::GetInvaderManager(const UObject* WorldContextObject) {
    return NULL;
}

float UPalUtility::GetInPacketLoss(const UObject* WorldContextObject) {
    return 0.0f;
}

bool UPalUtility::GetInitializedPlayerSaveParemter(const UObject* WorldContextObject, const int32 Level, FPalIndividualCharacterSaveParameter& outParameter) {
    return false;
}

bool UPalUtility::GetInitializedCharacterSaveParemter_NPCOtomo(const UObject* WorldContextObject, const FName CharacterID, const FName UniqueNPCID, const int32 Level, const FGuid& OwnerPlayerUId, FPalIndividualCharacterSaveParameter& outParameter) {
    return false;
}

bool UPalUtility::GetInitializedCharacterSaveParemter_DebugDefaultParamSetup(const UObject* WorldContextObject, const FName CharacterID, const FName UniqueNPCID, const int32 Level, const FGuid& OwnerPlayerUId, FPalIndividualCharacterSaveParameter& outParameter, bool DisableRandomPassiveSkilll, TArray<EPalWazaID> WazaList, TArray<FName> PassiveSkillList, int32 Rank, TArray<FPalDebugCharacterStatusRank> StatusRank, bool RarePalAble) {
    return false;
}

bool UPalUtility::GetInitializedCharacterSaveParemter(const UObject* WorldContextObject, const FName CharacterID, const FName UniqueNPCID, const int32 Level, const FGuid& OwnerPlayerUId, FPalIndividualCharacterSaveParameter& outParameter, bool DisableRandomPassiveSkill, bool RarePalAble) {
    return false;
}

FPalInstanceID UPalUtility::GetIndividualIDByActor(const AActor* Actor) {
    return FPalInstanceID{};
}

FPalInstanceID UPalUtility::GetIndividualID(const UPalIndividualCharacterHandle* Handle) {
    return FPalInstanceID{};
}

UPalIndividualCharacterParameter* UPalUtility::GetIndividualCharacterParameterByIstanceID(const UObject* WorldContextObject, const FPalInstanceID& InstanceId) {
    return NULL;
}

UPalIndividualCharacterParameter* UPalUtility::GetIndividualCharacterParameterByActor(const AActor* Actor) {
    return NULL;
}

UPalIndividualCharacterHandle* UPalUtility::GetIndividualCharacterHandleByActor(AActor* Actor) {
    return NULL;
}

UPalIncidentSystem* UPalUtility::GetIncidentSystem(const UObject* WorldContextObject) {
    return NULL;
}

void UPalUtility::GetHumanNPCs(const UObject* WorldContextObject, TArray<APalCharacter*>& OutCharacters) {
}

UPalHUDService* UPalUtility::GetHUDService(const UObject* WorldContextObject) {
    return NULL;
}

FName UPalUtility::GetHairAttachAccessorySocketName(const UObject* WorldContextObject, const FName& HairEquipmentName, const FName& BodyTypeName) {
    return NAME_None;
}

UPalGroupManager* UPalUtility::GetGroupManager(const UObject* WorldContextObject) {
    return NULL;
}

UPalGameSetting* UPalUtility::GetGameSetting(const UObject* WorldContextObject) {
    return NULL;
}

TArray<FName> UPalUtility::GetGainStatusItemEffectStatus(const UObject* WorldContextObject, const FName ItemId) {
    return TArray<FName>();
}

UPalFunnelCharacterManager* UPalUtility::GetFunnelCharacterManager(const UObject* WorldContextObject) {
    return NULL;
}

FVector UPalUtility::GetFloorLocationByActor(AActor* TargetActor) {
    return FVector{};
}

bool UPalUtility::GetFloorHitResultByLocation(AActor* TargetActor, FVector TargetLocation, float SearchDistance, FHitResult& OutResult) {
    return false;
}

FVector UPalUtility::GetFloorHitLocationByLocation(AActor* TargetActor, FVector TargetLocation) {
    return FVector{};
}

FVector UPalUtility::GetFloorHitLocationByActor(AActor* TargetActor) {
    return FVector{};
}

FString UPalUtility::GetFirstLine(const FString& SourceString) {
    return TEXT("");
}

UPalExpDatabase* UPalUtility::GetExpDatabase(const UObject* WorldContextObject) {
    return NULL;
}

FVector UPalUtility::GetExclamationMarkLocation(const APalCharacter* TargetCharacter) {
    return FVector{};
}

UPalEventNotifySystem* UPalUtility::GetEventNotifySystem(const UObject* WorldContextObject) {
    return NULL;
}

TEnumAsByte<ECollisionChannel> UPalUtility::GetEngineCollisionChannelByPalTraceType(EPalTraceTypeQuery Type) {
    return ECC_WorldStatic;
}

TEnumAsByte<ECollisionChannel> UPalUtility::GetEngineCollisionChannelByPalObjectType(EPalObjectTypeQuery Type) {
    return ECC_WorldStatic;
}

TEnumAsByte<ECollisionChannel> UPalUtility::GetEngineCollisionChannel(EPalObjectTypeQuery channnel) {
    return ECC_WorldStatic;
}

TArray<APalCharacter*> UPalUtility::GetEnemiesByLocation2D(const UObject* WorldContextObject, FVector Location, APalCharacter* myCharacter, float minDistance, float MaxDistance, float minHeight, float maxHeight) {
    return TArray<APalCharacter*>();
}

TArray<APalCharacter*> UPalUtility::GetEnemiesByLocation(const UObject* WorldContextObject, FVector Location, APalCharacter* myCharacter, float minDistance, float MaxDistance) {
    return TArray<APalCharacter*>();
}

float UPalUtility::GetElementMultiplay(const UObject* WorldContextObject, EPalElementType AttackElementType, EPalElementType defenceTypeA, EPalElementType defenceTypeB) {
    return 0.0f;
}

EHumanBone UPalUtility::GetEHumanBoneFromBoneName(FName BoneName) {
    return EHumanBone::Pelvis;
}

FString UPalUtility::GetDisplayVersion(const UObject* WorldContextObject) {
    return TEXT("");
}

FVector UPalUtility::GetDiffVelocity(AActor* A, AActor* B) {
    return FVector{};
}

UObject* UPalUtility::GetDefaultObjectByBlueprint(UObject* bp) {
    return NULL;
}

UObject* UPalUtility::GetDefaultObject(UClass* ObjectClass) {
    return NULL;
}

int32 UPalUtility::GetDebugEnemySpawnCountForBot(const UObject* WorldContextObject) {
    return 0;
}

int32 UPalUtility::GetDebugBotBaseCampWorkerCount(const UObject* WorldContextObject) {
    return 0;
}

FName UPalUtility::GetDebugBotBaseCampMode(const UObject* WorldContextObject) {
    return NAME_None;
}

UPalDeathPenaltyManager* UPalUtility::GetDeathPenaltyManager(const UObject* WorldContextObject) {
    return NULL;
}

UPalDeadBodyManager* UPalUtility::GetDeadBodyManager(const UObject* WorldContextObject) {
    return NULL;
}

UPalDatabaseCharacterParameter* UPalUtility::GetDatabaseCharacterParameter(const UObject* WorldContextObject) {
    return NULL;
}

UPalDamagePopUpManager* UPalUtility::GetDamagePopUpManager(const UObject* WorldContextObject) {
    return NULL;
}

EPalWorkSuitability UPalUtility::GetCurrentWorkSuitability(APalCharacter* Character) {
    return EPalWorkSuitability::None;
}

UPalCoopSkillSearchSystem* UPalUtility::GetCoopSkillSearchSystem(const UObject* WorldContextObject) {
    return NULL;
}

AController* UPalUtility::GetController(const UObject* WorldContextObject, AActor* Actor) {
    return NULL;
}

bool UPalUtility::GetClipboard(FString& String) {
    return false;
}

UClass* UPalUtility::GetClassFromBlueprintAsset(const FAssetData& Asset) {
    return NULL;
}

float UPalUtility::GetCharacterRadius(const AActor* Actor) {
    return 0.0f;
}

UPalCharacterParameterStorageSubsystem* UPalUtility::GetCharacterParameterStorageSubsystem(const UObject* WorldContextObject) {
    return NULL;
}

UPalCharacterManager* UPalUtility::GetCharacterManager(const UObject* WorldContextObject) {
    return NULL;
}

bool UPalUtility::GetCharacterMakeInfoFromLocalPlayer(const UObject* WorldContextObject, FPalPlayerDataCharacterMakeInfo& OutMakeInfo) {
    return false;
}

UPalCharacterImportanceManager* UPalUtility::GetCharacterImportanceManager(const UObject* WorldContextObject) {
    return NULL;
}

FName UPalUtility::GetCharacterIDReplacedName(FName originalID) {
    return NAME_None;
}

FName UPalUtility::GetCharacterIDFromTribeID(const EPalTribeID TribeID) {
    return NAME_None;
}

FName UPalUtility::GetCharacterIDFromCharacter(const APalCharacter* Character) {
    return NAME_None;
}

UPalCharacterContainerManager* UPalUtility::GetCharacterContainerManager(const UObject* WorldContextObject) {
    return NULL;
}

void UPalUtility::GetCharacterApartFromPlayer(const UObject* WorldContextObject, TArray<APalCharacter*>& OutCharacters) {
}

void UPalUtility::GetCalculatedCaptureRate(const UObject* WorldContextObject, float baseRate, TArray<float>& outCalculatedRateArray) {
}

UProjectileMovementComponent* UPalUtility::GetBulletProjectileComponent(const TSubclassOf<APalBullet>& BulletClass) {
    return NULL;
}

UPalBulletCreator* UPalUtility::GetBulletCreator(const UObject* WorldContextObject) {
    return NULL;
}

UPalBossBattleManager* UPalUtility::GetBossBattleManager(const UObject* WorldContextObject) {
    return NULL;
}

FName UPalUtility::GetBoneNameFromEHumanBone(EHumanBone humanBone) {
    return NAME_None;
}

EPalBodyPartsType UPalUtility::GetBodyPartsType(const UActorComponent* Component) {
    return EPalBodyPartsType::Weak;
}

FTransform UPalUtility::GetBodyLocation(AActor* Character, EPalBodyLocationType bodyLocationType) {
    return FTransform{};
}

UPalBattleManager* UPalUtility::GetBattleManager(const UObject* WorldContextObject) {
    return NULL;
}

UPalBaseCampManager* UPalUtility::GetBaseCampManager(const UObject* WorldContextObject) {
    return NULL;
}

UPalAudioSettingSystem* UPalUtility::GetAudioSettingSystem(const UObject* WorldContextObject) {
    return NULL;
}

FVector UPalUtility::GetAttackTargetLocation(const AActor* Attacker, const AActor* TargetActor) {
    return FVector{};
}

bool UPalUtility::GetAttachInformationByBodyLocation(AActor* Character, EPalBodyLocationType bodyLocationType, USceneComponent*& AttachComponent, FName& attachBoneName, FTransform& attachRelativeTransform) {
    return false;
}

UPalAssetStreamableManager* UPalUtility::GetAssetStreamableManager(const UObject* WorldContextObject) {
    return NULL;
}

bool UPalUtility::GetArrivableLocation(UObject* WorldContextObject, const FVector& StartLocation, const FVector& TargetLocation, const float OffsetZUp, const float OffsetZUnder, EPalTraceTypeQuery TraceTypeQuery, const float Range, FVector& OutLocation, float& OutDistance, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType) {
    return false;
}

UPalArenaWorldSubsystem* UPalUtility::GetArenaWorldSubsystem(const UObject* WorldContextObject) {
    return NULL;
}

float UPalUtility::GetArenaDamgeRate(const AActor* Attacker, const AActor* Defender) {
    return 0.0f;
}

FString UPalUtility::GetAPIBaseURL(const UObject* WorldContextObject) {
    return TEXT("");
}

void UPalUtility::GetAllPlayerStates(const UObject* WorldContextObject, TArray<APalPlayerState*>& OutPlayerStates) {
}

void UPalUtility::GetAllPlayerCharacters(const UObject* WorldContextObject, TArray<APalCharacter*>& OutPlayers) {
}

void UPalUtility::GetAllControlledCharacters(const UObject* WorldContextObject, TArray<APalCharacter*>& OutCharacters) {
}

FName UPalUtility::GetAkComponentAttachName(AActor* Character) {
    return NAME_None;
}

FString UPalUtility::GetAdminPasswordForCmdline(const UObject* WorldContextObject) {
    return TEXT("");
}

FString UPalUtility::GetAdEffectBaseURL(const UObject* WorldContextObject) {
    return TEXT("");
}

FQuat UPalUtility::GetActorQuat(const AActor* SourceActor) {
    return FQuat{};
}

void UPalUtility::GetActorByGrid(UObject* WorldContextObject, TSubclassOf<AActor> actorClass, FVector2D minPoint, FVector2D maxPoint, int32 gridXMax, int32 gridYMax, int32 gridXNum, int32 gridYNum, TArray<AActor*>& OutActors) {
}

TArray<FPalKeyAction> UPalUtility::GetActionsByKey(const UObject* WorldContextObject, FKey Key) {
    return TArray<FPalKeyAction>();
}

void UPalUtility::GeneralTurnToActor_WithMovementRotationSpeed(AActor* TurnActor, const AActor* GoalDirectionActor, float DeltaTime) {
}

void UPalUtility::GeneralTurnToActor(AActor* TurnActor, const AActor* TargetActor, float LerpSpeed, float DeltaTime) {
}

void UPalUtility::GeneralTurnLinearToActor(AActor* TurnActor, const AActor* TargetActor, float LerpSpeed, float DeltaTime) {
}

void UPalUtility::GeneralTurnLinear(AActor* TurnActor, FVector GoalDirection, float AngleDegreeSpeed, float DeltaTime) {
}

void UPalUtility::GeneralTurn_WithMovementRotationSpeed(AActor* TurnActor, FVector GoalDirection, float DeltaTime) {
}

void UPalUtility::GeneralTurn(AActor* TurnActor, FVector GoalDirection, float LerpSpeed, float DeltaTime) {
}

APalCharacter* UPalUtility::FindRiderByRidingActor(const AActor* RidingActor) {
    return NULL;
}

APalCharacter* UPalUtility::FindOwnerPalCharacter(const UObject* startObject) {
    return NULL;
}

AActor* UPalUtility::FindOwnerActor(const UObject* startObject) {
    return NULL;
}

AActor* UPalUtility::FindHomingTarget_ForPlayer(APalPlayerCharacter* Player, float MinRange, float MaxRange, float InFrontDegree) {
    return NULL;
}

FText UPalUtility::EnumToLocalizedText(const UObject* WorldContextObject, const FString& EnumStr, const EPalLocalizeTextCategory TextCategory, const FString& TextIdPrefix) {
    return FText::GetEmpty();
}

void UPalUtility::EmitSoundForAIListener(FName SoundFName, AActor* EmitterCharacter, FVector EmitLocation, float VolumeRate) {
}

void UPalUtility::Editor_AddCharacterToImportanceManager(APalCharacter* Character) {
}

void UPalUtility::DropItem_FromEnemyDeath(const AActor* EnemyActor, const AActor* LastAttacker) {
}

void UPalUtility::DropCharactersCircularly_ServerInternal(const UObject* WorldContextObject, const TArray<UPalIndividualCharacterHandle*>& IndividualHandles, const FVector& Location, const FPalDropCharacterExtraParameter ExtraParameter) {
}

void UPalUtility::DropCharacter_ServerInternal(const UObject* WorldContextObject, const FPalInstanceID& IndividualId, FVector DropLocation, const FGuid& RequestPlayerUId, const bool bPickableAnyone, bool CreateLocation) {
}

FGuid UPalUtility::DialogWithParameter(const UObject* WorldContextObject, UPalDialogParameterDialog* Parameter) {
    return FGuid{};
}

FGuid UPalUtility::Dialog(const UObject* WorldContextObject, const FText Message, const EPalDialogType DialogType, FPalDialogBoolCallback Callback, const bool bNegativeDefault) {
    return FGuid{};
}

void UPalUtility::DestroyActorIncludingAttachedActors(AActor* Actor) {
}

FVector UPalUtility::CutVectorByLength(FVector Vector, float Length) {
    return FVector{};
}

FVector UPalUtility::CutVectorByAngle(FVector Target, FVector BaseAxis, float maxAngleDegree) {
    return FVector{};
}

void UPalUtility::CreateUNKO(APalCharacter* Character, int32 Count) {
}

TEnumAsByte<ETraceTypeQuery> UPalUtility::ConvertToTraceTypeQuery(EPalTraceTypeQuery Type) {
    return TraceTypeQuery1;
}

TEnumAsByte<EPhysicalSurface> UPalUtility::ConvertToPhysicalSurface(EPalPhysicalSurface Type) {
    return SurfaceType_Default;
}

TEnumAsByte<EObjectTypeQuery> UPalUtility::ConvertToObjectTypeQuery(EPalObjectTypeQuery Type) {
    return ObjectTypeQuery1;
}

FString UPalUtility::Convert_PalInstanceIDToString(FPalInstanceID ID) {
    return TEXT("");
}

bool UPalUtility::ContainsOnlyIn(const TArray<UObject*> SourceArray, const TArray<UObject*> TargetElms, UObject* Target) {
    return false;
}

bool UPalUtility::ContainsAny(const TArray<UObject*> SourceArray, const TArray<UObject*> FindElms) {
    return false;
}

bool UPalUtility::ClipboardCopy(const FString& String) {
    return false;
}

void UPalUtility::ClearCharacterRagdoll(APalCharacter* Character) {
}

void UPalUtility::ChangeDefaultLandMovementModeForWalking(APalCharacter* Character) {
}

bool UPalUtility::CanUseTargetRankUp(const UObject* WorldContextObject, UPalIndividualCharacterParameter* IndividualParameter, const UPalStaticItemDataBase* Item) {
    return false;
}

bool UPalUtility::CanUseTargetPalExpItem(const UObject* WorldContextObject, UPalIndividualCharacterParameter* IndividualParameter, const UPalStaticItemDataBase* Item) {
    return false;
}

bool UPalUtility::CanUseTargetMedicine(const UObject* WorldContextObject, UPalIndividualCharacterParameter* IndividualParameter, const UPalStaticItemDataBase* Item) {
    return false;
}

bool UPalUtility::CanSpawnDashEffect(AActor* dashActor) {
    return false;
}

bool UPalUtility::CanNooseTrap(AActor* Actor) {
    return false;
}

bool UPalUtility::CanAdjustActorToFloor(AActor* TargetActor, float UpOffset, FVector& OutLocation, bool ShortRayLength) {
    return false;
}

bool UPalUtility::CalculateLaunchVelocity(FVector StartPoint, FVector EndPoint, float Time, float Gravity, FVector& OutInitialVelocity) {
    return false;
}

void UPalUtility::CalcSceneComponentBounds(TArray<USceneComponent*> SceneComps, FBox& OutBounds) {
}

FRotator UPalUtility::CalcRotationGeneralTurnLinear(const FVector& InForwardDirection, const FVector& InRightDirection, const float CurrentYaw, const FVector& InGoalDirection, float AngleDegreeSpeed, float DeltaTime, const float YawRate) {
    return FRotator{};
}

int32 UPalUtility::CalcRemainBattleTime(FDateTime TimeLimit) {
    return 0;
}

int32 UPalUtility::CalcNPCWeaponDamage(const APalWeaponBase* Weapon) {
    return 0;
}

int32 UPalUtility::CalcDamageCharacter(const FPalDamageInfo& DamageInfo, const AActor* Defender, const FPalCalcCharacterDamageInfo& CharacterDamageInfo) {
    return 0;
}

int32 UPalUtility::CalcDamage(const FPalDamageInfo& DamageInfo, const AActor* Defender) {
    return 0;
}

float UPalUtility::CalcCaptureRateByStatus(const AActor* TargetPal) {
    return 0.0f;
}

FVector UPalUtility::CalcBlowVelocity(EPalBlowVelocityOwner VelocityType, const AActor* Attacker, const USceneComponent* HitComponent, FVector HitLocation, const AActor* Defender, FVector NativeVelocity) {
    return FVector{};
}

bool UPalUtility::BoxOvelapLimitVolume(const UObject* WorldContextObject, EPalLimitVolumeFlag LimitVolumeFlag, const FVector BoxPos, FVector BoxExtent, const FQuat& Rot) {
    return false;
}

void UPalUtility::ApplyGuildColorForCharacter(FLinearColor Color, APalCharacter* Character) {
}

float UPalUtility::AngleBetweenVector(FVector A, FVector B, bool IsDegree) {
    return 0.0f;
}

float UPalUtility::Angle180from360Degree(float Degree) {
    return 0.0f;
}

void UPalUtility::AlertWithCallback(const UObject* WorldContextObject, const FText Message, FPalDialogBoolCallback Callback) {
}

void UPalUtility::Alert(const UObject* WorldContextObject, const FText Message) {
}

AActor* UPalUtility::AdjustActorToFloor(AActor* TargetActor, float UpOffset, bool ShortRayLength) {
    return NULL;
}

void UPalUtility::AddForceWithMassScale(APalCharacter* TargetCharacter, FVector Force, FName BoneName, bool IsImplus) {
}

void UPalUtility::AddDownForceAllRigidBody(APalCharacter* TargetCharacter, float Rate) {
}


