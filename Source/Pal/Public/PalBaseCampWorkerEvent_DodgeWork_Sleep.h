#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBaseCampWorkerEvent_DodgeWork.h"
#include "PalBaseCampWorkerEvent_DodgeWork_Sleep.generated.h"

UCLASS(Blueprintable)
class UPalBaseCampWorkerEvent_DodgeWork_Sleep : public UPalBaseCampWorkerEvent_DodgeWork {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SleepMinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SanityValueStillSleeping;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval WalkTime_BeforeSleep;
    
public:
    UPalBaseCampWorkerEvent_DodgeWork_Sleep();
};

