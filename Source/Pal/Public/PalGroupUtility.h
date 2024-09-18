#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPalOrganizationType.h"
#include "PalInstanceID.h"
#include "PalGroupUtility.generated.h"

class UObject;
class UPalGroupGuildBase;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class UPalGroupUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalGroupUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EPalOrganizationType GetOrganizationTypeByIndividualId(const UObject* WorldContextObject, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EPalOrganizationType GetOrganizationTypeByIndividualHandle(const UObject* WorldContextObject, UPalIndividualCharacterHandle* IndividualHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalGroupGuildBase* GetLocalPlayerGuild(const UObject* WorldContextObject);
    
};

