#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalGuildRequestFlowBase.h"
#include "PalGuildChangeAdminRequestFlow.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalGuildChangeAdminRequestFlow : public UPalGuildRequestFlowBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid TargetGuildId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid NextAdminPlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid ApplicantPlayerUId;
    
public:
    UPalGuildChangeAdminRequestFlow();

};

