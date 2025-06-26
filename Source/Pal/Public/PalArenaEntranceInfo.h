#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalArenaEntryPair.h"
#include "PalArenaEntranceInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaEntranceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalArenaEntryPair> EntryPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ArenaRoomId;
    
    PAL_API FPalArenaEntranceInfo();
};

