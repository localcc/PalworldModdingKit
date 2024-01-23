#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalStatModelPerformance.generated.h"

UCLASS(Blueprintable)
class UPalStatModelPerformance : public UObject {
    GENERATED_BODY()
public:
    UPalStatModelPerformance();
    UFUNCTION(BlueprintCallable)
    void SetupInitializeStat(float FrameTime, float GameThreadTime, float RenderThreadTime, float GPUTime);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void Deinitialize();
    
};

