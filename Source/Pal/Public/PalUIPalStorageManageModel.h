#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "PalUIPalStorageManageModel.generated.h"

class UPalIndividualCharacterSlot;
class UPalUIPalStorageManageRightModel;
class UPalUIPalStorageModel;

UCLASS(Blueprintable)
class UPalUIPalStorageManageModel : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerBaseCampId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUIPalStorageModel> PalStorageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalUIPalStorageModel* PalStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUIPalStorageManageRightModel> PalStorageManageRightClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalUIPalStorageManageRightModel* PalStorageManageRight;
    
public:
    UPalUIPalStorageManageModel();
    UFUNCTION(BlueprintCallable)
    void MoveSlotToWorker(UPalIndividualCharacterSlot* Slot);
    
    UFUNCTION(BlueprintCallable)
    void MoveSlotToPosses(UPalIndividualCharacterSlot* Slot);
    
    UFUNCTION(BlueprintCallable)
    void MoveSlotToParty(UPalIndividualCharacterSlot* Slot);
    
    UFUNCTION(BlueprintCallable)
    void MoveSlotToLost(UPalIndividualCharacterSlot* Slot);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const FGuid& InOwnerBaseCampId);
    
};

