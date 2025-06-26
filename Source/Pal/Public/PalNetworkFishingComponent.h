#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalFishingResultType.h"
#include "EPalFishingRodState.h"
#include "PalNetworkFishingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNetworkFishingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkFishingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SuccessCatchBattle_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StartFishing_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StartCatchBattle_ToServer(const FGuid& SpotAreaId, const FGuid& TargetFishShadowId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetRodState_ToServer(EPalFishingRodState State);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetFloatLocation_ToServer(FVector FloatLocation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestUseBait_ToServer(const FGuid& RequestPlayerUId, const FName BaitItemId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestRecordFirstFishing_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestObtainCatchCharacter_ToServer(const FGuid& SpotId, const FGuid& FishShadowId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestFishing_ToServer(const FGuid& SpotId, const FGuid& FishShadowId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestEscapeFishShadow_ToServer(const FGuid& SpotId, const FGuid& FishShadowId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveUseBaitResult_ToClient(bool IsSuccess);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveFishingResult_ToClinet(EPalFishingResultType resultType);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveEscapeFishShadow_ToClinet(const FGuid& SpotId, const FGuid& FishShadowId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void FinishCutscene_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void FailedCatchBattle_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void EndFishing_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void EndCatchBattle_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void CancelFishing_ToServer();
    
};

