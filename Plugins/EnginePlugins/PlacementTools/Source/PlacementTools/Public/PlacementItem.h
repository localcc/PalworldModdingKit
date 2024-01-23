#pragma once
#include "CoreMinimal.h"
#include "EItemType.h"
#include "Templates/SubclassOf.h"
#include "PlacementItem.generated.h"

class AActor;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FPlacementItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EItemType> ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    PLACEMENTTOOLS_API FPlacementItem();
};

