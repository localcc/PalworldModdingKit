#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectLauncherControlInterface.generated.h"

class AActor;
class APalCharacter;

UINTERFACE(Blueprintable, MinimalAPI)
class UPalMapObjectLauncherControlInterface : public UInterface {
    GENERATED_BODY()
};

class IPalMapObjectLauncherControlInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TurnToTarget(const AActor* TargetActor, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOwnerCharacter(const APalCharacter* OwnerCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnableTrigger(bool EnableTrigger);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FRotator GetCharacterRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetCharacterLocation() const;
    
};

