#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectStatusIndicatorParameterBase.h"
#include "PalUIMapObjectStatusIndicatorParameter_MedicalPalBed.generated.h"

class UPalUIMapObjectMedicalPalBedModel;

UCLASS(Blueprintable)
class UPalUIMapObjectStatusIndicatorParameter_MedicalPalBed : public UPalUIMapObjectStatusIndicatorParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalUIMapObjectMedicalPalBedModel* UIModel;
    
    UPalUIMapObjectStatusIndicatorParameter_MedicalPalBed();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalUIMapObjectMedicalPalBedModel* GetUIModel() const;
    
};

