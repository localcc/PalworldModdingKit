#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalPlayerEquipmentMeshDataRow.generated.h"

class UAnimInstance;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FPalPlayerEquipmentMeshDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<USkeletalMesh>> SkeletalMeshMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<UAnimInstance>> ABPAssetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHairAttachAccessory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> HairAttachSocketNameMap;
    
    PAL_API FPalPlayerEquipmentMeshDataRow();
};

