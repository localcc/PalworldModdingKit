#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalUISelectNumResult.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalUISelectNumChangedNumDelegateDelegate.h"
#include "PalUISelecteNumComplateDelegateDelegate.h"
#include "PalUISelectNumParameter.generated.h"

UCLASS(Blueprintable)
class UPalUISelectNumParameter : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalUISelecteNumComplateDelegate complateCallBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalUISelectNumChangedNumDelegate changedNumCallBacl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MinNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 defaultNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D Position;
    
    UPalUISelectNumParameter();
    UFUNCTION(BlueprintCallable)
    void InvokeComplateCallback(EPalUISelectNumResult Result, int32 selectedNum);
    
    UFUNCTION(BlueprintCallable)
    void InvokeChangedNumCallback(int32 selectedNum);
    
};

