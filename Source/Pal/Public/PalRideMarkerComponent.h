#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "EPalRidePositionType.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "Templates/SubclassOf.h"
#include "PalRideMarkerComponent.generated.h"

class APalCharacter;
class APalUniqueRideWeaponBase;
class UPalActiveSkillSlot;
class UPalIndividualCharacterParameter;
class UPalRiderComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalRideMarkerComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeRiding, bool, IsEnable);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalRidePositionType RidePositionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAdjustRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFixScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHiddenCharacterWhenAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableLookAtByRide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableFullBodyIK_UniqueRide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalUniqueRideWeaponBase> UniqueRidePalWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PalMonsterData UniqueRidePalID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeRiding OnChangeRiding;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalRiderComponent> Rider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalActiveSkillSlot* SkillSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalUniqueRideWeaponBase* WeaponActor;
    
public:
    UPalRideMarkerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void SyncActiveSkill(UPalIndividualCharacterParameter* IndividualParameter);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleWeapon();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupUniqueWeapon();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetRidingFlag(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRiding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAdjustRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetRideSocketTransform(TEnumAsByte<ERelativeTransformSpace> space) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetRiderCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FName GetAttackSocketName() const;
    
    UFUNCTION(BlueprintCallable)
    UPalActiveSkillSlot* GetActiveSkillSlot();
    
private:
    UFUNCTION(BlueprintCallable)
    void CameraChangeActorActive(bool Active);
    
};

