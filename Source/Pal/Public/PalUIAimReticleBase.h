#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "PalUIAimReticleMapObjectAssignableData.h"
#include "PalUIAimReticleMapObjectThrowableData.h"
#include "PalUserWidget.h"
#include "PalUIAimReticleBase.generated.h"

class UPalCharacterParameterComponent;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIAimReticleBase : public UPalUserWidget {
    GENERATED_BODY()
public:
    UPalUIAimReticleBase();

protected:
    UFUNCTION(BlueprintCallable)
    void TickDisplayOutline(const FHitResult& HitResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void IsThrowableToHitResult(const FHitResult& HitResult, UPalCharacterParameterComponent* checkCharacterParam, FPalUIAimReticleMapObjectThrowableData& outThrowableData);
    
    UFUNCTION(BlueprintCallable)
    void IsAssignableToHitResult(const FHitResult& HitResult, UPalCharacterParameterComponent* checkCharacterParam, FPalUIAimReticleMapObjectAssignableData& outAssignableData);
    
};

