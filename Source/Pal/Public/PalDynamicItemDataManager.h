#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalDynamicItemDisposeWaitNotifyInfo.h"
#include "PalDynamicItemId.h"
#include "PalDynamicItemDataManager.generated.h"

class UPalDynamicItemDataBase;

// todo: probably has some parameters
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCreateItemDelegate);

UCLASS(Blueprintable)
class UPalDynamicItemDataManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateItemDelegate OnCreateItemInServerDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalDynamicItemId, UPalDynamicItemDataBase*> ItemDynamicDataMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DisposeReservedDynamicItemRemainingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DynamicItemDisposeReserveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalDynamicItemDisposeWaitNotifyInfo> DisposeDynamicItemIdRequestWaitInfoMap_ServerInternal;
    
public:
    UPalDynamicItemDataManager();
};

