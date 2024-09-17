#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EPalBaseCampWorkerSickType.h"
#include "EPalGenderType.h"
#include "EPalStatusHungerType.h"
#include "EPalStatusPhysicalHealthType.h"
#include "EPalWazaID.h"
#include "FixedPoint64.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalWorkSuitabilityPreferenceInfo.h"
#include "PalIndividualCharacterSaveParameterUtility.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPalIndividualCharacterSaveParameterUtility : public UObject {
    GENERATED_BODY()
public:
    UPalIndividualCharacterSaveParameterUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPalWorkSuitabilityPreferenceInfo GetSaveParameterValue_WorkSuitabilityOptionInfo(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPalBaseCampWorkerSickType GetSaveParameterValue_WorkerSick(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetSaveParameterValue_UniqueNPCID(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSaveParameterValue_Talent_Shot(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSaveParameterValue_Talent_HP(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSaveParameterValue_Talent_Defense(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSaveParameterValue_Support(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetSaveParameterValue_SkinName(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSaveParameterValue_SanityValue(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSaveParameterValue_RankUpExp(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSaveParameterValue_Rank_HP(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSaveParameterValue_Rank_Defence(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSaveParameterValue_Rank_CraftSpeed(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSaveParameterValue_Rank_Attack(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSaveParameterValue_Rank(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPalStatusPhysicalHealthType GetSaveParameterValue_PhysicalHealth(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetSaveParameterValue_PassiveSkillList(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetSaveParameterValue_OwnerPlayerUId(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FGuid> GetSaveParameterValue_OldOwnerPlayerUIds(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSaveParameterValue_NickName(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFixedPoint64 GetSaveParameterValue_MaxHP(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSaveParameterValue_MaxFullStomach(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EPalWazaID> GetSaveParameterValue_MasteredWaza(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSaveParameterValue_Level(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSaveParameterValue_IsRarePal(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSaveParameterValue_IsPlayer(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSaveParameterValue_IsFavoritePal(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPalStatusHungerType GetSaveParameterValue_HungerType(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFixedPoint64 GetSaveParameterValue_HP(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPalGenderType GetSaveParameterValue_Gender(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSaveParameterValue_FullStomach(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintPure)
    static int64 GetSaveParameterValue_Exp(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EPalWazaID> GetSaveParameterValue_EquipWaza(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSaveParameterValue_CraftSpeed(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetSaveParameterValue_CharacterID(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
};

