#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalNPCInteractionComponent.generated.h"

class AActor;
class APalPlayerCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNPCInteractionComponent : public UActorComponent, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DisableTalk, meta=(AllowPrivateAccess=true))
    bool bDisableTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableTalkWhenCaptured;
    
public:
    UPalNPCInteractionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_DisableTalk();
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void EndTalk(APalPlayerCharacter* TalkPlayer);
    
    UFUNCTION(BlueprintCallable)
    void BeginPlay();
    

    // Fix for true pure virtual functions not being implemented
};

