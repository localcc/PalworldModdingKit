#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "UObject/NoExportTypes.h"
#include "PalDeadInfo.h"
#include "PalLogoutPlayerController.generated.h"

class UPalPlayerInventoryData;
class UPalPlayerOtomoData;

UCLASS(Blueprintable)
class PAL_API APalLogoutPlayerController : public AAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalPlayerInventoryData* InventoryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalPlayerOtomoData* OtomoData;
    
public:
    APalLogoutPlayerController(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnDead(FPalDeadInfo DeadInfo);
    
};

