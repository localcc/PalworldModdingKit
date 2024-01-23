#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PalStaticItemDataAsset.generated.h"

class AActor;
class UPalStaticItemDataBase;

UCLASS(Blueprintable)
class PAL_API UPalStaticItemDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UPalStaticItemDataBase*> StaticItemDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> UndefinedVisualBlueprintClassSoft;
    
    UPalStaticItemDataAsset();
};

