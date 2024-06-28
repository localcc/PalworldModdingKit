#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_BaseCampWorkFixedAssignManage.generated.h"

class UPalUIBaseCampWorkFixedAssignManageModel;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_BaseCampWorkFixedAssignManage : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalUIBaseCampWorkFixedAssignManageModel* Model;
    
    UPalHUDDispatchParameter_BaseCampWorkFixedAssignManage();

};

