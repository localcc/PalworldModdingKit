#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalStatusID.h"
#include "StatusDynamicParameter.h"
#include "PalStatusBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class UPalStatusBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEndStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FStatusDynamicParameter DynamicParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EPalStatusID StatusId;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNerverEnd;
    
public:
    UPalStatusBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickStatus(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetHalfDurationTimer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBreakStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginSomeStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEndStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwner() const;
    
};

