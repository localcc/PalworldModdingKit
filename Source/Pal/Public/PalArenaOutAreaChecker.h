#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/HitResult.h"
#include "Engine/EngineTypes.h"
#include "PalArenaOutAreaChecker.generated.h"

class AActor;
class APalCharacter;
class UPalArenaSequencer;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UPalArenaOutAreaChecker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalArenaSequencer* ArenaSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle OutAreaCheckTimerHandle;
    
public:
    UPalArenaOutAreaChecker();

private:
    UFUNCTION(BlueprintCallable)
    void ReturnCharacter(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void CheckOutAreaCharacter();
    
    UFUNCTION(BlueprintCallable)
    void BeginOverlapEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

