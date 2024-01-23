#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "PalUIBaseCampManageModel.generated.h"

class UPalIndividualCharacterSlot;
class UPalUIBaseCampPartyModel;
class UPalUIBaseCampWaitersModel;
class UPalUIBaseCampWorkersModel;
class UPalUIPalBoxModel;

UCLASS(Blueprintable)
class UPalUIBaseCampManageModel : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUIPalBoxModel> PalBoxClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalUIPalBoxModel* PalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUIBaseCampWorkersModel> BaseCampWorkersClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalUIBaseCampWorkersModel* BaseCampWorkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUIBaseCampWaitersModel> BaseCampWaitersClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalUIBaseCampWaitersModel* BaseCampWaiters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUIBaseCampPartyModel> BaseCampPartyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalUIBaseCampPartyModel* BaseCampParty;
    
public:
    UPalUIBaseCampManageModel();
    UFUNCTION(BlueprintCallable)
    void MoveWaiterToWorker(const int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void MoveSlotToPosses(UPalIndividualCharacterSlot* Slot);
    
    UFUNCTION(BlueprintCallable)
    void MoveSlotToParty(UPalIndividualCharacterSlot* Slot);
    
    UFUNCTION(BlueprintCallable)
    void MoveSlotToLost(UPalIndividualCharacterSlot* Slot);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const FGuid& BaseCampId);
    
};

