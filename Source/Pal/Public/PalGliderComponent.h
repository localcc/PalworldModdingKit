#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EPalCharacterMovementCustomMode.h"
#include "EPalPlayerEquipItemSlotType.h"
#include "PalDataTableRowName_SoundID.h"
#include "PalDeadInfo.h"
#include "PalGliderPalInfo.h"
#include "PalSoundOptions.h"
#include "Templates/SubclassOf.h"
#include "PalGliderComponent.generated.h"

class APalCharacter;
class APalGliderObject;
class UPalCharacterMovementComponent;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;
class UPalItemContainer;
class UPalItemSlot;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalGliderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartGliding);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndGliding);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartGliding OnStartGlidingDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndGliding OnEndGlidingDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalGliderPalInfo> GliderPalInfos;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalGliderObject* CurrentGlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentGliderPalID, meta=(AllowPrivateAccess=true))
    FName CurrentGliderPalID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentGliderSoftClass, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalGliderObject> CurrentGliderSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalGliderObject> CurrentGliderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsGliding, meta=(AllowPrivateAccess=true))
    bool bIsGliding;
    
public:
    UPalGliderComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterHandle* TryGetGliderIndividualHandleFromOtomoHolder() const;
    
    UFUNCTION(BlueprintCallable)
    void StopGliderSound(const FPalDataTableRowName_SoundID& ID);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StartGliding_ToServer();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartGliding();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetCurrentGliderSoftClass_ToServer(const TSoftClassPtr<APalGliderObject>& gliderSoftClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetCurrentGliderPalID_ToServer(const FName& PalID);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RequestCheckAndUpdateCurrentGlider_ToAll();
    
    UFUNCTION(BlueprintCallable)
    void PlayGliderSound(const FPalDataTableRowName_SoundID& ID, const FPalSoundOptions& Option);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateOtomoHolderSlot(int32 SlotIndex, UPalIndividualCharacterHandle* LastHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateOtomoHolderInitialized(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateInventoryContainer(UPalItemContainer* Container);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateIndividualActor(UPalIndividualCharacterHandle* Handle);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateEquipmentSlot(UPalItemSlot* itemSlot, EPalPlayerEquipItemSlotType slotType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartGliding();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRevivedIndividual(UPalIndividualCharacterParameter* InParameter);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsGliding();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentGliderSoftClass();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentGliderPalID();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeGlider();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndGliding();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDeadGliderPal(FPalDeadInfo DeadInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteOwnerInitialize();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeMovementMode(UPalCharacterMovementComponent* Component, TEnumAsByte<EMovementMode> prevMode, TEnumAsByte<EMovementMode> newMode, EPalCharacterMovementCustomMode PrevCustomMode, EPalCharacterMovementCustomMode NewCustomMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeGliderVisibility(bool bIsVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipGlider() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasGliderPal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetAllGliderPalNames() const;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void EndGliding_ToServer();
    
public:
    UFUNCTION(BlueprintCallable)
    void EndGliding();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanGliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEndGliding() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelGliding();
    
};

