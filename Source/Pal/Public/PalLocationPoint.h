#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalLocationBase.h"
#include "PalLocationPoint.generated.h"

UCLASS(Abstract, Blueprintable)
class UPalLocationPoint : public UPalLocationBase {
    GENERATED_BODY()
public:
    UPalLocationPoint();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableFastTravel() const;
    
    UFUNCTION(BlueprintCallable)
    void InvokeFastTravel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRotationZ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuat GetRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLocationAndRotationZ(FVector& OutLocation, float& OutRotationZ) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocation() const;
    
};

