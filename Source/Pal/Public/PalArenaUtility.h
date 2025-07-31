#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPalArenaRank.h"
#include "EPalArenaSequencerOwnerType.h"
#include "PalArenaRule.h"
#include "PalArenaWorldRankingRecord.h"
#include "PalArenaUtility.generated.h"

class APalPlayerCharacter;
class UObject;
class UPalIndividualCharacterParameter;

UCLASS(Blueprintable)
class UPalArenaUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalArenaUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsServerOwnerType(EPalArenaSequencerOwnerType OwnerType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRestrictedPal(const FPalArenaRule& Rule, UPalIndividualCharacterParameter* IndividualParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayerOwnerType(EPalArenaSequencerOwnerType OwnerType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetWorldRankingRecordCharacterNameText(const UObject* WorldContextObject, const FPalArenaWorldRankingRecord& Record);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPalArenaRank GetReleasedSoloRank(const APalPlayerCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetLocalPlayerArenaRankingInfo(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EPalArenaRank GetArenaRank(const UObject* WorldContextObject, int32 ArenaRankPoint);
    
};

