#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EPalWorkAssignableFixedType.h"
#include "EPalWorkBehaviourType.h"
#include "EPalWorkProgressState.h"
#include "EPalWorkType.h"
#include "PalBaseCampAssignableObjectInterface.h"
#include "PalBoundsTransform.h"
#include "PalFastWorkAssignRepInfoArray.h"
#include "PalInstanceID.h"
#include "PalWorkAssignInfo.h"
#include "PalWorkAssignLocalLocation.h"
#include "PalWorkAssignRequirementParameter.h"
#include "PalWorkBase.generated.h"

class UPalCharacterParameterComponent;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterSlot;
class UPalWorkAssign;
class UPalWorkBase;
class UPalWorkProgressTransformBase;

UCLASS(Abstract, Blueprintable)
class UPalWorkBase : public UObject, public IPalBaseCampAssignableObjectInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWorkAssignUpdateDelegateWithWorkAssign, UPalWorkBase*, Work, UPalWorkAssign*, WorkAssign);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWorkAssignUpdateDelegateWithIndividualId, UPalWorkBase*, Work, const FPalInstanceID&, IndividualId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWorkAssignRequirementDelegate, UPalWorkBase*, Work, const FPalWorkAssignRequirementParameter&, RequirementParameter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNotifyWorkDelegate, UPalWorkBase*, Work);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotifyWorkDelegate OnDisposeDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotifyWorkDelegate OnFinishWorkInServerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotifyWorkDelegate OnReflectFinishWorkDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotifyWorkDelegate OnUpdateAssignedCharacterDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotifyWorkDelegate OnUpdateCurrentStateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorkAssignRequirementDelegate OnRequiredAssignWorkDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorkAssignUpdateDelegateWithWorkAssign OnAssignWorkDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorkAssignUpdateDelegateWithIndividualId OnUnassignWorkDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorkAssignUpdateDelegateWithIndividualId OnStartWorkDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorkAssignUpdateDelegateWithIndividualId OnEndWorkDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalBoundsTransform WorkableBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName AssignDefineDataId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalWorkType OverrideWorkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalWorkAssignLocalLocation> AssignLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid BaseCampIdBelongTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerMapObjectModelId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerMapObjectConcreteModelId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalWorkBehaviourType BehaviourType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalWorkAssignableFixedType AssignableFixedType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bAssignableOtomo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanTriggerWorkerEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanStealAssign;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    EPalWorkProgressState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UPalWorkProgressTransformBase* Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalFastWorkAssignRepInfoArray AssignRepInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGroupRaycastStartOffsetOrigin;
    
public:
    UPalWorkBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState();
    
public:
    UFUNCTION(BlueprintCallable)
    void IssueNotifierLog_WorkStart(const UPalCharacterParameterComponent* CharacterParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistAssignableSlot(const UPalIndividualCharacterHandle* AssignIndividualHandle, const bool bByFixedAssign) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAssignedCharacter(const UPalIndividualCharacterHandle* IndividualHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAssignableFixedOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetWorkName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetWorkId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWorkAssignInfo(TArray<FPalWorkAssignInfo>& OutWorkAssignInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWorkableElementTypeNames(TArray<FText>& outElementNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGenusCategorieNames(TArray<FText>& outGenusCategorieNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAssignedCharacters(TArray<UPalIndividualCharacterSlot*>& IndividualSlots) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalWorkAssignableFixedType GetAssignableFixedType() const;
    

    // Fix for true pure virtual functions not being implemented
};

