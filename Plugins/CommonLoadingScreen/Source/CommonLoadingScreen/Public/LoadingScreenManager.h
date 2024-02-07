#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LoadingScreenManager.generated.h"

UCLASS(Blueprintable)
class COMMONLOADINGSCREEN_API ULoadingScreenManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    ULoadingScreenManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugReasonForShowingOrHidingLoadingScreen() const;
    
};

