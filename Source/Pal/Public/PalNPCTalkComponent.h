#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalNPCTalkComponent.generated.h"

class AActor;
class APalCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNPCTalkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTalkStartDelegate, AActor*, SelfActor, AActor*, TargetActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTalkEndDelegate, AActor*, SelfActor, AActor*, TargetActor);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTalking;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTalkStartDelegate OnTalkStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTalkEndDelegate OnTalkEndDelegate;
    
    UPalNPCTalkComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TriggerStartTalk(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void TriggerEndTalk(AActor* Other);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartTalk(AActor* Other);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool HasTalkData(APalCharacter* TalkCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsTalking();
    
};

