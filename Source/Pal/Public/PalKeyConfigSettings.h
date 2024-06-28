#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "PalAxisKeyConfigKeys.h"
#include "PalKeyConfigKeys.h"
#include "PalKeyConfigSettings.generated.h"

USTRUCT(BlueprintType)
struct FPalKeyConfigSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalKeyConfigKeys> MouseAndKeyboardActionMappings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalAxisKeyConfigKeys> MouseAndKeyboardAxisMappings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalKeyConfigKeys> GamePadActionMappings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalAxisKeyConfigKeys> GamePadAxisMappings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKey> MouseAndKeyboardUIInputMappings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKey> GamePadUIInputMappings;
    
    PAL_API FPalKeyConfigSettings();
};

