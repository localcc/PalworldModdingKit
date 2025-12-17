#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalFishingCutsceneInfo.h"
#include "PalFishingDefine.generated.h"

class AActor;

UCLASS(Blueprintable)
class UPalFishingDefine : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalFishingDefine();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCutsceneInfo(AActor* InCharacter, FPalFishingCutsceneInfo& OutCutsceneInfo);
    
};

