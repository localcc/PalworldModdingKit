#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalCharacterStatusOperationName.h"
#include "PalCharacterStatusOperation.generated.h"

class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;

UCLASS(Blueprintable)
class PAL_API UPalCharacterStatusOperation : public UObject {
    GENERATED_BODY()
public:
    UPalCharacterStatusOperation();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TMap<FName, int32> GetReturnItemsForResetCharacterStatusAll(const UObject* WorldContextObject, const UPalIndividualCharacterParameter* TargetIndividualParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetRequiredRelicCountForLocalPlayer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetRequiredMoneyCountForResetLocalPlayer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetRequiredMoneyCountForResetCharacterStatusAll(const UObject* WorldContextObject, UPalIndividualCharacterHandle* targetHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetRequiredMoneyCountForResetCharacterStatus(const UObject* WorldContextObject, UPalIndividualCharacterHandle* targetHandle, const EPalCharacterStatusOperationName StatusName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetRequiredItemCountForCharacterStatus(const UObject* WorldContextObject, UPalIndividualCharacterHandle* targetHandle, const EPalCharacterStatusOperationName StatusName, FName& OutStaticItemId, int32& OutItemNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCurrentStatusRank(const UPalIndividualCharacterParameter* TargetIndividualParameter, const EPalCharacterStatusOperationName StatusName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetCurrentLocalPlayerStatusPoint(const UObject* WorldContextObject, const FName StatusName);
    
};

