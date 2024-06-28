#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "Chaos/ChaosEngineInterface.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalPassivePartnerSkillIdAndParameters.h"
#include "PalPassivePartnerSkillStatus.h"
#include "PalPartnerSkillPassiveSkill.generated.h"

class AActor;
class ACharacter;
class APalCharacter;
class APalPlayerCharacter;
class APalPlayerController;
class UPalCharacterParameterComponent;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API UPalPartnerSkillPassiveSkill : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FIsRestricted, AActor*, Trainer);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsRestricted IsRestrictedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isReserving;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRestricted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireWorkerWorkingPassiveSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWorking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalPassivePartnerSkillIdAndParameters> PassiveSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalDataTableRowName_PassiveSkillData, FPalPassivePartnerSkillStatus> SkillStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRank;
    
public:
    UPalPartnerSkillPassiveSkill();

private:
    UFUNCTION(BlueprintCallable)
    void OnWorkerAssignChanged(UPalCharacterParameterComponent* Parameter);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateOtomoHolder(APalCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnUpdateInventoryContainer();
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateCurrentGround(TEnumAsByte<EPhysicalSurface> GroundType);
    
private:
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
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRemoveWorker(UPalIndividualCharacterHandle* RemoveCharacterHandle);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsWorker();
    
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsOtomoHolder();
    
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsOtomo();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeDisablePassiveSkill(bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void OnAddNewWorker(UPalIndividualCharacterHandle* AddCharacterHandle);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsWorker();
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsOtomoHolder();
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsOtomo();
    
private:
    UFUNCTION(BlueprintCallable)
    void ObserveWorking();
    
    UFUNCTION(BlueprintCallable)
    bool IsRestricted() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize(const TArray<FPalPassivePartnerSkillIdAndParameters>& _PassiveSkills);
    
private:
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
    
private:
    UFUNCTION(BlueprintCallable)
    APalCharacter* GetOwner() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetOtomoRank() const;
    
};

