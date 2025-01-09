#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalNetArchive.h"
#include "PalMapObjectOperatingTableModel.generated.h"

class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectOperatingTableModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    UPalMapObjectOperatingTableModel();

private:
    UFUNCTION(BlueprintCallable)
    void RequestReverseGender_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestReverseGender(const UPalIndividualCharacterHandle* targetHandle);
    
private:
    UFUNCTION(BlueprintCallable)
    void RequestRequestChangePassiveSkill_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestChangePassiveSkill(const UPalIndividualCharacterHandle* targetHandle, int32 skillIndex, FName ItemName);
    
};

