#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "EPalCharacterCompleteDelegatePriority.h"
#include "EPalCharacterImportanceType.h"
#include "FixedPoint.h"
#include "FlagContainer.h"
#include "PalOnCharacterCompleteInitializeParameterDelegate.h"
#include "PalCharacter.generated.h"

class AActor;
class APalCharacter;
class UAnimMontage;
class UNiagaraSystem;
class UPalActionComponent;
class UPalAnimNotifyParameterComponent;
class UPalCharacterAroundInfoCollectorComponent;
class UPalCharacterCameraComponent;
class UPalCharacterMovementComponent;
class UPalCharacterOnCompleteInitializeParameterWrapper;
class UPalCharacterParameterComponent;
class UPalDamageReactionComponent;
class UPalFootIKComponent;
class UPalHeadUpDisplayComponent;
class UPalLookAtComponent;
class UPalNavigationInvokerComponent;
class UPalPassiveSkillComponent;
class UPalShooterSpringArmComponent;
class UPalSkeletalMeshComponent;
class UPalStaticCharacterParameterComponent;
class UPalStatusComponent;
class UPalVisualEffectComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USphereComponent;

UCLASS(Blueprintable)
class APalCharacter : public ACharacter {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRollingDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCompleteSyncPlayerFromServer_InClient);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompleteInitializeParameter, APalCharacter*, InCharacter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeImportance, EPalCharacterImportanceType, NextType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeBattleModeCharacter, APalCharacter*, SelfCharacter, bool, bIsBattleMode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeBattleMode, bool, bIsBattleMode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeActiveActor, bool, bIsActive);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCaptured, APalCharacter*, SelfCharacter, APalCharacter*, Attacker);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateGroundInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalActionComponent* ActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalCharacterParameterComponent* CharacterParameterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalStaticCharacterParameterComponent* StaticCharacterParameterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalDamageReactionComponent* DamageReactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalStatusComponent* StatusComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalShooterSpringArmComponent* CameraBoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalCharacterCameraComponent* FollowCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalLookAtComponent* LookAtComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNavigationInvokerComponent* NavInvokerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalFootIKComponent* FootIKComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalVisualEffectComponent* VisualEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalPassiveSkillComponent* PassiveSkillComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalHeadUpDisplayComponent* HUDComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalAnimNotifyParameterComponent* AnimNotifyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalCharacterAroundInfoCollectorComponent* AroundInfoCollectorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* RagdollInteractiveSphere;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeActiveActor OnChangeActiveActorDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRollingDelegate OnRollingDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRollingDelegate OnRollingFinishDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnCompleteSyncPlayerFromServer_InClient OnCompleteSyncPlayerFromServer_InClient;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeBattleMode OnChangeBattleModeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeBattleModeCharacter OnChangeBattleModeCharacterDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeImportance OnChangeImportanceDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCaptured OnCapturedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBattleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTalkMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsPalActiveActor, meta=(AllowPrivateAccess=true))
    bool bIsPalActiveActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocalInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisable_ChangeTickInterval_ByImportance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector SpawnLocation_ForServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagContainer IsDisableChangeTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalCharacterImportanceType ImportanceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CheckIndividualParameterReplicateTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RootCollisionProfileName, meta=(AllowPrivateAccess=true))
    FName RootCollisionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalCharacterCompleteDelegatePriority, UPalCharacterOnCompleteInitializeParameterWrapper*> OnCompleteInitializeParameterDelegateMap;
    
public:
    APalCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateGroundRayCast();
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleHandAttachMesh(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleCharacterMesh(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableChangeIntervalByImportance(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveCollisionMovement(bool Active);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetActiveActorStayVisible(bool Active);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetActiveActor(bool Active);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RPCDummy();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ReviveCharacter_ToServer(FFixedPoint HP);
    
    UFUNCTION(BlueprintCallable)
    void ReviveCharacter(FFixedPoint HP);
    
    UFUNCTION(BlueprintCallable)
    void ResetTickInterval();
    
    UFUNCTION(BlueprintCallable)
    void RequestJump();
    
    UFUNCTION(BlueprintCallable)
    void Play2Montage_WithPlayRate(UAnimMontage* firstMontage, UAnimMontage* nextMontage, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void Play2Montage(UAnimMontage* firstMontage, UAnimMontage* nextMontage);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnTeleport_ToClient(const FVector& Location, const FQuat& Rotation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RootCollisionProfileName();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsPalActiveActor(bool PrevIsActiveActor);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapEndByAroundInfo(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBeginByAroundInfo(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeWetnessStatus(bool IsSwim);
    
public:
    UFUNCTION(BlueprintCallable)
    void LocalInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCooping() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetVisual_ExceptMainMesh_SyncAnyway(TArray<USceneComponent*>& OutComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTalkMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalCharacterMovementComponent* GetPalCharacterMovementComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UNiagaraSystem> GetOverrideSleepFX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USkeletalMeshComponent* GetOverrideFaceMesh();
    
    UFUNCTION(BlueprintCallable)
    UPalCharacterOnCompleteInitializeParameterWrapper* GetOnCompleteInitializeParameterDelegate(EPalCharacterCompleteDelegatePriority Priority);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalSkeletalMeshComponent* GetMainMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USkeletalMeshComponent* GetHandAttachMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalCharacterParameterComponent* GetCharacterParameterComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBattleMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActiveActorFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalActionComponent* GetActionComponent() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ChangeWantFood_ToAll(bool IsWantFood, bool IsExistFood);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ChangeTalkModeFlag_ToAll(bool IsTalk);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ChangeBattleModeFlag_ToAll(bool IsBattle);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeBattleModeFlag(bool IsBattle);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnCompleteInitializeParameter();
    
    UFUNCTION(BlueprintCallable)
    void BindFonctionToOnCompleteInitializeParameter(EPalCharacterCompleteDelegatePriority Priority, FPalOnCharacterCompleteInitializeParameter Callback);
    
};

