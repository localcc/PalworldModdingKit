#pragma once
#include "CoreMinimal.h"
#include "EPalArenaRank.h"
#include "PalArenaMatchingPlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaMatchingPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalArenaRank ArenaRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerLevel;
    
    PAL_API FPalArenaMatchingPlayerInfo();
};

