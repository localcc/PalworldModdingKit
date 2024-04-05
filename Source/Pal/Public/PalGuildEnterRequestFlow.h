#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalGuildRequestFlowBase.h"
#include "PalGuildEnterRequestFlow.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalGuildEnterRequestFlow : public UPalGuildRequestFlowBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid ApplicantPlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid RespondentPlayerUId;
    
public:
    UPalGuildEnterRequestFlow();

};

