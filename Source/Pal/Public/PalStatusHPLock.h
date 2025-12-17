#pragma once
#include "CoreMinimal.h"
#include "PalStatusBase.h"
#include "PalStatusHPLock.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalStatusHPLock : public UPalStatusBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentHPLockRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LockEnable;
    
public:
    UPalStatusHPLock();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHPLockRate(const float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReleaseLock();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetLockHPRate(float& OutRate) const;
    
};

