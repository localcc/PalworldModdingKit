#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectPlayerRecordModule.generated.h"

class APalPlayerState;
class UPalMapObjectPlayerRecordModule;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectPlayerRecordModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMulticastIntValDelegate, UPalMapObjectPlayerRecordModule*, Module, const FName, Key, const int32, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMulticastBoolValDelegate, UPalMapObjectPlayerRecordModule*, Module, const FName, Key, const bool, Value);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMulticastBoolValDelegate OnUpdatePlayerRecordBoolValDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMulticastIntValDelegate OnUpdatePlayerRecordIntValDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName TargetKey;
    
public:
    UPalMapObjectPlayerRecordModule();
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdatePlayerRecordIntVal(const FName Key, const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatePlayerRecordBoolVal(const FName Key, const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteSyncPlayerFromServer_InClient(APalPlayerState* LocalPlayerState);
    
};

