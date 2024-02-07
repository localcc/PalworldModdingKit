#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalGuildJoinRequestResult.h"
#include "PalNetworkGroupComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkGroupComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkGroupComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestJoinGuildRequestForPlayer_ToServer(const FGuid& RequestPlayerUId, const FGuid& TargetPlayerUId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestJoinGuildForPlayer_ToServer(const FGuid& RequestPlayerUId, const FGuid& TargetPlayerUId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestExitGuild_ToServer(const FGuid& TargetPlayerUId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestChangeGuildName_ToServer(const FGuid& GroupID, const FString& NewGuildName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestChangeGuildAdmin_ToServer(const FGuid& RequestPlayerUId, const FGuid& TargetPlayerUId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyJoinGuildRequestResult_ToServer(const FGuid& RequestPlayerUId, const FGuid& NotifyTargetPlayerUId, EPalGuildJoinRequestResult ResultType);
    
};

