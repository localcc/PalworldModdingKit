#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "PalUIAimReticleMapObjectAssignableData.h"
#include "PalUIAimReticleMapObjectThrowableData.h"
#include "PalUserWidget.h"
#include "PalUIAimReticleWindowBase.generated.h"

class AActor;
class UPalCharacterParameterComponent;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIAimReticleWindowBase : public UPalUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> LastWeakHitActor;
    
public:
    UPalUIAimReticleWindowBase();

protected:
    UFUNCTION(BlueprintCallable)
    void TickDisplayOutline(const FHitResult& HitResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void IsThrowableToHitResult(const FHitResult& HitResult, UPalCharacterParameterComponent* checkCharacterParam, FPalUIAimReticleMapObjectThrowableData& outThrowableData);
    
    UFUNCTION(BlueprintCallable)
    void IsAssignableToHitResult(const FHitResult& HitResult, UPalCharacterParameterComponent* checkCharacterParam, FPalUIAimReticleMapObjectAssignableData& outAssignableData);
    
};

