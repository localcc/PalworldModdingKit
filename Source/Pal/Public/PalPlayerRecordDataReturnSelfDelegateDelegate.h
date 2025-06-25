#pragma once
#include "CoreMinimal.h"
#include "PalPlayerRecordDataReturnSelfDelegateDelegate.generated.h"

class UPalPlayerRecordData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalPlayerRecordDataReturnSelfDelegate, UPalPlayerRecordData*, RecordData);

