#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalRandomIncidentActionNotifyType.h"
#include "PalRandomIncidentActionBase.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalRandomIncidentActionBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRandomIncidentActionNotify, EPalRandomIncidentActionNotifyType, NotifyType);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRandomIncidentActionNotify OnRandomIncidentActionNotify;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTickable;
    
public:
    UPalRandomIncidentActionBase();
    UFUNCTION(BlueprintCallable)
    void Terminate();
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetTickable(bool isTickable);
    
    UFUNCTION(BlueprintCallable)
    void SendNotify(EPalRandomIncidentActionNotifyType NotifyType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTerminate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialized();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAllNpcSpawned();
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
};

