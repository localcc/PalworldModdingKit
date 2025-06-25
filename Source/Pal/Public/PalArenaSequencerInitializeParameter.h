#pragma once
#include "CoreMinimal.h"
#include "EPalArenaSequenceType.h"
#include "GameDateTime.h"
#include "PalArenaPlayerInitializeParameter.h"
#include "PalArenaSequencerInitializeParameter.generated.h"

class UPalArenaInstanceModel;

USTRUCT(BlueprintType)
struct FPalArenaSequencerInitializeParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalArenaPlayerInitializeParameter> PlayerParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalArenaInstanceModel* ArenaInstanceModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpectate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalArenaSequenceType StartSequenceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameDateTime ServerSequenceBeginTime;
    
    PAL_API FPalArenaSequencerInitializeParameter();
};

