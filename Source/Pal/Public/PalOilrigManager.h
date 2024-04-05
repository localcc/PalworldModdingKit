#pragma once
#include "CoreMinimal.h"
#include "PalWorldSubsystem.h"
#include "PalOilrigManager.generated.h"

class AActor;

UCLASS(Blueprintable)
class PAL_API UPalOilrigManager : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentShootingTower;
    
public:
    UPalOilrigManager();

    UFUNCTION(BlueprintCallable)
    void RemoveShootingTower(AActor* Tower);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShootingAnyTower();
    
    UFUNCTION(BlueprintCallable)
    void AddShootingTower(AActor* Tower);
    
};

