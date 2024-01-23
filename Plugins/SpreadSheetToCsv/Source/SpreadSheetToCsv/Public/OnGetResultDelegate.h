#pragma once
#include "CoreMinimal.h"
#include "EFetchResult.h"
#include "OnGetResultDelegate.generated.h"

class USpreadSheetImpoter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnGetResult, const bool, bSuccess, USpreadSheetImpoter*, Importer, const EFetchResult, Status);

