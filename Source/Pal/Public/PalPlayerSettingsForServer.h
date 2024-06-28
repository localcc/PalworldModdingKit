#pragma once
#include "CoreMinimal.h"
#include "PalPlayerSettingsForServer.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerSettingsForServer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableAutoPickupItemInOverflowWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableGuildJoinRequest;
    
    PAL_API FPalPlayerSettingsForServer();
};

