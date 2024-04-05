#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PalDebugOtomoPalInfo.h"
#include "PalArenaPartyAsset.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalArenaPartyAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDebugOtomoPalInfo> PalInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RidePalIndex;
    
    UPalArenaPartyAsset();

};

