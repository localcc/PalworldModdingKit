#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalStaticLogCollector.generated.h"

class UPalLogManager;
class UPalPlayerDataStorage;

UCLASS(Blueprintable)
class PAL_API UPalStaticLogCollector : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid overInventoryWeightId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalLogManager* targetLogManager;
    
public:
    UPalStaticLogCollector();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegisterLogCollectEvent_BP();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReadyPlayerInventoryData(UPalPlayerDataStorage* PlayerDataStorage);
    
    UFUNCTION(BlueprintCallable)
    void OnOverWeightInventory(float NowWeight);
    
    UFUNCTION(BlueprintCallable)
    void OnFixedWeightInventory(float NowWeight);
    
    UFUNCTION(BlueprintCallable)
    void OnEndedWorldAutoSave(bool IsSuccess);
    
};

