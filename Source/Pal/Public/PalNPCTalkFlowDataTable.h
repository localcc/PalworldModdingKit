#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalNPCTalkFlowDataTable.generated.h"

class UPalNPCTalkFlowAssetBase;

USTRUCT(BlueprintType)
struct FPalNPCTalkFlowDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPalNPCTalkFlowAssetBase> SoftTalkFlowAsset;
    
    PAL_API FPalNPCTalkFlowDataTable();
};

