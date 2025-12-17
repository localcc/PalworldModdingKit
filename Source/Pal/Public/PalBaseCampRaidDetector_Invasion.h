#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampRaidDetectorBase.h"
#include "PalBaseCampRaidDetector_Invasion.generated.h"

class APalBaseCampInvasionDetector;
class APalCharacter;

UCLASS(Blueprintable)
class PAL_API UPalBaseCampRaidDetector_Invasion : public UPalBaseCampRaidDetectorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalBaseCampInvasionDetector> DetectorActor;
    
public:
    UPalBaseCampRaidDetector_Invasion();

private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterExit(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterEnter(APalCharacter* Character);
    
};

