#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalDialogParameterDialog.h"
#include "PalInstanceID.h"
#include "PalDialogParameter_RequestJoinGuild.generated.h"

UCLASS(Blueprintable)
class UPalDialogParameter_RequestJoinGuild : public UPalDialogParameterDialog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid TargetPlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalInstanceID TargetPlayerInstanceId;
    
    UPalDialogParameter_RequestJoinGuild();

};

