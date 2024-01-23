#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalDialogParameterDialog.h"
#include "PalDialogParameter_RequestMapObjectDismantle.generated.h"

UCLASS(Blueprintable)
class UPalDialogParameter_RequestMapObjectDismantle : public UPalDialogParameterDialog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid MapObjectInstanceId;
    
    UPalDialogParameter_RequestMapObjectDismantle();
};

