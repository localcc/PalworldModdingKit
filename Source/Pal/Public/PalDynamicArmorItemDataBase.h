#pragma once
#include "CoreMinimal.h"
#include "PalDynamicItemDataBase.h"
#include "PalObjectDurabilityInterface.h"
#include "PalDynamicArmorItemDataBase.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalDynamicArmorItemDataBase : public UPalDynamicItemDataBase, public IPalObjectDurabilityInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Durability, meta=(AllowPrivateAccess=true))
    float Durability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OldDurability;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> PassiveSkillList;
    
public:
    UPalDynamicArmorItemDataBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetDurability(float NewDurability);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Durability();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetPassiveSkillList() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMaxDurability() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDurability() const;
    
    UFUNCTION(BlueprintCallable)
    void DeleteAllPassive();
    
    UFUNCTION(BlueprintCallable)
    bool ChangePassiveSkill(int32 passiveIndex, FName SkillName);
    
    UFUNCTION(BlueprintCallable)
    bool AddPassiveSkill(FName SkillName);
    

    // Fix for true pure virtual functions not being implemented
};

