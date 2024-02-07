#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalBuildProcessState.h"
#include "PalBuildProcess.generated.h"

class UPalBuildProcess;
class UPalWorkBase;
class UPalWorkProgress;

UCLASS(Blueprintable)
class UPalBuildProcess : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateStateDelegate, UPalBuildProcess*, BuildProcess);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateStateDelegate OnUpdateStateDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateStateDelegate OnFinishBuildDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StateChanged, meta=(AllowPrivateAccess=true))
    EPalBuildProcessState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BuildWork, meta=(AllowPrivateAccess=true))
    UPalWorkProgress* BuildWork;
    
public:
    UPalBuildProcess();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StateChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuildWork();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReflectFinishBuildWork(UPalWorkBase* Work);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishWorkInServer(UPalWorkBase* Work);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalWorkProgress* GetWorkProgress() const;
    
};

