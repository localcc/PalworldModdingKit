#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalPassiveSkillEffectType.h"
#include "EPalTribeID.h"
#include "PalItemCreateParameter.h"
#include "PalPassiveSkillConditionInfo.h"
#include "PalPassiveSkillDatabaseRow.h"
#include "PalPassiveSkillEffect.h"
#include "PalPassiveSkillManager.generated.h"

class UDataTable;
class UPalDynamicItemDataBase;
class UPalPassiveSkillExtraParameterBase;

UCLASS(Blueprintable)
class PAL_API UPalPassiveSkillManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PassiveSkillDataTable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalTribeID> YakushimaTribeIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EPalPassiveSkillEffectType, UPalPassiveSkillExtraParameterBase*> PassiveSkillExtraParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPassiveSkillDatabaseRow> PalAssignableSkillMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPassiveSkillDatabaseRow> RarePalAssignableSkillMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPassiveSkillDatabaseRow> RangedWeaponAssignableSkillMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPassiveSkillDatabaseRow> MeleeWeaponAssignableSkillMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPassiveSkillDatabaseRow> ArmorAssignableSkillMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPassiveSkillDatabaseRow> AccessoryAssignableSkillMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPassiveSkillDatabaseRow> RainbowPalAssignableSkillMap;
    
public:
    UPalPassiveSkillManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnCreatedDynamicItemDataInServer(UPalDynamicItemDataBase* CreatedItemData, const FPalItemCreateParameter& CreateParameter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EPalPassiveSkillEffectType> GetSkillEffectTypes(FName SkillName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSkillEffectTotalValue(EPalPassiveSkillEffectType EffectType, const TArray<FPalPassiveSkillEffect>& skillEffectList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSkillData(const FName& SkillName, FPalPassiveSkillDatabaseRow& outSkillData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetPassiveSkillNamesRowName(const TArray<FName>& passiveList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalPassiveSkillEffect> GetPassiveSkillEffect(FPalPassiveSkillConditionInfo& ConditionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetParameterWithSkillEffect(float originalValue, EPalPassiveSkillEffectType EffectType, const TArray<FPalPassiveSkillEffect>& skillEffectList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPalAssignablePassiveIDs(TArray<FName>& List);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNameTextId(FName SkillName);
    
};

