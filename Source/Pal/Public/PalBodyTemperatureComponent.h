#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EPalBodyTemperatureState.h"
#include "EPalPassiveSkillEffectType.h"
#include "EPalPlayerEquipItemSlotType.h"
#include "PalHeatSourceInfo.h"
#include "PalTemperatureInfo.h"
#include "PalBodyTemperatureComponent.generated.h"

class APalCharacter;
class UPalItemSlot;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalBodyTemperatureComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeTemperatureDelegate, int32, NextTemperature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeResistRankDelegate, int32, NextResistHeat, int32, NextResistCold);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeBodyStateDelegate, EPalBodyTemperatureState, BodyState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeTemperatureDelegate OnChangeTemperatureDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeResistRankDelegate OnChangeResistRankDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeBodyStateDelegate OnChangeBodyStateDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalHeatSourceInfo> HeatSourceInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelfKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle SlipDamageTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TemperatureInfo, meta=(AllowPrivateAccess=true))
    FPalTemperatureInfo TemperatureInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalTemperatureInfo TemperatureInfo_Pre_ForClient;
    
public:
    UPalBodyTemperatureComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RemoveHeatSource(FName UniqueName);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdatePassiveSkill(EPalPassiveSkillEffectType EffectType, float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateEquipment(UPalItemSlot* itemSlot, EPalPlayerEquipItemSlotType slotType);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TemperatureInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnInitializedPlayer(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnEndPassiveSkill(EPalPassiveSkillEffectType EffectType);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeHour();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CallOnChangeTemperature(int32 Next);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CallOnChangeResistRank(int32 Heat, int32 Cold);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CallOnChangeBodyState(EPalBodyTemperatureState State);
    
public:
    UFUNCTION(BlueprintCallable)
    void CallAllDelegate();
    
    UFUNCTION(BlueprintCallable)
    void AddHeatSourceInfo(FName UniqueName, FPalHeatSourceInfo HeatInfo);
    
    UFUNCTION(BlueprintCallable)
    void AddHeatSource(FName UniqueName, int32 HeatLevel);
    
};

