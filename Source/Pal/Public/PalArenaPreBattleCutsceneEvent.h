#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPalArenaPlayerIndex.h"
#include "PalArenaPreBattleCutsceneEvent.generated.h"

UCLASS(Blueprintable)
class PAL_API APalArenaPreBattleCutsceneEvent : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCameraTarget, EPalArenaPlayerIndex, PlayerIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraTarget OnCameraTargetDelegate;
    
    APalArenaPreBattleCutsceneEvent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnCameraTarget(EPalArenaPlayerIndex PlayerIndex);
    
};

