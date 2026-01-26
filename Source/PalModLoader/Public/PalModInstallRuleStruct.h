#pragma once
#include "CoreMinimal.h"
#include "EPalModInstallType.h"
#include "PalModInstallRuleStruct.generated.h"

USTRUCT(BlueprintType)
struct PALMODLOADER_API FPalModInstallRuleStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalModInstallType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Targets;
    
    FPalModInstallRuleStruct();
};

