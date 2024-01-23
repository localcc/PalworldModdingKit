#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalPlayerDamageCamShakeRegulator.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class PAL_API UPalPlayerDamageCamShakeRegulator : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DamageCameraShakeTable;
    
public:
    UPalPlayerDamageCamShakeRegulator();
};

