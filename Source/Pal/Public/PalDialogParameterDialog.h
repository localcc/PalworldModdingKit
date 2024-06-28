#pragma once
#include "CoreMinimal.h"
#include "Framework/Text/TextLayout.h"
#include "EPalDialogType.h"
#include "PalDialogParameterBase.h"
#include "PalDialogParameterDialog.generated.h"

UCLASS(Blueprintable)
class UPalDialogParameterDialog : public UPalDialogParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDefaultNegative;
    
    UPalDialogParameterDialog();

    UFUNCTION(BlueprintCallable)
    void SetParameters(const FText InMessage, const EPalDialogType InDialogType, const bool bInNegativeDefault, const TEnumAsByte<ETextJustify::Type> OverrideJustify);
    
};

