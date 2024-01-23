#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalMapObjectDamagableType.h"
#include "PalBoundsTransform.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectModelStaticData.generated.h"

class APalMapObject;

USTRUCT(BlueprintType)
struct FPalMapObjectModelStaticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalBoundsTransform WorkableBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBox MeshBoxBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalMapObjectDamagableType DamagableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName BuildObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalMapObject> BlueprintClass;
    
    PAL_API FPalMapObjectModelStaticData();
};

