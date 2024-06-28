#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_HelpGuide.generated.h"

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_HelpGuide : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelectGuideID;
    
    UPalHUDDispatchParameter_HelpGuide();

};

