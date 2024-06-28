#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EPalAIActionType.h"
#include "EPalActionType.h"
#include "EPalGeneralAnimSequenceType.h"
#include "EPalGeneralBlendSpaceType.h"
#include "EPalGeneralMontageType.h"
#include "EPalMonsterMovementType.h"
#include "EPalPettingSizeType.h"
#include "EPalPhysicsBoneType.h"
#include "EPalRagdollPresetType.h"
#include "EPalSizeType.h"
#include "EPalSpawnedCharacterType.h"
#include "EPalWazaID.h"
#include "FootStampInfo.h"
#include "PalRandomRestInfo.h"
#include "PalStaticCharacterInfo_SpawnItem.h"
#include "ShooterSpringCameraParameter.h"
#include "Templates/SubclassOf.h"
#include "PalStaticCharacterParameterComponent.generated.h"

class UAnimMontage;
class UAnimSequence;
class UBlendSpace;
class UPalAIActionBase;
class UPalActionBase;
class UPalFootStepEffectAssetBase;
class UPalRagdollPreset;
class UPalSoundSlot;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalStaticCharacterParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalAIActionType, TSubclassOf<UPalAIActionBase>> AIActionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CallApproachWalkSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalRandomRestInfo> RandomRestMontageInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalGeneralAnimSequenceType, UAnimSequence*> GeneralAnimSequenceMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalGeneralMontageType, UAnimMontage*> GeneralMontageMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalGeneralBlendSpaceType, UBlendSpace*> GeneralBlendSpaceMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalRagdollPresetType, TSubclassOf<UPalRagdollPreset>> RagdollPresetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalActionType, UAnimMontage*> ActionMontageMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> EmoteList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalWazaID, TSoftClassPtr<UPalActionBase>> WazaActionDeclarationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalWazaID, TSubclassOf<UPalActionBase>> WazaActionInstancedMap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalWazaID, FFloatInterval> OverrideWazaRangeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CaptureSuccessRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkillEffectScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SkillEffectOffsetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowSideDistanceRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, FFootStampInfo> FootStampMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepVelocityXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepVelocityZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhysicsBodyRootName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ToolAttachBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D HPGaugeUIOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExclamationMarkOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalMonsterMovementType MovementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight_KG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Mass_Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IsGroundCrossRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalPhysicsBoneType, FName> PhysicsBoneNameMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUncapturable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBackWalkForwardAnime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRightLeft_WakeupFromRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GetupMotion_UtubuseOrRight_0FramePelvisLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GetupMotion_AomukeOrLeft_0FramePelvisLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Ragdoll_RightLeftGetup_ForwardTailName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Ragdoll_RightLeftGetup_RightLegName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalPettingSizeType PettingSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PettingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PettingStartAddDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PettingEndLeaveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PettingCameraCenterDistance_Override;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PettingCameraHeight_Override;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PettingCameraArmLength_Override;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalSizeType Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Ragdoll_GravityRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLookatIKAble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmallDamageAnimationApplyRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmallDamageAnimationPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShooterSpringCameraParameter CameraOffsetInLiftup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsForcedTurnWhenDamageReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableNPCDamageRolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPalSoundSlot> PalSoundSlotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AkAttachPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPalFootStepEffectAssetBase> PalFootStepEffectAssetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalStaticCharacterInfo_SpawnItem SpawnItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefenseBuildObjectAssignDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefenseBuildObjectAssignHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHideDefenseLauncherFooting;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalSoundSlot* PalSoundSlotCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalFootStepEffectAssetBase* PalFootStepEffectAssetCache;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalActionBase> MissWazaAction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsBoss_Database;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsTowerBoss_Database;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsRaidBoss_Database;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalSpawnedCharacterType SpawnedCharacterType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRaidBoss_BP;
    
public:
    UPalStaticCharacterParameterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSpawnedCharacterType(EPalSpawnedCharacterType SpawnedType);
    
    UFUNCTION(BlueprintCallable)
    void LoadWazaActionClass(EPalWazaID WazaID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTowerBossPal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwimPal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRarePal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRaidBossPal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlyPal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBossPal_Database_ExceptRare();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBossPal_Database();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IgnoreLeanBack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IgnoreBlowAway();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalSpawnedCharacterType GetSpawnedCharacterType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalRandomRestInfo GetRandomRestInfoWithOption(const TArray<UAnimMontage*>& ExceptMontages) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalRandomRestInfo GetRandomRestInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCaptureRate_ByCharacterID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* FindMontange(const EPalActionType ActionType, bool& bExist) const;
    
};

