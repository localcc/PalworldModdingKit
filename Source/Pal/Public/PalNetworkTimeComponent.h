#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalNetworkTimeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkTimeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkTimeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Client, Reliable)
    void UpdateSleepingPlayerNum_ToClient(int32 PlayerNum);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void PreNightSkip_ToClient();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NightSkip_ToClient();
    
};

