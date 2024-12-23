#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalOilrigGoalCrateBase.generated.h"

UCLASS(Blueprintable)
class PAL_API APalOilrigGoalCrateBase : public AActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsInteracted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsOpened, meta=(AllowPrivateAccess=true))
    bool IsOpened;
    
public:
    APalOilrigGoalCrateBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RequestInteract();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenDoor_BP();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OpenDoor();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsOpened();
    

    // Fix for true pure virtual functions not being implemented
};

