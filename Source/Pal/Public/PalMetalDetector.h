#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalWeaponBase.h"
#include "PalMetalDetector.generated.h"

class APalMapObject;
class USphereComponent;

UCLASS(Blueprintable)
class PAL_API APalMetalDetector : public APalWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BasePulseInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BasePulseIntervalMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BasePulseFadeoutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectorRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PulseFarColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PulseNearestColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalMapObject* NearestDetectorObject;
    
public:
    APalMetalDetector(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnChangedHiddenWeapon(bool bInHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USphereComponent* GetDetectorSphere() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetDetectorLocation() const;
    
};

