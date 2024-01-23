#pragma once
#include "CoreMinimal.h"
#include "CommonGameViewportClient.h"
#include "PalGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPalGameViewportClient : public UCommonGameViewportClient {
    GENERATED_BODY()
public:
    UPalGameViewportClient();
};

