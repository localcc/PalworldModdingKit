#pragma once
#include "CoreMinimal.h"
#include "EPalUIJoinGameInputCodeType.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalUIServerDisplayData.h"
#include "PalHUDDispatchParame_JoinGameInputCode.generated.h"

UCLASS(Blueprintable)
class UPalHUDDispatchParame_JoinGameInputCode : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalUIJoinGameInputCodeType InputCodeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalUIServerDisplayData TargetServerDisplayInfo;
    
    UPalHUDDispatchParame_JoinGameInputCode();

};

