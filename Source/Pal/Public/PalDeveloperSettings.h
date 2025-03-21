#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "PalDeveloperSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class PAL_API UPalDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPalDeveloperSettings();

};

