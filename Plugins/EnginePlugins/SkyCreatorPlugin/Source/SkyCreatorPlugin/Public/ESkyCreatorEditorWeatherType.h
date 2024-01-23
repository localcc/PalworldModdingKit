#pragma once
#include "CoreMinimal.h"
#include "ESkyCreatorEditorWeatherType.generated.h"

UENUM(BlueprintType)
enum ESkyCreatorEditorWeatherType {
    EditorWeather_WeatherPreset,
    EditorWeather_WeatherSettings,
    EditorWeather_MAX UMETA(Hidden),
};

