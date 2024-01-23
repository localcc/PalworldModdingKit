#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BulletHoleDecalInfo.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FBulletHoleDecalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> BulletHoleDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Decal_Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Decal_Size_RandomMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Decal_Size_RandomMax;
    
    PAL_API FBulletHoleDecalInfo();
};

