#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalIncidentBroadcastParameter.h"
#include "PalNetworkInvaderComponent.generated.h"

class APalNPC;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNetworkInvaderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkInvaderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestRecruitPal(APalNPC* NPC);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnInvaderStart(const FPalIncidentBroadcastParameter& Parameter);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnInvaderEnd(const FPalIncidentBroadcastParameter& Parameter);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnInvaderArrived(const FPalIncidentBroadcastParameter& Parameter);
    
};

