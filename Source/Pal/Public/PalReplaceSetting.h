#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalReplaceSetting.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UPalReplaceSetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> CharacterIDReplacer;
    
    UPalReplaceSetting();

};

