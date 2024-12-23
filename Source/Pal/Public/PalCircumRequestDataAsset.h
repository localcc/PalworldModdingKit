#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PalCircumRequestData.h"
#include "PalCircumRequestDataAsset.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalCircumRequestDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalCircumRequestData> ItemRequestData;
    
    UPalCircumRequestDataAsset();

    UFUNCTION(BlueprintCallable)
    void Build();
    
};

