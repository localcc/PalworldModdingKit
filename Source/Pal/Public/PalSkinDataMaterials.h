#pragma once
#include "CoreMinimal.h"
#include "PalSkinDataBase.h"
#include "PalSkinDataMaterials.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class UPalSkinDataMaterials : public UPalSkinDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials;
    
    UPalSkinDataMaterials();

};

