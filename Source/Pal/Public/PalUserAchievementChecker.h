#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalUserAchievementChecker.generated.h"

UCLASS(Blueprintable)
class UPalUserAchievementChecker : public UObject {
    GENERATED_BODY()
public:
    UPalUserAchievementChecker();

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdatePalCaptureCount(FName Key, int32 NewValue);
    
};

