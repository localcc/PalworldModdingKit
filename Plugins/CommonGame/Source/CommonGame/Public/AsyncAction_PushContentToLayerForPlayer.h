#pragma once
#include "CoreMinimal.h"
#include "Engine/CancellableAsyncAction.h"
#include "GameplayTagContainer.h"
#include "PushContentToLayerForPlayerAsyncDelegateDelegate.h"
#include "AsyncAction_PushContentToLayerForPlayer.generated.h"

class APlayerController;
class UAsyncAction_PushContentToLayerForPlayer;
class UCommonActivatableWidget;

UCLASS(Blueprintable)
class COMMONGAME_API UAsyncAction_PushContentToLayerForPlayer : public UCancellableAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPushContentToLayerForPlayerAsyncDelegate BeforePush;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPushContentToLayerForPlayerAsyncDelegate AfterPush;
    
    UAsyncAction_PushContentToLayerForPlayer();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UAsyncAction_PushContentToLayerForPlayer* PushContentToLayerForPlayer(APlayerController* OwningPlayer, TSoftClassPtr<UCommonActivatableWidget> WidgetClass, FGameplayTag LayerName, bool bSuspendInputUntilComplete);
    
};

