#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PalCannonDamageReactionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalCannonDamageReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCannonHPUpdateDelegate, float, CurrentHP, float, MaxHP);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCannonDeadDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCannonDeadDelegate OnCannonDeadDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCannonHPUpdateDelegate OnCannonHPUpdateDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Defense;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_UpdateHP, meta=(AllowPrivateAccess=true))
    float Hp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid HPHUDId;
    
public:
    UPalCannonDamageReactionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrintOnRepHP_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrintCreateHPHUD_BP();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdateHP();
    
    UFUNCTION(BlueprintCallable)
    void CreateHPHUD();
    
};

