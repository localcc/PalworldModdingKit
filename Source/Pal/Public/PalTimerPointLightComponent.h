#pragma once
#include "CoreMinimal.h"
#include "Components/PointLightComponent.h"
#include "FlagContainer.h"
#include "PalTimerPointLightComponent.generated.h"

class APalCharacter;
class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalTimerPointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocalOnly;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer DisableFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer EnableWhenDayTimeFlag;
    
public:
    UPalTimerPointLightComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnableWhenDayTime(FName Key, bool Enable);
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckOtomoPal_AndSetRange(APalCharacter* SelfCharacter);
    
};

