#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalKillLogDisplayType.h"
#include "PalKillLogDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FPalKillLogDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalKillLogDisplayType LogType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AttackerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackerCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid AttackerPlayerUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KilledCharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KilledCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid KilledPlayerUID;
    
    PAL_API FPalKillLogDisplayData();
};

