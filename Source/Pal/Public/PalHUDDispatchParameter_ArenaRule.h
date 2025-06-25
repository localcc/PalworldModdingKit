#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalArenaRulePanelType.h"
#include "PalArenaMatchingPlayerInfo.h"
#include "PalArenaRule.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_ArenaRule.generated.h"

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_ArenaRule : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalArenaRule ArenaRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ArenaRoomId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalArenaRulePanelType PanelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalArenaMatchingPlayerInfo MatchingPlayerInfo;
    
    UPalHUDDispatchParameter_ArenaRule();

};

