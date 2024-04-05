#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalGuildRequestFlowBase.h"
#include "PalGuildExitRequestFlow.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalGuildExitRequestFlow : public UPalGuildRequestFlowBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid TargetGuildId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid TargetPlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid ApplicantPlayerUId;
    
public:
    UPalGuildExitRequestFlow();

};

