#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_GuildLab.generated.h"

class UPalUIGuildLabModel;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_GuildLab : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalUIGuildLabModel* Model;
    
    UPalHUDDispatchParameter_GuildLab();

};

