#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "PalCoopSkillSearchEffectController.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalCoopSkillSearchEffectController : public UObject {
    GENERATED_BODY()
public:
    UPalCoopSkillSearchEffectController();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start(const FVector& Origin, float RadiusFrom, float RadiusTo, float ExtRadiusPerSec);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsFinished() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void End();
    
};

