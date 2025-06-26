#pragma once
#include "CoreMinimal.h"
#include "PalContainerId.h"
#include "PalPlayerDataEquipLanternData.h"
#include "PalPlayerDataInventoryInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerDataInventoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalContainerId CommonContainerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalContainerId DropSlotContainerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalContainerId EssentialContainerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalContainerId WeaponLoadOutContainerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalContainerId PlayerEquipArmorContainerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalContainerId FoodEquipContainerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPlayerDataEquipLanternData LanternEquipData;
    
    PAL_API FPalPlayerDataInventoryInfo();
};

