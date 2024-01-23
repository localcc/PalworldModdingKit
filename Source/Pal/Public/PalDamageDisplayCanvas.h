#pragma once
#include "CoreMinimal.h"
#include "PalDamageInfo.h"
#include "PalUserWidget.h"
#include "PalDamageDisplayCanvas.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalDamageDisplayCanvas : public UPalUserWidget {
    GENERATED_BODY()
public:
    UPalDamageDisplayCanvas();
    UFUNCTION(BlueprintCallable)
    int32 CalcDisplayDamage(const FPalDamageInfo& DamageInfo, AActor* Defender, float& outSpecialDamageRate, int32& weakCount);
    
};

