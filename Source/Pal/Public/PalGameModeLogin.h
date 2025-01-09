#pragma once
#include "CoreMinimal.h"
#include "PalGameModeBase.h"
#include "PalGameModeLogin.generated.h"

UCLASS(Blueprintable, NonTransient)
class PAL_API APalGameModeLogin : public APalGameModeBase {
    GENERATED_BODY()
public:
    APalGameModeLogin(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnComplete(bool bCanPlayMulti);
    
    UFUNCTION(BlueprintCallable)
    void OnCloseEalryAccess(bool _);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GoToTitle();
    
};

