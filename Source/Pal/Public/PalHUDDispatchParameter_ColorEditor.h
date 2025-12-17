#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_ColorEditor.generated.h"

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_ColorEditor : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnColorDelegate, const FLinearColor&, Color);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnColorDelegate OnSubmitColorDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor InitialColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> PresetColors;
    
    UPalHUDDispatchParameter_ColorEditor();

    UFUNCTION(BlueprintCallable)
    void SubmitColor(const FLinearColor& Color);
    
};

