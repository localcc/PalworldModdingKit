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
    // Instanced is necessary for editing DA_StaticItemDataAsset in the Editor. Thank you Zylox and Narknon!
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UPalStaticItemDataBase*> StaticItemDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> UndefinedVisualBlueprintClassSoft;
    
    UPalStaticItemDataAsset();
};

