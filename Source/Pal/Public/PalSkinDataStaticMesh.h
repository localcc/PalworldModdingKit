#pragma once
#include "CoreMinimal.h"
#include "PalSkinDataBase.h"
#include "PalSkinDataStaticMesh.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class UPalSkinDataStaticMesh : public UPalSkinDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
    UPalSkinDataStaticMesh();

};

