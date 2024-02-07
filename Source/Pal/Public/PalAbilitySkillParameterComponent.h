#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalInstanceID.h"
#include "PalPassiveAbilitySkills.h"
#include "PalAbilitySkillParameterComponent.generated.h"

class APalCharacter;
class UPalAbilityPassiveSkill;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalAbilitySkillParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalPassiveAbilitySkills> AbilitySkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalAbilityPassiveSkill* PassiveSkill;
    
public:
    UPalAbilitySkillParameterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnRideInactivated();
    
    UFUNCTION(BlueprintCallable)
    void OnRideActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerCharacterSpawned(FPalInstanceID ID);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInitializedCharacter(APalCharacter* OwnerCharacter);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsWorker();
    
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsPartner();
    
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsOtomoHolder();
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsWorker();
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsPartner();
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsOtomoHolder();
    
};

