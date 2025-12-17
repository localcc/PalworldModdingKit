#pragma once
#include "CoreMinimal.h"
#include "PalDialogParameterDialog.h"
#include "PalDialogParameter_ConfirmStartRaidBoss.generated.h"

class UPalUIMapObjectRaidBossSummonSelectionModel;

UCLASS(Blueprintable)
class UPalDialogParameter_ConfirmStartRaidBoss : public UPalDialogParameterDialog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalUIMapObjectRaidBossSummonSelectionModel* UIModel;
    
    UPalDialogParameter_ConfirmStartRaidBoss();

};

