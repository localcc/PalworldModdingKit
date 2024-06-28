#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalItemOperationResult.h"
#include "PalBaseCampModuleTransportItemDepotInterface.h"
#include "PalInstanceID.h"
#include "PalItemSlotIdAndNum.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectBreedFarmModel.generated.h"

class UPalWorkBase;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectBreedFarmModel : public UPalMapObjectConcreteModelBase, public IPalBaseCampModuleTransportItemDepotInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBreedProgressChangedDelegate, float, CurrentProgress, float, MaxProgress);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBreedProgressChangedDelegate OnUpdateBreedProgress;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> SpawnedEggInstanceIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ExistPalEggMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_UpdateBreedProgress, meta=(AllowPrivateAccess=true))
    float BreedRequiredRealTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_UpdateBreedProgress, meta=(AllowPrivateAccess=true))
    float BreedProgressTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalInstanceID> LastProceedWorkerIndividualIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> TargetBreedItemIds;
    
public:
    UPalMapObjectBreedFarmModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateAssignedCharacter(UPalWorkBase* Work);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdateBreedProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBreedProgress(float& NowProgress, float& MaxProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanProceedBreeding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalItemOperationResult CanConsumeBreedItem(FPalItemSlotIdAndNum& ConsumableItem) const;
    
};

