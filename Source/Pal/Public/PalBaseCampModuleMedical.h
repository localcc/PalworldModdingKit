#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBaseCampFunctionModuleBase.h"
#include "PalBaseCampModuleMedical.generated.h"

class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;

UCLASS(Blueprintable)
class UPalBaseCampModuleMedical : public UPalBaseCampFunctionModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> ReviveWorkIds;
    
public:
    UPalBaseCampModuleMedical();
protected:
    UFUNCTION(BlueprintCallable)
    void OnReviveCharacter_ServerInternal(UPalIndividualCharacterParameter* IndividualParameter);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRemovedWorkerInServer(UPalIndividualCharacterHandle* IndividualHandle);
    
};

