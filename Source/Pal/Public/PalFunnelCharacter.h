#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalCharacter.h"
#include "PalDeadInfo.h"
#include "PalInstanceID.h"
#include "Templates/SubclassOf.h"
#include "PalFunnelCharacter.generated.h"

class APalPlayerCharacter;
class UPalAIActionFunnelSkillBase;
class UPalFunnelSkillModule;

UCLASS(Blueprintable)
class PAL_API APalFunnelCharacter : public APalCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalAIActionFunnelSkillBase> FunnelSkillAIActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalFunnelSkillModule> FunnelSkillModuleClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OwnerCharacterId, meta=(AllowPrivateAccess=true))
    FPalInstanceID OwnerCharacterId;
    
public:
    APalFunnelCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetOwnerCharacterId(const FPalInstanceID NewOwnerCharacterId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLocationNearTrainer();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTrainerMoveToRespawnLocation(APalPlayerCharacter* Player, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void OnTrainerDead(FPalDeadInfo DeadInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawned();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_OwnerCharacterId();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDead(FPalDeadInfo DeadInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInactive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActive();
    
private:
    UFUNCTION(BlueprintCallable)
    void InactivateSelf();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetTrainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetOwnerPal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCharacterID() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void ActivateSelf();
    
};

