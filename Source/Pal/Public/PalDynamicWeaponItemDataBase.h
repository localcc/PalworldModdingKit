#pragma once
#include "CoreMinimal.h"
#include "PalDynamicItemDataBase.h"
#include "PalObjectDurabilityInterface.h"
#include "PalDynamicWeaponItemDataBase.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalDynamicWeaponItemDataBase : public UPalDynamicItemDataBase, public IPalObjectDurabilityInterface {
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
    int32 RemainingBullets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> PassiveSkillList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ForceUpdateBulletsCounter, meta=(AllowPrivateAccess=true))
    uint8 ForceUpdateBulletsCounter;
    
public:
    UPalDynamicWeaponItemDataBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    int32 UseBullets(int32 useNum);
    
    UFUNCTION(BlueprintCallable)
    bool UseBullet();
    
    UFUNCTION(BlueprintCallable)
    void SetDurability(float NewDurability);
    
    UFUNCTION(BlueprintCallable)
    void SetBulletsNum(int32 bulletsNum);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ForceUpdateBulletsCounter();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Durability();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmptyMagazine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingBulletsNum() const;
    
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

