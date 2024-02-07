#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActionDynamicParameter.h"
#include "Templates/SubclassOf.h"
#include "PalNetworkCharacterComponent.generated.h"

class APalCharacter;
class APalPlayerCharacter;
class UPalActionBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkCharacterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkCharacterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestReflectAction_ToServer(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReflectAction_ToClient(APalCharacter* Character, FActionDynamicParameter Param, TSubclassOf<UPalActionBase> actionClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyTalkStart_ToServer(APalPlayerCharacter* TalkPlayer, APalCharacter* TargetNPC);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyTalkEnd_ToServer(APalPlayerCharacter* TalkPlayer, APalCharacter* TargetNPC);
    
};

