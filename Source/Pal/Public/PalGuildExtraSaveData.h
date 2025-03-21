#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalGuildExpeditionSaveData.h"
#include "PalGuildItemStorageSaveData.h"
#include "PalGuildLabSaveData.h"
#include "PalGuildExtraSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalGuildExtraSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalGuildItemStorageSaveData GuildItemStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalGuildLabSaveData Lab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalGuildExpeditionSaveData Expedition;
    
    PAL_API FPalGuildExtraSaveData();
};

