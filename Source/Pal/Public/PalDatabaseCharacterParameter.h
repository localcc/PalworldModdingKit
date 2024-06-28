#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EPalBattleBGMType.h"
#include "EPalElementType.h"
#include "EPalGenusCategoryType.h"
#include "EPalMapObjectMaterialSubType.h"
#include "EPalOrganizationType.h"
#include "EPalSizeType.h"
#include "EPalTribeID.h"
#include "EPalWeaponType.h"
#include "EPalWorkSuitability.h"
#include "PalDropItemDatabaseRow.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalSizeParameterDataRow.h"
#include "PalTalentUpItemDataRow.h"
#include "PalWorkSuitabilityInfo.h"
#include "Templates/SubclassOf.h"
#include "PalDatabaseCharacterParameter.generated.h"

class APalCharacter;
class UDataTable;
class UPalAIResponsePreset;
class UPalAISightResponsePreset;
class UPalCombiMonsterParameter;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;
class UPalPettingPresset;
class UTexture2D;

UCLASS(Blueprintable)
class PAL_API UPalDatabaseCharacterParameter : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<UPalAIResponsePreset>> AIResponsePresetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<UPalAISightResponsePreset>> AISightResponsePresetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalPettingPresset> PettingPressetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerParameterDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MonsterParameterDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HumanParameterDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DropItemDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MonsterNameDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HumanNameDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharacterIconDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharacterSkinIconDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BPClassDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PartnerSkillDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PalSizeParameterDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PalCapturedCageDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PalStatusEffectFoodDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PalGainStatusPointsItemDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PalCombiUniqueDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PalTalentUpItemDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NPCOtomoWazaDataTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> TalentMagnificationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalPettingPresset* PettingPressetInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalCombiMonsterParameter* CombiMonsterParameter;
    
public:
    UPalDatabaseCharacterParameter();

    UFUNCTION(BlueprintCallable)
    void UpdateApplyDatabaseToIndividualParameter(UPalIndividualCharacterParameter* IndividualParameter);
    
    UFUNCTION(BlueprintCallable)
    bool SetupSaveParameter(const FName CharacterID, const int32 Level, const FGuid& OwnerPlayerUId, FPalIndividualCharacterSaveParameter& outParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 HigherLevelOtomoFromTrainer(const UPalIndividualCharacterParameter* IndividualCharacterParameter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWorkSuitabilityRank(FName RowName, TMap<EPalWorkSuitability, int32>& WorkSuitabilities);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWorkSuitabilityMaterialSubTypes(FName RowName, TArray<EPalMapObjectMaterialSubType>& MaterialSubTypes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWorkSuitability(FName RowName, TArray<EPalWorkSuitability>& WorkSuitabilities);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalWeaponType GetWeaponType(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWeaponEquip(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetViewingDistance_cm(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetViewingAngle_Degree(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseBossHPGauge(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalTribeID GetTribe(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSupportBySaveParameter(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSupport(UPalIndividualCharacterParameter* IndividualParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalSizeType GetSize(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShotAttackBySaveParameter(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShotAttack(const UPalIndividualCharacterParameter* IndividualParameter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRarity(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPriceRate(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPrefixNameMsgID(const FName& CharacterID, FName& OutMsgID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalPettingPresset* GetPettingPreset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPassiveSkill(FName RowName, TArray<FName>& PassiveSkill);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPartnerSkillMsgID(const FName& CharacterID, FName& OutMsgID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalOrganizationType GetOrganizationType(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNocturnal(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMeleeAttackBySaveParameter(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMeleeAttack(UPalIndividualCharacterParameter* IndividualParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLocalizedCharacterName(const FName& CharacterID, FText& OutText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsTowerBoss(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsRaidBoss(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPal(FName RowName);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsBoss(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHPBySaveParameter(const FPalIndividualCharacterSaveParameter& SaveParameter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHP(const UPalIndividualCharacterParameter* IndividualParameter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHearingRate(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalGenusCategoryType GetGenusCategory(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFoodAmount(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExpRatio(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetElementType(FName RowName, EPalElementType& Element1, EPalElementType& Element2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDropItemData(const FName& CharacterID, const int32 Level, FPalDropItemDatabaseRow& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefenseBySaveParameter(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefense(const UPalIndividualCharacterParameter* IndividualParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalWorkSuitabilityInfo> GetCraftSpeeds(UPalIndividualCharacterParameter* IndividualParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCraftSpeedBySaveParameter(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCraftSpeed(UPalIndividualCharacterParameter* IndividualParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetCharacterIconTexturePath(const FName CharacterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetCharacterIconTextureBySkinName(const FName& SkinName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetCharacterIconTextureByIndividualHandle(const UPalIndividualCharacterHandle* IndividualHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetCharacterIconTexture(const FName CharacterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCaptureRateCorrect(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBPClassName(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<APalCharacter> GetBPClass(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalBattleBGMType GetBattleBGM(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindTalentUpItem(FName ItemName, FPalTalentUpItemDataRow& OutData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindPalSizeParameter(EPalSizeType CharacterSize, FPalSizeParameterDataRow& RowData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    int32 CalcCorrectedLevel(const int32 TrainerLevel, const int32 TargetCharacterLevel, const UObject* WorldContextObject) const;
    
};

