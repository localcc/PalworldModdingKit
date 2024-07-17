#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PalStaticSkinDataAsset.generated.h"

class UPalSkinDataBase;

UCLASS(Blueprintable)
class PAL_API UPalStaticSkinDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UPalSkinDataBase*> StaticSkinMap;
    
    UPalStaticSkinDataAsset();

};

