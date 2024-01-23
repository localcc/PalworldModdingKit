#pragma once
#include "CoreMinimal.h"
#include "EPalGuildPlayerStatus.h"
#include "PalUIGuildMemberDisplayInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalUIGuildMemberDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAdmin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalGuildPlayerStatus PlayerStatus;
    
    PAL_API FPalUIGuildMemberDisplayInfo();
};

