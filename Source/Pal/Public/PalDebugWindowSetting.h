#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PalDebugWindowSetting.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalDebugWindowSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PriorityFunctions;
    
    UPalDebugWindowSetting();
};

