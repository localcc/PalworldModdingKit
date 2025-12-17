#pragma once
#include "CoreMinimal.h"
#include "EPalRaidBossBattleType.h"
#include "PalDialogParameterDialog.h"
#include "PalDialogParameter_RaidBossBattleTypeSelection.generated.h"

UCLASS(Blueprintable)
class UPalDialogParameter_RaidBossBattleTypeSelection : public UPalDialogParameterDialog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalRaidBossBattleType SelectedBattleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName StoneItemId;
    
    UPalDialogParameter_RaidBossBattleTypeSelection();

};

