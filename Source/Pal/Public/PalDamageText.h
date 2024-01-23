#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalUserWidget.h"
#include "PalDamageText.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalDamageText : public UPalUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RandomPositionMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RandomPositionMax;
    
    UPalDamageText();
};

