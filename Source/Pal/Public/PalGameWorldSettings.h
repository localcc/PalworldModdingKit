#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalOptionWorldSettings.h"
#include "PalGameWorldSettings.generated.h"

UCLASS(Blueprintable, Config=PalWorldSettings)
class UPalGameWorldSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionWorldSettings OptionSettings;
    
    UPalGameWorldSettings();
};

