#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PalMapObjectBlueprintPart.h"
#include "PalMapObjectBlueprintDataAsset.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectBlueprintDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectBlueprintPart> Parts;
    
    UPalMapObjectBlueprintDataAsset();

};

