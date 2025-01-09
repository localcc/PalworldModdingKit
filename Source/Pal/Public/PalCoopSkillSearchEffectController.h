#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalCoopSkillSearchEffectParameter.h"
#include "PalCoopSkillSearchEffectController.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalCoopSkillSearchEffectController : public UObject {
    GENERATED_BODY()
public:
    UPalCoopSkillSearchEffectController();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start(FPalCoopSkillSearchEffectParameter EffectParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsFinished() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsFadingOut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void End();
    
};

