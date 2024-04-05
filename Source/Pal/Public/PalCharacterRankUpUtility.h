#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalInstanceID.h"
#include "PalCharacterRankUpUtility.generated.h"

class UObject;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API UPalCharacterRankUpUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalCharacterRankUpUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void SimulateRankUpCharacterByHandle(const UObject* WorldContextObject, const UPalIndividualCharacterHandle* Target, const TArray<UPalIndividualCharacterHandle*>& Resources, int32& OutToRank, int32& OutToRankUpExp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void SimulateRankUpCharacter(const UObject* WorldContextObject, const FPalInstanceID& TargetId, const TArray<FPalInstanceID>& ResourceIds, int32& OutToRank, int32& OutToRankUpExp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetRequiredInitRankCharacterNum(const UObject* WorldContextObject, const int32 Rank);
    
};

