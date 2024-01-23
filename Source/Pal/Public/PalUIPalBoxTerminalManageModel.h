#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "PalUIPalBoxTerminalManageModel.generated.h"

class UPalIndividualCharacterSlot;
class UPalUIBaseCampPartyModel;
class UPalUIBaseCampWorkersModel;
class UPalUIPalBoxModel;

UCLASS(Blueprintable)
class UPalUIPalBoxTerminalManageModel : public UObject {
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
    TSubclassOf<UPalUIBaseCampPartyModel> BaseCampPartyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalUIBaseCampPartyModel* BaseCampParty;
    
public:
    UPalUIPalBoxTerminalManageModel();
    UFUNCTION(BlueprintCallable)
    void MoveSlotToWorker(UPalIndividualCharacterSlot* Slot);
    
    UFUNCTION(BlueprintCallable)
    void MoveSlotToPosses(UPalIndividualCharacterSlot* Slot);
    
    UFUNCTION(BlueprintCallable)
    void MoveSlotToParty(UPalIndividualCharacterSlot* Slot);
    
    UFUNCTION(BlueprintCallable)
    void MoveSlotToLost(UPalIndividualCharacterSlot* Slot);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const FGuid& BaseCampId);
    
};

