#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalPassiveSkills.h"
#include "PalPassiveSkillstatus.h"
#include "PalPassiveSkillBase.generated.h"

class AActor;
class ACharacter;
class APalCharacter;
class APalPlayerCharacter;
class APalPlayerController;
class UPalCharacterParameterComponent;
class UPalIndividualCharacterHandle;
class UPalItemContainer;

UCLASS(Blueprintable)
class PAL_API UPalPassiveSkillBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FIsRestricted, AActor*, Trainer);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsRestricted IsRestrictedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isReserving;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRestricted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireWorkerWorkingPassiveSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWorking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalPassiveSkills> PassiveSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalDataTableRowName_PassiveSkillData, FPalPassiveSkillstatus> SkillStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRank;
    
public:
    UPalPassiveSkillBase();

protected:
    UFUNCTION(BlueprintCallable)
    void OnWorkerAssignChanged(UPalCharacterParameterComponent* Parameter);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateOtomoHolder(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateInventoryContainer(UPalItemContainer* Container);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateBaseCampId(const FGuid& BaseCampId);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRideInactivated();
    
    UFUNCTION(BlueprintCallable)
    void OnRideActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnReserveInactivated();
    
    UFUNCTION(BlueprintCallable)
    void OnReserveActivated();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRemoveWorker(UPalIndividualCharacterHandle* RemoveCharacterHandle);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsWorker();
    
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsOtomoHolder();
    
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsOtomo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnChangeDisablePassiveSkill(bool isDisable, bool IsAllReset);
    
    UFUNCTION(BlueprintCallable)
    void OnAddNewWorker(UPalIndividualCharacterHandle* AddCharacterHandle);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsWorker();
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsOtomoHolder();
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsOtomo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ObserveWorking();
    
    UFUNCTION(BlueprintCallable)
    bool IsRestricted() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize(const TArray<FPalPassiveSkills>& _PassiveSkills);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InactivateWorkingSkill();
    
    UFUNCTION(BlueprintCallable)
    APalPlayerController* GetTrainerController() const;
    
    UFUNCTION(BlueprintCallable)
    APalPlayerCharacter* GetTrainerActor() const;
    
    UFUNCTION(BlueprintCallable)
    ACharacter* GetTrainer() const;
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetPassiveSkillList() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    APalCharacter* GetOwner() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetOtomoRank() const;
    
};

