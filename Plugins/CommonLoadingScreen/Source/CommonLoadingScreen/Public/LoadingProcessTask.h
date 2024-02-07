#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LoadingProcessInterface.h"
#include "LoadingProcessTask.generated.h"

class ULoadingProcessTask;

UCLASS(Blueprintable)
class COMMONLOADINGSCREEN_API ULoadingProcessTask : public UObject, public ILoadingProcessInterface {
    GENERATED_BODY()
public:
    ULoadingProcessTask();

    UFUNCTION(BlueprintCallable)
    void Unregister();
    
    UFUNCTION(BlueprintCallable)
    void SetShowLoadingScreenReason(const FString& InReason);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULoadingProcessTask* CreateLoadingScreenProcessTask(UObject* WorldContextObject, const FString& ShowLoadingScreenReason);
    

    // Fix for true pure virtual functions not being implemented
};

