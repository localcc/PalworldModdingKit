#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalMapObjectDestroyFXType.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalFoliageTypeReference.generated.h"

class UFoliageType;

USTRUCT(BlueprintType)
struct FPalFoliageTypeReference : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFoliageType> FoliageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_MapObjectData FoliageMapObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Hp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData DropItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DropItemNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalMapObjectDestroyFXType DestroyFXType;
    
    PAL_API FPalFoliageTypeReference();
};

