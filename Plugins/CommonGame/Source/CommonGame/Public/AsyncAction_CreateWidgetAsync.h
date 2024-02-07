#pragma once
#include "CoreMinimal.h"
#include "Engine/CancellableAsyncAction.h"
#include "CreateWidgetAsyncDelegateDelegate.h"
#include "AsyncAction_CreateWidgetAsync.generated.h"

class APlayerController;
class UAsyncAction_CreateWidgetAsync;
class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class COMMONGAME_API UAsyncAction_CreateWidgetAsync : public UCancellableAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateWidgetAsyncDelegate OnComplete;
    
    UAsyncAction_CreateWidgetAsync();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UAsyncAction_CreateWidgetAsync* CreateWidgetAsync(UObject* WorldContextObject, TSoftClassPtr<UUserWidget> UserWidgetSoftClass, APlayerController* OwningPlayer, bool bSuspendInputUntilComplete);
    
};

