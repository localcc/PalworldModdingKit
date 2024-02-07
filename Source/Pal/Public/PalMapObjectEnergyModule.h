#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalEnergyType.h"
#include "EPalMapObjectEnergyModuleStatusType.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectEnergyModule.generated.h"

class UPalMapObjectEnergyModule;

UCLASS(Blueprintable)
class UPalMapObjectEnergyModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, UPalMapObjectEnergyModule*, Module);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMulticastDelegate OnUpdateCurrentStateDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalEnergyType EnergyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float ConsumeEnergySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float CurrentConsumeEnergySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    EPalMapObjectEnergyModuleStatusType CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRequiredConsumeEnergy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid StatusHUDId;
    
public:
    UPalMapObjectEnergyModule();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RemoveHUD();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequiredEnergy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalEnergyType GetEnergyType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalMapObjectEnergyModuleStatusType GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentConsumeEnergySpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetConsumeEnergySpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanConsumeEnergy() const;
    
};

