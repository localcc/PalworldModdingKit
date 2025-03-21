#pragma once
#include "CoreMinimal.h"
#include "PalWorldSubsystem.h"
#include "PalDimensionLockerControlSubsystem.generated.h"

class UPalDimensionLockerControl;

UCLASS(Blueprintable)
class PAL_API UPalDimensionLockerControlSubsystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalDimensionLockerControl*> DimensionLockerControls;
    
public:
    UPalDimensionLockerControlSubsystem();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSavedLockerData(UPalDimensionLockerControl* LockerControl);
    
};

